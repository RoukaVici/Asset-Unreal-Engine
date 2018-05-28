// Fill out your copyright notice in the Description page of Project Settings.

#include "RoukaViciController.h"
#include "RoukaVici.hh"
#include <string>


// ARoukaViciController *ARoukaViciController::_instance = NULL;

// Sets default values
ARoukaViciController::ARoukaViciController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	rv = new RoukaVici();
}

// Called when the game starts or when spawned
void ARoukaViciController::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ARoukaViciController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/*void ARoukaViciController::sendVibrationCommand(int fingerID)
{
	FString fingerName;
	switch (fingerID)
	{
	case 0 :
		fingerName = "Left Thumb";
		break;
	case 1 :
		fingerName = "Left Index";
		break;
	case 2 :
		fingerName = "Left Middle";
		break;
	case 3 :
		fingerName = "Left Ring";
		break;
	case 4 :
		fingerName = "Left Pinky";
		break;
	case 5 :
		fingerName = "Right Thumb";
		break;
	case 6 :
		fingerName = "Right Index";
		break;
	case 7 :
		fingerName = "Right Middle";
		break;
	case 8 :
		fingerName = "Right Ring";
		break;
	case 9 :
		fingerName = "Right Pinky";
		break;
	default:
		fingerName = "";
		break;
	}

	FString patternName;

	switch (patternID)
	{
	case 0 :
		patternName = "Sinusoid";
		break;
	case 1 :
		patternName = "Increasing";
		break;
	case 2 :
		patternName = "Decreasing";
		break;
	default:
		patternName = "";
		break;
	}
	UE_LOG(LogTemp, Warning, TEXT("Start vibrating on finger: %s"), *fingerName);

	UE_LOG(LogTemp, Warning, TEXT("---> pattern: %s"), *patternName);
}*/

void ARoukaViciController::setVibrationPattern(int ID)
{
	UE_LOG(LogTemp, Warning, TEXT("New pattern: %d"), ID);
	patternID = ID;
}

/*void ARoukaViciController::stopVibrationCommand(int fingerID)
{
	FString fingerName;
	switch (fingerID)
	{
	case 0:
		fingerName = "Left Thumb";
		break;
	case 1:
		fingerName = "Left Index";
		break;
	case 2:
		fingerName = "Left Middle";
		break;
	case 3:
		fingerName = "Left Ring";
		break;
	case 4:
		fingerName = "Left Pinky";
		break;
	case 5:
		fingerName = "Right Thumb";
		break;
	case 6:
		fingerName = "Right Index";
		break;
	case 7:
		fingerName = "Right Middle";
		break;
	case 8:
		fingerName = "Right Ring";
		break;
	case 9:
		fingerName = "Right Pinky";
		break;
	default:
		fingerName = "";
		break;
	}
	UE_LOG(LogTemp, Warning, TEXT("Stop vibrating on finger: %s"), *fingerName);
}*/

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


int	ARoukaViciController::Vibrate(char motor, char intensity)
{
	return rv->Vibrate(motor, intensity);
}
