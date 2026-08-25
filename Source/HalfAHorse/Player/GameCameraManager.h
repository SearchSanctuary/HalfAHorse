// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "HalfAHorseCharacter.h"
#include "GameCameraManager.generated.h"

/**
 * 
 */
UCLASS()
class HALFAHORSE_API AGameCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()
	

	// Player character
	AHalfAHorseCharacter* PlayerCharacter;

	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable)
	void ConfigureCameraForPlayer();
};
