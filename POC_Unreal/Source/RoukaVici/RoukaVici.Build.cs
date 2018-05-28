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

        //PublicAdditionalLibraries.Add(@"C:\Users\Paul\Documents\Rendu\POC_Unreal_Engine\branches\LouisVersion 4.19 - 5\Binaries\Win64\bluetoothserialport.dll");

        //PublicAdditionalLibraries.Add(@"C:\Users\Paul\Documents\Rendu\POC_Unreal_Engine\branches\LouisVersion 4.19 - 5\Binaries\Win64\roukavici.dll");
    }
}
