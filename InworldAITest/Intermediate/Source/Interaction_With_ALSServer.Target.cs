using UnrealBuildTool;

public class Interaction_With_ALSServerTarget : TargetRules
{
	public Interaction_With_ALSServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("Interaction_With_ALS");
	}
}
