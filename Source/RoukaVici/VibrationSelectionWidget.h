// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/UMGStyle.h"
#include "Runtime/UMG/Public/Slate/SObjectWidget.h"
#include "Runtime/UMG/Public/IUMGModule.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"

#include "VibrationPatternParser.h"

#include "VibrationSelectionWidget.generated.h"


/**
* \class UVibrationSelectionWidget
*
* \brief Provide an example
*
* This class is the parent class of blueprint
* VibrationSelectionWidget. It is used to pass the
* variables so that the internal compenents in
* the inherited class can work properly with RoukaVici
*
* \author $Author: Louis Jahn $
*
* \version $Revision: 1.1 $
*
*/

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCreateUIDelegate);


UCLASS()
class ROUKAVICI_API UVibrationSelectionWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vibration selecton widget")
	FString mWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FmPattern> Patterns; ///< The array of the registered patterns

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool updateUI = false; ///< A boolean that indicates if the UI has been updated

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ARoukaViciController *controller;

	UPROPERTY(BlueprintAssignable, Category = "Create UI")
	FCreateUIDelegate CreateUIDelegate;

protected:

	virtual void NativeConstruct() override;
	
private:
};
