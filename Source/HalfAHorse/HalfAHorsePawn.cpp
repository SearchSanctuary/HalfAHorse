// Fill out your copyright notice in the Description page of Project Settings.


#include "HalfAHorsePawn.h"

// Sets default values
AHalfAHorsePawn::AHalfAHorsePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHalfAHorsePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHalfAHorsePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHalfAHorsePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

