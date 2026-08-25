// Copyright Epic Games, Inc. All Rights Reserved.

#include "HalfAHorseGameMode.h"
#include "Kismet/GameplayStatics.h"

AHalfAHorseGameMode::AHalfAHorseGameMode()
{
	
}

void AHalfAHorseGameMode::BeginPlay()
{
	Super::BeginPlay();
	
	// Create Second player
	UGameplayStatics::CreatePlayer(GetWorld(), 1, true);

	//CameraDirector = GetWorld()->SpawnActor<AHalfAHorseCameraDirector>(CameraDirectorClass);
	//if (CameraDirector)
	//	UE_LOG(LogTemp, Warning, TEXT("Spawned camera director"));
}
