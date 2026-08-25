// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/HalfAHorseCameraDirector.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AHalfAHorseCameraDirector::AHalfAHorseCameraDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}



void MergePlayerCameras(AHalfAHorseCharacter* P1Character, AHalfAHorseCharacter* P2Character) {
	
}

// Called when the game starts or when spawned
void AHalfAHorseCameraDirector::BeginPlay()
{
	Super::BeginPlay();
	DrawDebugSphere(GetWorld(), GetActorLocation(), 10.f, 10, FColor::White, true);

	// Get player controllers
	P1Controller = Cast<AHalfAHorsePlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	P2Controller = Cast<AHalfAHorsePlayerController>(UGameplayStatics::GetPlayerController(this, 1));

	// Get player 1 character
	if (P1Controller) {
		P1Character = Cast<AHalfAHorseCharacter>(P1Controller->GetPawn());
		if (P1Character)
			UE_LOG(LogTemp, Warning, TEXT("Character %s"), *P1Character->GetActorNameOrLabel());
	}

	SharedCamera = GetWorld()->SpawnActor<ACameraActor>(CameraClass);
}

// Called every frame
void AHalfAHorseCameraDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!P2Character || !P2Controller)
		GetPlayerCharacters();

	if (P1Character && P2Character) {
		// Find character distances
		MergingPlayerDistance = GetCharacterDistance();

		if (AllowMerge && !Merging && MergeAlpha == 0.f && MergingPlayerDistance > 0.f && MergingPlayerDistance < 150.f) {
			// Initiate camera merge
			Merging = true;
			MergePlayerCameras();
		}
		else {
			Merging = false;
		}

	}
}

float AHalfAHorseCameraDirector::GetCharacterDistance() {
	if (P1Character && P2Character) {
		float CharacterDistance = FVector::Distance(P1Character->GetActorLocation(), P2Character->GetActorLocation());
		return CharacterDistance;
	}
	else return -1.0f;
}

void AHalfAHorseCameraDirector::MergePlayerCameras()
{
	// TODO: Disable individual character control
	
	// Set shared camera location
	FVector Midpoint = (P1Character->GetActorLocation() + P2Character->GetActorLocation()) * 0.5f;
	FVector CameraPos = Midpoint - FVector(-60, 0, 75);
	FRotator CameraRot = UKismetMathLibrary::FindLookAtRotation(CameraPos, Midpoint) + FRotator(50.0f, 3.f, 0.f);
	SharedCamera->SetActorLocation(CameraPos);
	SharedCamera->SetActorRotation(CameraRot);
	DrawDebugCamera(GetWorld(), CameraPos, CameraRot, 90, 1.0f, FColor::Red, true, 100.0f);

	// Move player cameras to shared camera location smoothly
	FTransform CamTransform1 = P1Character->FollowCamera->GetComponentTransform();
	FTransform CamTransform2 = P2Character->FollowCamera->GetComponentTransform();
	FTransform SharedCameraTransform = SharedCamera->GetActorTransform();

	FVector NewPos1 = FMath::Lerp(CamTransform1.GetLocation(), SharedCameraTransform.GetLocation(), MergeAlpha);
	FVector NewPos2 = FMath::Lerp(CamTransform2.GetLocation(), SharedCameraTransform.GetLocation(), MergeAlpha);
	//FRotator NewRot1 = FMath::Lerp(Cam1.Rotator(), SharedCameraTransform.Rotator(), MergeAlpha);
	//FRotator NewRot2 = FMath::Lerp(Cam2.Rotator(), SharedCameraTransform.Rotator(), MergeAlpha);

	FVector SideOffset = FVector::CrossProduct(SharedCamera->GetActorRotation().Vector(), FVector::UpVector);
	float ShoulderStrength = 50.f;
	NewPos1 +=  SideOffset * (1 - MergeAlpha) * ShoulderStrength;
	NewPos2 -= SideOffset * (1 - MergeAlpha) * ShoulderStrength;

	UCameraComponent* Cam1 = P1Character->FollowCamera;
	UCameraComponent* Cam2 = P2Character->FollowCamera;

	Cam1->SetWorldLocationAndRotation(SharedCamera->GetActorLocation(), SharedCamera->GetActorQuat());
	Cam2->SetWorldLocationAndRotation(SharedCamera->GetActorLocation(), SharedCamera->GetActorQuat());

	if (MergeAlpha > 0.95) {
		P1Controller->SetViewTarget(SharedCamera);
		P2Controller->SetViewTarget(SharedCamera);
	}
	


}

void AHalfAHorseCameraDirector::SplitPlayerCameras()
{
}

void AHalfAHorseCameraDirector::GetPlayerCharacters()
{
	P2Controller = Cast<AHalfAHorsePlayerController>(UGameplayStatics::GetPlayerController(this, 1));
	if (P2Controller) {
		P2Character = Cast<AHalfAHorseCharacter>(P2Controller->GetPawn());
		if (P2Character)
			UE_LOG(LogTemp, Warning, TEXT("Character %s"), *P2Character->GetActorNameOrLabel());
	}
}

