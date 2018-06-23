// Fill out your copyright notice in the Description page of Project Settings.

#include "LibRoukaVici.h"
#include "Runtime/Core/Public/Misc/Paths.h"

void *libHandler = NULL;
void *libBTHandler = NULL;

InitRVici ptr_InitRVici;
Vibrate ptr_Vibrate;
StopRVici ptr_StopRVici;
SetLogMode ptr_SetLogMode;

bool ULibRoukaVici::loadLib()
{
	if (libHandler != NULL)
	{
		UE_LOG(LogTemp, Warning, TEXT("Lib RoukaVici already loaded"));
		return true;
	}

	FString filePath = *FPaths::ProjectPluginsDir();
	filePath += "RoukaVici/";
	FString filePathBT;
	FString filePathLib;

	#if PLATFORM_WINDOWS
	filePathBT = filePath + "bluetoothserialport.dll";
	filePathLib = filePath + "roukavici.dll";
	#elif PLATFORM_MAC
	filePathBT = filePath + "libbluetoothserialport.dylib";
	filePathLib = filePath + "libroukavici.dylib";
	#else
	filePathBT = filePath + "libbluetoothserialport.so";
	filePathLib = filePath + "libroukavici.so";
	#endif

	if (FPaths::FileExists(filePathBT))
		libBTHandler = FPlatformProcess::GetDllHandle(*filePathBT);

	if (FPaths::FileExists(filePathLib))
	{
		libHandler = FPlatformProcess::GetDllHandle(*filePathLib);
		if (libHandler != NULL)
		{
			FString procName = "InitRVici";
			ptr_InitRVici = (InitRVici)FPlatformProcess::GetDllExport(libHandler, *procName);
			procName = "Vibrate";
			ptr_Vibrate = (Vibrate)FPlatformProcess::GetDllExport(libHandler, *procName);
			procName = "StopRVici";
			ptr_StopRVici = (StopRVici)FPlatformProcess::GetDllExport(libHandler, *procName);
			procName = "SetLogMode";
			ptr_SetLogMode = (SetLogMode)FPlatformProcess::GetDllExport(libHandler, *procName);
			if (ptr_SetLogMode)
				ptr_SetLogMode(1);
			if (ptr_InitRVici != NULL)
				ptr_InitRVici();
			return true;
		}
	}
	UE_LOG(LogTemp, Warning, TEXT("Lib RoukaVici couldn't be loaded"));

	return false;
}

int ULibRoukaVici::initLib()
{
	if (ptr_InitRVici)
		ptr_InitRVici();
	return -1;
}

void ULibRoukaVici::callStopLib()
{
	if (ptr_StopRVici)
		ptr_StopRVici();
    
    if (libHandler)
        FPlatformProcess::FreeDllHandle(libHandler);
    
    if (libBTHandler)
        FPlatformProcess::FreeDllHandle(libBTHandler);
    
	libHandler = NULL;
	libBTHandler = NULL;
}

int ULibRoukaVici::callVibrate(int motor, int intensity)
{
	if (ptr_Vibrate)
		return ptr_Vibrate(motor, intensity);
	return -1;
}

void ULibRoukaVici::callSetLogMode(const int mode)
{
	if (ptr_SetLogMode)
		ptr_SetLogMode(mode);
}
