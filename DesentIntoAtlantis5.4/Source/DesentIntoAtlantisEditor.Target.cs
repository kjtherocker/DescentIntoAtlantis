// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class DesentIntoAtlantisEditorTarget : TargetRules
{
	public DesentIntoAtlantisEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
        
		// Update to the latest build settings version for UE 5.4
		DefaultBuildSettings = BuildSettingsVersion.V5;
        
		// Use the latest include order version to avoid compatibility issues
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;

		// Consider using a unique build environment if necessary
		//BuildEnvironment = TargetBuildEnvironment.Unique;

		ExtraModuleNames.AddRange(new string[] { "DesentIntoAtlantis" });
	}
}
