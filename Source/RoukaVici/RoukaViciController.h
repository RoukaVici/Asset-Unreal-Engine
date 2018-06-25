// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VibrationPatternParser.h"
#include "LibRoukaVici.h"
#include "RoukaViciController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateUIDelegate);

UENUM(BlueprintType)
enum class EMotorNumber : uint8
{
	MN_LeftPinky 	UMETA(DisplayName = "Left Pinky Motor"),
	MN_LeftRing 	UMETA(DisplayName = "Left Ring Motor"),
	MN_LeftMiddle	UMETA(DisplayName = "Left Middle Motor"),
	MN_LeftIndex	UMETA(DisplayName = "Left Index Motor"),
	MN_LeftThumb	UMETA(DisplayName = "Left Thumb Motor"),
	MN_RightThumb 	UMETA(DisplayName = "Right Thumb Motor"),
	MN_RightIndex 	UMETA(DisplayName = "Right Index Motor"),
	MN_RightMiddle	UMETA(DisplayName = "Right Middle Motor"),
	MN_RightRing	UMETA(DisplayName = "Right Ring Motor"),
	MN_RightPinky	UMETA(DisplayName = "Right Pinky Motor"),
	MN_LastMotor
};

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

	virtual void BeginDestroy() override;

	/**
	* Set the vibration pattern ID 
	*
	* @param patternID The ID of the pattern that is selected
	* @return void
	*/
	UFUNCTION(BlueprintCallable, Category = "RoukaViciController")
	void setVibrationPattern(int patternID);

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

	UFUNCTION(BlueprintCallable)
	void savePattern(const FmPattern &pattern, int eidtedPattern);

	UPROPERTY(BlueprintReadOnly)
	int patternID = 0; ///< the ID of the actual pattern

	UPROPERTY(BlueprintAssignable, Category = "Update UI")
	FUpdateUIDelegate UpdateUIDelegate;
};