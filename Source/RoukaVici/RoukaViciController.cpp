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
	UE_LOG(LogTemp, Warning, TEXT("New pattern: %d"), ID);
	patternID = ID;
}

// ARoukaViciController *ARoukaViciController::Instance()
// {
// 	if (!_instance)
// 	{
// 		FVector Location(0.0f, 0.0f, 0.0f);
// 		FRotator Rotation(0.0f, 0.0f, 0.0f);
// 		FActorSpawnParameters SpawnInfo;
// 		UWorld *world = GEngine->GameViewport->GetWorld();
// 		if (world)
//  		_instance = world->SpawnActor<ARoukaViciController>(Location, Rotation, SpawnInfo);
// 	}
// 	return _instance;
// }