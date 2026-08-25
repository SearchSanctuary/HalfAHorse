// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HalfAHorse : ModuleRules
{
	public HalfAHorse(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"HalfAHorse",
			"HalfAHorse/Variant_Platforming",
			"HalfAHorse/Variant_Platforming/Animation",
			"HalfAHorse/Variant_Combat",
			"HalfAHorse/Variant_Combat/AI",
			"HalfAHorse/Variant_Combat/Animation",
			"HalfAHorse/Variant_Combat/Gameplay",
			"HalfAHorse/Variant_Combat/Interfaces",
			"HalfAHorse/Variant_Combat/UI",
			"HalfAHorse/Variant_SideScrolling",
			"HalfAHorse/Variant_SideScrolling/AI",
			"HalfAHorse/Variant_SideScrolling/Gameplay",
			"HalfAHorse/Variant_SideScrolling/Interfaces",
			"HalfAHorse/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
