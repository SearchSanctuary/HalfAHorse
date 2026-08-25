// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HalfAHorsePlayerController.h"
#include "HalfAHorseCharacter.h"
#include "Camera/CameraActor.h"
#include "HalfAHorseCameraDirector.generated.h"

UCLASS()
class HALFAHORSE_API AHalfAHorseCameraDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHalfAHorseCameraDirector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Player 1
	AHalfAHorsePlayerController* P1Controller;
	AHalfAHorseCharacter* P1Character;

	// Player 
	AHalfAHorsePlayerController* P2Controller;
	AHalfAHorseCharacter* P2Character;

	float GetCharacterDistance();

	void MergePlayerCameras();

	void SplitPlayerCameras();

	void GetPlayerCharacters();

	// Pointer to shared camera
	ACameraActor* SharedCamera;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ACameraActor> CameraClass;

	float MergeAlpha = 0.f;

	// Temporary
	UPROPERTY(EditAnywhere)
	bool AllowMerge = false;

	UPROPERTY(VisibleAnywhere)
	bool Merging = false;

	UPROPERTY(VisibleAnywhere)
	float MergingPlayerDistance;


};
