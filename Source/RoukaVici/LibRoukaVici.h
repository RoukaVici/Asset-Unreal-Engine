// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LibRoukaVici.generated.h"

typedef int(*InitRVici)();
typedef int(*Vibrate)(char motor, char intensity);
typedef void(*StopRVici)();
typedef void(*SetLogMode)(const int mode);

/**
 * 
 */
UCLASS()
class ROUKAVICI_API ULibRoukaVici : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "Lib RoukaVici")
	static bool loadLib();

	UFUNCTION(BlueprintCallable, Category = "Lib RoukaVici")
	static int initLib();

	UFUNCTION(BlueprintCallable, Category = "Lib RoukaVici")
	static void callStopLib();

	UFUNCTION(BlueprintCallable, Category = "Lib RoukaVici")
	static int callVibrate(int motor, int intensity);

	UFUNCTION(BlueprintCallable, Category = "Lib RoukaVici")
	static void callSetLogMode(const int mode);
};
