// Fill out your copyright notice in the Description page of Project Settings.

#include "RoukaViciManager.h"

#include "Runtime/Core/Public/HAL/PlatformFilemanager.h"
#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"
#include "VibrationSelectionWidget.h"

URoukaViciManager *URoukaViciManager::instance = NULL;
UVibrationSelectionWidget *URoukaViciManager::patternEditor = NULL;

// Sets default values
URoukaViciManager::URoukaViciManager()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    PrimaryComponentTick.bCanEverTick = true;
    
    instance = this;
	patterns = this->patterns;
}

// Called when the game starts or when spawned
void URoukaViciManager::BeginPlay()
{
	Super::BeginPlay();
	ULibRoukaVici::LoadLib();
}

// Called every frame
void URoukaViciManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void URoukaViciManager::BeginDestroy()
{
	Super::BeginDestroy();
	//ULibRoukaVici::CallStopLib();
}

void URoukaViciManager::DisplayPatternEditor()
{
	patternEditor->SetVisibility(ESlateVisibility::Visible);
}

void URoukaViciManager::HidePatternEditor()
{
	patternEditor->SetVisibility(ESlateVisibility::Hidden);
}

void URoukaViciManager::TogglePatternEditor()
{
	if (patternEditor->GetVisibility() == ESlateVisibility::Hidden)
		patternEditor->SetVisibility(ESlateVisibility::Visible);
	else
		patternEditor->SetVisibility(ESlateVisibility::Hidden);

}

void URoukaViciManager::SetVibrationPattern(int ID)
{
	patternID = ID;
}

void URoukaViciManager::SavePattern(const FmPattern &pattern, int editedPattern)
{
	FString folderPath;
	if (GetWorld()->WorldType == EWorldType::PIE)
	{
		folderPath = FPaths::ProjectDir();
		FPaths::NormalizeDirectoryName(folderPath);
	}
	folderPath += "/Vibration Patterns/";
	FString newPattern = folderPath + pattern.name + ".json";
	FString OutputString;

	if (editedPattern < 0)
	{
		patterns.Add(pattern);
		FJsonObjectConverter::UStructToJsonObjectString(pattern, OutputString, 0, 0, 0, NULL, true);
	}
	else
	{
		FString oldPattern = folderPath + patterns[editedPattern].name + ".json";
		if (oldPattern != newPattern)
			FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*oldPattern);

		FJsonObjectConverter::UStructToJsonObjectString(pattern, OutputString, 0, 0, 0, NULL, true);
		patterns[editedPattern] = pattern;
	}

	FFileHelper::SaveStringToFile(OutputString, *newPattern);

	updateUIDelegate.Broadcast();
}

void URoukaViciManager::DeletePattern(int patternToDelete)
{
	FString folderPath;
	if (GetWorld()->WorldType == EWorldType::PIE)
	{
		folderPath = FPaths::ProjectDir();
		FPaths::NormalizeDirectoryName(folderPath);
	}
	folderPath += "/Vibration Patterns/";
	if (patternToDelete >= patterns.Num())
		return;
	FString pattern = folderPath + patterns[patternToDelete].name + ".json";
	FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*pattern);

	patterns.RemoveAt(patternToDelete);
}
