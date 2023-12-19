using UnrealBuildTool;

public class Interaction_With_ALSEditorTarget : TargetRules
{
	public Interaction_With_ALSEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V3;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Interaction_With_ALS");
	}
}
