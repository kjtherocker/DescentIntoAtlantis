// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DesentIntoAtlantis : ModuleRules
{
	public DesentIntoAtlantis(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Niagara", "UMG" });


		if (Target.Type == TargetType.Editor)
		{
			PublicDependencyModuleNames.AddRange(new string[] {"UMG","Blutility"});
		}

		PrivateDependencyModuleNames.AddRange(new string[] { });

		// Uncomment if you are using Slate UI
		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// Ensure editor-only modules are only included for editor builds
	
	}
}