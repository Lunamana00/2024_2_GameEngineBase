// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class Team4 : ModuleRules
{
	public Team4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Renderer", "RenderCore", "RHI","Niagara","HTTP","Json", "JsonUtilities",});
		PrivateDependencyModuleNames.AddRange(new string[] {  });

        PrivateDependencyModuleNames.AddRange(new string[] { "EnhancedInput", });

        PublicDependencyModuleNames.AddRange(new string[] { "MotionWarping", "Core", "CoreUObject", "Engine", "Niagara" });

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
