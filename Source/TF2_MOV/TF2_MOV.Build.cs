// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TF2_MOV : ModuleRules
{
	public TF2_MOV(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
