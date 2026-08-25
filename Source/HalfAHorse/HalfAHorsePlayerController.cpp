// Copyright Epic Games, Inc. All Rights Reserved.


#include "HalfAHorsePlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "Blueprint/UserWidget.h"
#include "HalfAHorse.h"
#include "Widgets/Input/SVirtualJoystick.h"

AHalfAHorsePlayerController::AHalfAHorsePlayerController()
{
	// Assign the Game camera manager as the player camera manager class
	PlayerCameraManagerClass = AGameCameraManager::StaticClass();
}

void AHalfAHorsePlayerController::BeginPlay()
{
	Super::BeginPlay();

	// only spawn touch controls on local player controllers
	if (SVirtualJoystick::ShouldDisplayTouchInterface() && IsLocalPlayerController())
	{
		// spawn the mobile controls widget
		MobileControlsWidget = CreateWidget<UUserWidget>(this, MobileControlsWidgetClass);

		if (MobileControlsWidget)
		{
			// add the controls to the player screen
			MobileControlsWidget->AddToPlayerScreen(0);

		} else {

			UE_LOG(LogHalfAHorse, Error, TEXT("Could not spawn mobile controls widget."));

		}

	}

	
}

void AHalfAHorsePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// only add IMCs for local player controllers
	if (IsLocalPlayerController())
	{
		// Add Input Mapping Contexts
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
		{
			for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
			{
				Subsystem->AddMappingContext(CurrentContext, 0);
			}

			// only add these IMCs if we're not using mobile touch input
			if (!SVirtualJoystick::ShouldDisplayTouchInterface())
			{
				for (UInputMappingContext* CurrentContext : MobileExcludedMappingContexts)
				{
					Subsystem->AddMappingContext(CurrentContext, 0);
				}
			}
		}
	}
}

void AHalfAHorsePlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// Call camera manager to set up player camera
	AHalfAHorseCharacter* PlayerCharacter = Cast<AHalfAHorseCharacter>(InPawn);

	// Find player character
	if (PlayerCharacter) {
		// Configure camera for player character
		if (AGameCameraManager* CameraManager = Cast<AGameCameraManager>(PlayerCameraManager)) {
			CameraManager->ConfigureCameraForPlayer();
		}	
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Could not find player half a horse character"))
		return;
	}
}

void AHalfAHorsePlayerController::StartCameraAlignment(FRotator NewRotation)
{
	bAligningCamera = true;

	TargetMergeRotation = NewRotation;
}

void AHalfAHorsePlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bAligningCamera)
	{
		FRotator NewRotation =
			FMath::RInterpTo(
				GetControlRotation(),
				TargetMergeRotation,
				DeltaTime,
				CameraAlignSpeed
			);

		SetControlRotation(NewRotation);

		float YawDifference =
			FMath::Abs(
				FRotator::NormalizeAxis(
					GetControlRotation().Yaw -
					TargetMergeRotation.Yaw
				)
			);

		if (YawDifference < 3.f)
		{
			bAligningCamera = false;
		}
	}
}
