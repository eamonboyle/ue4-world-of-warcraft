// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class WoWClone : ModuleRules
{
	public WoWClone(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
