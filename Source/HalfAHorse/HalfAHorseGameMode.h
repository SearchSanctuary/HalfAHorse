// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Player/HalfAHorseCameraDirector.h"
#include "HalfAHorseGameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class AHalfAHorseGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	AHalfAHorseGameMode();

	UPROPERTY(EditAnywhere)
	TSubclassOf<AHalfAHorseCameraDirector> CameraDirectorClass;

	AHalfAHorseCameraDirector* CameraDirector;

protected:
	virtual void BeginPlay() override;
};



