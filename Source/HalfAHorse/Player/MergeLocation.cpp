// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/MergeLocation.h"
#include "Components/SceneComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "HalfAHorsePlayerController.h"
#include "HalfAHorseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Conversation/ConversationManager.h"
#include "Conversation/DualConversationWidget.h"
#include "Engine/GameViewportClient.h"

void SetPlayerMergeLocation(APawn* Player, FVector XYLocation) {
	FVector NewLocation = FVector(XYLocation.X, XYLocation.Y, Player->GetActorLocation().Z);
	Player->SetActorLocation(NewLocation);
}

// Sets default values
AMergeLocation::AMergeLocation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneRootComp = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComp"));

	SharedCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("SharedCamera"));
	SharedCamera->SetupAttachment(SceneRootComp);

	P1Position = CreateDefaultSubobject<USceneComponent>(TEXT("Player1Position"));
	//P1Position->SetupAttachment(SceneRootComp);

	P2Position = CreateDefaultSubobject<USceneComponent>(TEXT("Player2Position"));
	//P2Position->SetupAttachment(SceneRootComp);

}

// Called when the game starts or when spawned
void AMergeLocation::BeginPlay()
{
	Super::BeginPlay();
	GetPlayers();
}

void AMergeLocation::StartMerge()
{
	MergeState = EMergeState::MovingPlayers;

	// Disable Character Movement and Look
	AHalfAHorseCharacter* P1Character = Cast<AHalfAHorseCharacter>(P1Pawn);
	AHalfAHorseCharacter* P2Character = Cast<AHalfAHorseCharacter>(P2Pawn);

	if (P1Character) {
		P1Character->GetCharacterMovement()->DisableMovement();
		P1Character->bDisableLookInput = true;
	}
	if (P2Character) {
		P2Character->GetCharacterMovement()->DisableMovement();
		P2Character->bDisableLookInput = true;
	}
}

void AMergeLocation::MovePlayers(float DeltaTime)
{
	FVector P1ActorLocation = P1Pawn->GetActorLocation();
	FVector P2ActorLocation = P2Pawn->GetActorLocation();

	// Get position above point
	FVector FinalP1Position = P1Position->GetComponentLocation();
	FinalP1Position.Z = P1Pawn->GetActorLocation().Z;
	FVector FinalP2Position = P2Position->GetComponentLocation();
	FinalP2Position.Z = P2Pawn->GetActorLocation().Z;

	// Move Players a little per frame
	FVector P1NewLocation =
		FMath::VInterpTo(
			P1ActorLocation,
			FinalP1Position,
			DeltaTime,
			3.f
		);

	P1Pawn->SetActorLocation(P1NewLocation);

	FVector P2NewLocation =
		FMath::VInterpTo(
			P2ActorLocation,
			FinalP2Position,
			DeltaTime,
			3.f
		);

	P2Pawn->SetActorLocation(P2NewLocation);

	// Check players are in position
	bool P1AtSpot = FVector::Dist(P1ActorLocation,FinalP1Position) < 5.f;
	bool P2AtSpot = FVector::Dist(P2ActorLocation, FinalP2Position) < 5.f;

	// If both in position move to next phase
	if (P1AtSpot && P2AtSpot) MergeState = EMergeState::AligningCameras;
}

void AMergeLocation::AlignCameras(float DeltaTime)
{
	if (!bAlignmentStarted) {
		FRotator P1TargetRotation = SharedCamera->GetComponentRotation();
		FRotator P2TargetRotation = SharedCamera->GetComponentRotation();

		//P1TargetRotation.Yaw -= 24.f;
		//P2TargetRotation.Yaw += 24.f;

		P1Controller->StartCameraAlignment(P1TargetRotation);
		P2Controller->StartCameraAlignment(P2TargetRotation);

		bAlignmentStarted = true;
	}
	

	if (!P1Controller->bAligningCamera && !P2Controller->bAligningCamera)
	{
		UE_LOG(LogTemp, Display, TEXT("Switching To Shared!"))
		MergeState = EMergeState::SwitchingToShared;
	}
}

void AMergeLocation::SwitchToSharedCamera()
{
	if (bSharedCameraActivated)
		return;

	bSharedCameraActivated = true;

	P1Controller->SetViewTargetWithBlend(this, 1.0f);
	P2Controller->SetViewTargetWithBlend(this, 1.0f);

	MergeState = EMergeState::Finished;
	
}

void AMergeLocation::Finish(float DeltaTime)
{
	GetWorld()->GetGameViewport()->SetForceDisableSplitscreen(true);

	MergeState = EMergeState::ConversationInProgress;

	// Start the conversation
	UE_LOG(LogTemp, Warning, TEXT("ML: Conversation Manager Starting"));

	//Get Controller and create conversation widget 
	TObjectPtr<APlayerController> Controller = GetWorld()->GetFirstPlayerController();
	UDualConversationWidget* ConversationWidget;
	ConversationWidget = CreateWidget<UDualConversationWidget>(Controller, DualConversationClass);

	//Start the conversation
	if (Controller && ConversationWidget) {
		GetWorld()->GetSubsystem<UConversationManager>()->StartConversation(Conversation, ConversationWidget);
		UE_LOG(LogTemp, Warning, TEXT("ML: Conversation Manager Started")); 
	}
	
}

// Called every frame
void AMergeLocation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Check for players
	if (!P1Pawn || !P2Pawn) GetPlayers();

	// Verify Players then check for if players are in position
	if (P1Pawn && P2Pawn) {
		P1Distance = FVector::Dist(P1Pawn->GetActorLocation(), P1Position->GetComponentLocation());
		P2Distance = FVector::Dist(P2Pawn->GetActorLocation(), P2Position->GetComponentLocation());

		// If player in range set them as ready
		P1Ready = P1Distance < 150.f ? true : false;
		P2Ready = P2Distance < 150.f ? true : false;
	}
	
	// If both ready set position and start camera merge
	if (P1Ready && P2Ready && !bMergeStarted) {
		bMergeStarted = true;
		StartMerge();
	}

	switch (MergeState) {
	case EMergeState::MovingPlayers:
		MovePlayers(DeltaTime);
		break;

	case EMergeState::AligningCameras:
		AlignCameras(DeltaTime);
		break;

	case EMergeState::SwitchingToShared:
		SwitchToSharedCamera();
		break;

	case EMergeState::Finished:
		Finish(DeltaTime);
		break;

	case EMergeState::ConversationInProgress:
		break;

	default :
		break;
	}

}

void AMergeLocation::GetPlayers()
{
	// Get player controllers
	P1Controller = Cast<AHalfAHorsePlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	P2Controller = Cast<AHalfAHorsePlayerController>(UGameplayStatics::GetPlayerController(this, 1));

	// Get player 1 character
	if (P1Controller) {
		P1Pawn = P1Controller->GetPawn();
		if (P1Pawn)
			UE_LOG(LogTemp, Warning, TEXT("Character %s"), *P1Pawn->GetActorNameOrLabel());
	}

	// Get player 2 character
	if (P2Controller) {
		P2Pawn = P2Controller->GetPawn();
		if (P2Pawn)
			UE_LOG(LogTemp, Warning, TEXT("Character %s"), *P2Pawn->GetActorNameOrLabel());
	}
}

