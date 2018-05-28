// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "RoukaViciController.h"

#include "RoukaViciFinger.generated.h"

/**
* \class ARoukaViciFinget
*
* \brief Provide an example
*
* This class is the parent class of blueprint
* Finger. It is used to pass the
* variables so that the internal compenents in
* the inherited class can work properly with RoukaVici
*
* \author $Author: Louis Jahn $
*
* \version $Revision: 1.1 $
*
*/
UCLASS()
class ROUKAVICI_API ARoukaViciFinger : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoukaViciFinger();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ARoukaViciController *controller = NULL;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/**
	* Send the vibration command for the appropriate finger
	*
	* @param fingerID The ID of the finger targeted
	* @return void
	*/
	UFUNCTION(BlueprintCallable, Category = "RoukaViciController")
	void sendVibrationCommand(int fingerID);

	/**
	* Stop the vibration command for the correct finger
	*
	* @param fingerID The ID of the finger targeted
	* @return void
	*/
	UFUNCTION(BlueprintCallable, Category = "RoukaViciController")
	void stopVibrationCommand(int fingerID);

	UPROPERTY(VisibleAnywhere)
	float mTime = 0;

private:
	bool isVibrating = false; ///< Boolean that indicate if the finger is vibrating
	int ID = -1; ///< The ID of the finger

	TArray<int> steps; ///< An aray of int representing the steps of the pattern
	int currentStepIndex = 0; ///< An int that indicate the current step
};
