// Fill out your copyright notice in the Description page of Project Settings.

#include "RoukaViciController.h"


// ARoukaViciController *ARoukaViciController::_instance = NULL;

// Sets default values
ARoukaViciController::ARoukaViciController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ARoukaViciController::BeginPlay()
{
	Super::BeginPlay();
	ULibRoukaVici::loadLib();
}

// Called every frame
void ARoukaViciController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARoukaViciController::BeginDestroy()
{
	Super::BeginDestroy();
	ULibRoukaVici::callStopLib();
}


void ARoukaViciController::setVibrationPattern(int ID)
{
	patternID = ID;
}