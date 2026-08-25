// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Conversation/ConversationDataAsset.h"
#include "MergeLocation.generated.h"

class UCameraComponent;
class USceneComponent;
class AHalfAHorsePlayerController;
class AHalfAHorseCharacter;
class APawn;

UENUM(BlueprintType)
enum class EMergeState : uint8
{
	Waiting             UMETA(DisplayName = "Waiting"),
	MovingPlayers       UMETA(DisplayName = "Moving Players"),
	AligningCameras     UMETA(DisplayName = "Aligning Cameras"),
	SwitchingToShared   UMETA(DisplayName = "Switching To Shared"),
	Finished            UMETA(DisplayName = "Finished"),
	ConversationInProgress UMETA(DisplayName = "Conversation In Progress")
};

UCLASS()
class HALFAHORSE_API AMergeLocation : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMergeLocation();

	UPROPERTY(EditAnywhere)
	UConversationDataAsset* Conversation;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UDualConversationWidget> DualConversationClass;

	FORCEINLINE EMergeState GetMergeState() const { return MergeState; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Players	
	AHalfAHorsePlayerController* P1Controller;
	AHalfAHorsePlayerController* P2Controller;

	APawn* P1Pawn;
	APawn* P2Pawn;

	// Scene set up
	UPROPERTY(EditAnywhere)
	UCameraComponent* SharedCamera;

	UPROPERTY(EditAnywhere)
	USceneComponent* SceneRootComp;

	UPROPERTY(EditAnywhere)
	USceneComponent* P1Position;

	UPROPERTY(EditAnywhere)
	USceneComponent* P2Position;

	// Triggers
	UPROPERTY(VisibleAnywhere)
	bool P1Ready = false;

	UPROPERTY(VisibleAnywhere)
	bool P2Ready = false;

	UPROPERTY(VisibleAnywhere)
	float P1Distance;

	UPROPERTY(VisibleAnywhere)
	float P2Distance;

	// Merge
	void StartMerge();

	void MovePlayers(float DeltaTime);

	void AlignCameras(float DeltaTime);

	void SwitchToSharedCamera();

	void Finish(float DeltaTime);
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void GetPlayers();

	void CheckDistances();

	bool bMergeStarted = false;

	bool bAlignmentStarted = false;

	bool bSharedCameraActivated = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EMergeState MergeState = EMergeState::Waiting;
};


