using UnrealBuildTool;

public class Interaction_With_ALSClientTarget : TargetRules
{
	public Interaction_With_ALSClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("Interaction_With_ALS");
	}
}
