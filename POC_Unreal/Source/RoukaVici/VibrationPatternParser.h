// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FileHelper.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "VibrationPatternParser.generated.h"

class UVibrationSelectionWidget;
class ARoukaViciController;

/**
* This struct store pattern information
* for a specific finger
*/
USTRUCT(BlueprintType)
struct FmFinger
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere)
	int ID; ///< ID of the finger

	UPROPERTY(BluePrintReadWrite, VisibleAnywhere)
	TArray<int> pattern; ///< Array of value representing different intensities
};

/// This struct store finger patterns with the delay
USTRUCT(BlueprintType)
struct FmPattern
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	FString configName; ///< Name of the pattern

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	float delay; ///< delay between each intensities

	UPROPERTY(VisibleAnywhere)
	FmFinger fingers[10]; ///< List of fingers for the pattern
};


/**
* \class AVibrationPatternParser
*
* \brief Provide an example
*
* This class parse the JSON files to 
* get each patterns informations for each fingers
*
* \author $Author: Louis Jahn $
*
* \version $Revision: 1.1 $
*
*/
UCLASS()
class ROUKAVICI_API AVibrationPatternParser : public AActor
{
	GENERATED_BODY()
	
public:	
	/// Sets default values for this actor's properties
	AVibrationPatternParser();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = UI)
	TSubclassOf<UUserWidget> widgetTemplate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ARoukaViciController *controller;

	UPROPERTY(EditAnywhere)
	TArray<FFilePath> pathConfig; ///< Array of path of config files

	UPROPERTY(VisibleAnywhere)
	TArray<FmPattern> patterns; ///< Array of parsed patterns

protected:
	/// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	/// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	/**
	* Parse the config files to get patterns. You must fill the file paths
	* inside the property window.
	* 
	*/
	void parseData();
};
