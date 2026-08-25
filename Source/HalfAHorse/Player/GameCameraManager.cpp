// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/GameCameraManager.h"
#include "GameFramework/SpringArmComponent.h"

void AGameCameraManager::BeginPlay()
{
	Super::BeginPlay();
}

void AGameCameraManager::ConfigureCameraForPlayer()
{	
	// Get controller owner
	if (PCOwner) {

		PlayerCharacter = Cast<AHalfAHorseCharacter>(PCOwner->GetPawn());
		// Find player index
		int32 PlayerIndex = PCOwner->GetLocalPlayer()->GetLocalPlayerIndex();
		
		if (PlayerCharacter) {
			// Set up camera position based on player index
			if (PlayerIndex == 0) {
				PlayerCharacter->SpringArm->SocketOffset = FVector(0.f, 25.0f, 0.f);
				UE_LOG(LogTemp, Warning, TEXT("Fixed Camera 1 for %s"), *PlayerCharacter->GetActorNameOrLabel());
			}
			else if (PlayerIndex == 1) {
				PlayerCharacter->SpringArm->SocketOffset = FVector(0.f, -25.0f, 0.f);
				UE_LOG(LogTemp, Warning, TEXT("Fixed Camera 2 for %s"), *PlayerCharacter->GetActorNameOrLabel());

			}
		}
		
	}
}
