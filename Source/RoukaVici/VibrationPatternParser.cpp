// Fill out your copyright notice in the Description page of Project Settings.

#include "VibrationPatternParser.h"
#include "Json.h"
#include "Runtime/JsonUtilities/Public/JsonObjectConverter.h"

#include "VibrationSelectionWidget.h"
#include "RoukaViciController.h"


// Sets default values
AVibrationPatternParser::AVibrationPatternParser()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

FmPattern::FmPattern()
{
	name = "";
	delay = 0;
	FmFinger elem;
	fingers.Init(elem, (int)EMotorNumber::MN_LastMotor);
}

void AVibrationPatternParser::parseData()
{
	FString folderPath;
	if (GetWorld()->WorldType == EWorldType::PIE)
	{
		folderPath = FPaths::ProjectDir();
		FPaths::NormalizeDirectoryName(folderPath);
	}
	folderPath += "/Vibration Patterns/";

	if (!FPaths::FileExists(folderPath + "Default.json"))
	{
		UE_LOG(LogTemp, Warning, TEXT("Vibration Patterns not found, creating default profile"));

		FmPattern elemP;
		elemP.name = "Default";
		elemP.delay = 0.5f;
		for (int i = 0; i < 10; ++i)
		{
			FmFinger elemF;
			elemF.id = i;
			elemF.pattern.Add(80);
			elemF.pattern.Add(90);
			elemP.fingers[i] = elemF;

		}

		FString OutputString;
		FJsonObjectConverter::UStructToJsonObjectString(elemP, OutputString, 0, 0, 0, NULL, true);
		FFileHelper::SaveStringToFile(OutputString, *(folderPath + "Default.json"));
	}

	TArray<FString> Files;
	IFileManager& FileManager = IFileManager::Get();
	FileManager.FindFiles(Files, *(folderPath + "*.json"), true, false);


	for (FString path : Files)
	{
		FString data;
		FFileHelper::LoadFileToString(data, *(folderPath + path));
		TSharedPtr<FJsonObject> parsedObject;
		TSharedRef< TJsonReader<> > reader = TJsonReaderFactory<>::Create(data);

		FmPattern elemP;

		if (FJsonSerializer::Deserialize(reader, parsedObject))
		{
			FString name = parsedObject->GetStringField(TEXT("name"));
			float delay = parsedObject->GetNumberField(TEXT("delay"));
			TArray<TSharedPtr<FJsonValue> > fingers = parsedObject->GetArrayField(TEXT("fingers"));
			if (name.Len() == 0 || delay <= 0 || fingers.Num() != (int)EMotorNumber::MN_LastMotor)
			{
				UE_LOG(LogTemp, Warning, TEXT("Your config file must have a valid name, a positive delay and 10 fingers"));
				continue;
			}
			int i = 0;
			elemP.name = name;
			elemP.delay = delay;
			for (TSharedPtr<FJsonValue> f : fingers)
			{
				FmFinger elemF;
				const TSharedPtr<FJsonObject> *fo;
				if (!f->TryGetObject(fo))
				{
					UE_LOG(LogTemp, Warning, TEXT("Invalid finger format"));
					continue;
				}
				int id = (*fo)->GetIntegerField(TEXT("id"));
				if (id != i)
				{
					UE_LOG(LogTemp, Warning, TEXT("Invalid finger ID, make sure it's in the right order (0 to 9)"));
					continue;
				}
				elemF.id = id;
				TArray<TSharedPtr<FJsonValue> > fon = (*fo)->GetArrayField(TEXT("pattern"));
				if (fon.Num() == 0)
				{
					UE_LOG(LogTemp, Warning, TEXT("Your config file must have a positive pattern size"));
					continue ;
				}
				for (TSharedPtr<FJsonValue> fonb : fon)
				{
					int out;
					if (fonb->TryGetNumber(out))
						elemF.pattern.Add(out);
				}
				elemP.fingers[i++] = elemF;
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Invalid file / file extension"));
			continue ;
		}
		patterns.Add(elemP);
	}
}

// Called when the game starts or when spawned
void AVibrationPatternParser::BeginPlay()
{
	Super::BeginPlay();

	parseData();

	controller->patterns = patterns;

	UVibrationSelectionWidget *widgetInstance = CreateWidget<UVibrationSelectionWidget>(GetGameInstance(), widgetTemplate);
	if (widgetInstance)
	{
		widgetInstance->AddToViewport();
		widgetInstance->Patterns = patterns;
		widgetInstance->controller = controller;
		widgetInstance->CreateUIDelegate.Broadcast();
	}
}

// Called every frame
void AVibrationPatternParser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

