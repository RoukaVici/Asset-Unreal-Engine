// Fill out your copyright notice in the Description page of Project Settings.

#include "RoukaViciFinger.h"
#include "LibRoukaVici.h"


// Sets default values
ARoukaViciFinger::ARoukaViciFinger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARoukaViciFinger::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARoukaViciFinger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	mTime += DeltaTime;
	if (isVibrating && ID >= 0 && controller != NULL && controller->patterns.Num() > 0
		&& mTime >= controller->patterns[controller->patternID].delay)
	{
		int currentStep = controller->patterns[controller->patternID].fingers[ID].pattern[currentStepIndex];
		UE_LOG(LogTemp, Warning, TEXT("Vibrating finger ID %d for an intensity of %d"), ID, currentStep);
        FString serialized = "Vibrating finger ID " + FString::FromInt(ID) + " intensity of " + FString::FromInt(currentStep) + '\n';
        
		ULibRoukaVici::callVibrate(ID, 255 * (currentStep / 100));

		currentStepIndex = (currentStepIndex == controller->patterns[controller->patternID].fingers[ID].pattern.Num() - 1 ? 0 : ++currentStepIndex);
		mTime = 0;
	}
}

void ARoukaViciFinger::sendVibrationCommand(int fingerID)
{
	UE_LOG(LogTemp, Warning, TEXT("Vibrating for: %d"), fingerID);
	isVibrating = true;
	ID = fingerID;
}

void ARoukaViciFinger::stopVibrationCommand(int fingerID)
{
	UE_LOG(LogTemp, Warning, TEXT("Stopped Vibrating for: %d"), fingerID);
	isVibrating = false;
	ID = fingerID;
	currentStepIndex = 0;
}

