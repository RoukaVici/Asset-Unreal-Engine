// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RoukaVici.hh"
#include "GameFramework/Actor.h"
#include "VibrationPatternParser.h"
#include "RoukaViciController.generated.h"

/**
* \class ARoukaViciController
*
* This class handles all the necessary functions
* and variables in order to run RoukaVici
* properly. A lot of objects in the world
* will need a reference to the instance of this class.
* You can set it up inside the properties window of the editor
*
* \author $Author: Louis Jahn $
*
* \version $Revision: 1.1 $
*
*/
UCLASS()
class ROUKAVICI_API ARoukaViciController : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	ARoukaViciController();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//UFUNCTION(BlueprintCallable, Category = "RoukaViciController")
	//void sendVibrationCommand(int finderID);

	/**
	* Set the vibration pattern ID 
	*
	* @param patternID The ID of the pattern that is selected
	* @return void
	*/
	UFUNCTION(BlueprintCallable, Category = "RoukaViciController")
	void setVibrationPattern(int patternID);

	//UFUNCTION(BlueprintCallable, Category = "RoukaViciController")
	//void stopVibrationCommand(int finderID);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<FmPattern> patterns; ///< The array of patterns registered

	/**
	* Get the desired FmFinger pattern out of the struct
	*
	* @param FingerId The ID of the finger to return
	* @return TArray<int>
	*/
	UFUNCTION(BlueprintCallable)
	static	TArray<int>	getFingerPattern(FmPattern pattern, int FingerId) { return pattern.fingers[FingerId].pattern; }

	UPROPERTY(BlueprintReadOnly)
	int patternID = 0; ///< the ID of the actual pattern

	//UFUNCTION(BlueprintCallable, Category="RoukaViciController")
	//static ARoukaViciController *Instance();

	int Vibrate(char, char);

private:
	//static ARoukaViciController *_instance;
	RoukaVici*	rv;


};

