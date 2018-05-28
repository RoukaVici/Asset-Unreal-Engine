// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class RoukaVici : ModuleRules
{
	public RoukaVici(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Json", "UMG" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true

        PublicDelayLoadDLLs.Add("bluetoothserialport.dll");
        PublicAdditionalLibraries.Add(@"..\..\Binaries\Win64\bluetoothserialport.lib");

        PublicDelayLoadDLLs.Add("roukavici.dll");
        PublicAdditionalLibraries.Add(@"..\..\Binaries\Win64\roukavici.lib");
    }
}
