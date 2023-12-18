// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/IWALS_AbilitySystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWALS_AbilitySystem() {}
// Cross Module References
	IWALS_ABILITYSYSTEM_API UEnum* Z_Construct_UEnum_IWALS_AbilitySystem_EGASAbilityInputID();
	UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGASAbilityInputID;
	static UEnum* EGASAbilityInputID_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGASAbilityInputID.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGASAbilityInputID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IWALS_AbilitySystem_EGASAbilityInputID, (UObject*)Z_Construct_UPackage__Script_IWALS_AbilitySystem(), TEXT("EGASAbilityInputID"));
		}
		return Z_Registration_Info_UEnum_EGASAbilityInputID.OuterSingleton;
	}
	template<> IWALS_ABILITYSYSTEM_API UEnum* StaticEnum<EGASAbilityInputID>()
	{
		return EGASAbilityInputID_StaticEnum();
	}
	struct Z_Construct_UEnum_IWALS_AbilitySystem_EGASAbilityInputID_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IWALS_AbilitySystem_EGASAbilityInputID_Statics::Enumerators[] = {
		{ "EGASAbilityInputID::None", (int64)EGASAbilityInputID::None },
		{ "EGASAbilityInputID::Confirm", (int64)EGASAbilityInputID::Confirm },
		{ "EGASAbilityInputID::Cancel", (int64)EGASAbilityInputID::Cancel },
		{ "EGASAbilityInputID::Apply", (int64)EGASAbilityInputID::Apply },
		{ "EGASAbilityInputID::Interaction", (int64)EGASAbilityInputID::Interaction },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IWALS_AbilitySystem_EGASAbilityInputID_Statics::Enum_MetaDataParams[] = {
		{ "Apply.Name", "EGASAbilityInputID::Apply" },
		{ "BlueprintType", "true" },
		{ "Cancel.Name", "EGASAbilityInputID::Cancel" },
		{ "Confirm.Name", "EGASAbilityInputID::Confirm" },
		{ "Interaction.Name", "EGASAbilityInputID::Interaction" },
		{ "ModuleRelativePath", "Public/IWALS_AbilitySystem.h" },
		{ "None.Name", "EGASAbilityInputID::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IWALS_AbilitySystem_EGASAbilityInputID_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
		nullptr,
		"EGASAbilityInputID",
		"EGASAbilityInputID",
		Z_Construct_UEnum_IWALS_AbilitySystem_EGASAbilityInputID_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IWALS_AbilitySystem_EGASAbilityInputID_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_IWALS_AbilitySystem_EGASAbilityInputID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_IWALS_AbilitySystem_EGASAbilityInputID_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_IWALS_AbilitySystem_EGASAbilityInputID()
	{
		if (!Z_Registration_Info_UEnum_EGASAbilityInputID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGASAbilityInputID.InnerSingleton, Z_Construct_UEnum_IWALS_AbilitySystem_EGASAbilityInputID_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGASAbilityInputID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS_GAS_Plugin_5_3_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilitySystem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS_GAS_Plugin_5_3_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilitySystem_h_Statics::EnumInfo[] = {
		{ EGASAbilityInputID_StaticEnum, TEXT("EGASAbilityInputID"), &Z_Registration_Info_UEnum_EGASAbilityInputID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3572147726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS_GAS_Plugin_5_3_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilitySystem_h_4224203611(TEXT("/Script/IWALS_AbilitySystem"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS_GAS_Plugin_5_3_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilitySystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS_GAS_Plugin_5_3_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilitySystem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
