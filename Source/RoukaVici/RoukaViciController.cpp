// Fill out your copyright notice in the Description page of Project Settings.

#include "RoukaViciController.h"

#include "Runtime/Core/Public/HAL/PlatformFilemanager.h"
#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"

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

void ARoukaViciController::savePattern(const FmPattern &pattern, int editedPattern)
{
	FString folderPath;
	if (GetWorld()->WorldType == EWorldType::PIE)
	{
		folderPath = FPaths::ProjectDir();
		FPaths::NormalizeDirectoryName(folderPath);
	}
	folderPath += "/Vibration Patterns/";
	FString oldPattern = folderPath + patterns[editedPattern].name + ".json";
	FString newPattern = folderPath + pattern.name + ".json";

	if (oldPattern != newPattern)
		FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*oldPattern);

	FString OutputString;
	FJsonObjectConverter::UStructToJsonObjectString(pattern, OutputString, 0, 0, 0, NULL, true);
	FFileHelper::SaveStringToFile(OutputString, *newPattern);

	patterns[editedPattern] = pattern;

	UpdateUIDelegate.Broadcast();
}
