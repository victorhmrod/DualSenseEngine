using UnrealBuildTool;

public class DualSenseEngine : ModuleRules
{
	public DualSenseEngine(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;

		bEnableNonInlinedGenCppWarnings = true;

		PrivateDependencyModuleNames.AddRange(new[]
		{
			"Core", "CoreUObject", "Engine", "ApplicationCore", "InputCore",
			"InputDevice", "SlateCore", "Slate", "DeveloperSettings", "DualSenseWindows"
		});
	}
}