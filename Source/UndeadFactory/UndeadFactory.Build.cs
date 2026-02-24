// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UndeadFactory : ModuleRules
{
	public UndeadFactory(ReadOnlyTargetRules Target) : base(Target)
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
			"Slate",
			"GameplayAbilities",
			"GameplayTags",
			"GameplayTasks"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"UndeadFactory",
			"UndeadFactory/Abilities",
            "UndeadFactory/Variant_Platforming",
			"UndeadFactory/Variant_Platforming/Animation",
			"UndeadFactory/Variant_Combat",
			"UndeadFactory/Variant_Combat/AI",
			"UndeadFactory/Variant_Combat/Animation",
			"UndeadFactory/Variant_Combat/Gameplay",
			"UndeadFactory/Variant_Combat/Interfaces",
			"UndeadFactory/Variant_Combat/UI",
			"UndeadFactory/Variant_SideScrolling",
			"UndeadFactory/Variant_SideScrolling/AI",
			"UndeadFactory/Variant_SideScrolling/Gameplay",
			"UndeadFactory/Variant_SideScrolling/Interfaces",
			"UndeadFactory/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
