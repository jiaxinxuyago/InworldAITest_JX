// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubAnimNodesTool/Public/MyAnimNode.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimData/BoneMaskFilter.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAnimNode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECurveBlendOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputBlendPose();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	JAKUBANIMNODESTOOL_API UEnum* Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode();
	JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LayeredBone();
	UPackage* Z_Construct_UPackage__Script_JakubAnimNodesTool();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELayeredBlendMode;
	static UEnum* ELayeredBlendMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELayeredBlendMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELayeredBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("ELayeredBlendMode"));
		}
		return Z_Registration_Info_UEnum_ELayeredBlendMode.OuterSingleton;
	}
	template<> JAKUBANIMNODESTOOL_API UEnum* StaticEnum<ELayeredBlendMode>()
	{
		return ELayeredBlendMode_StaticEnum();
	}
	struct Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode_Statics::Enumerators[] = {
		{ "ELayeredBlendMode::BranchFilter", (int64)ELayeredBlendMode::BranchFilter },
		{ "ELayeredBlendMode::BlendMask", (int64)ELayeredBlendMode::BlendMask },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode_Statics::Enum_MetaDataParams[] = {
		{ "BlendMask.Name", "ELayeredBlendMode::BlendMask" },
		{ "BranchFilter.Name", "ELayeredBlendMode::BranchFilter" },
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
		nullptr,
		"ELayeredBlendMode",
		"ELayeredBlendMode",
		Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode()
	{
		if (!Z_Registration_Info_UEnum_ELayeredBlendMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELayeredBlendMode.InnerSingleton, Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELayeredBlendMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_LayeredBone>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_LayeredBone cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_LayeredBone;
class UScriptStruct* FAnimNode_LayeredBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LayeredBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_LayeredBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LayeredBone, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("AnimNode_LayeredBone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LayeredBone.OuterSingleton;
}
template<> JAKUBANIMNODESTOOL_API UScriptStruct* StaticStruct<FAnimNode_LayeredBone>()
{
	return FAnimNode_LayeredBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BasePose;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendPoses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendPoses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendPoses;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendMasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendMasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendMasks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerSetup_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerSetup_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerSetup;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendWeights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMeshSpaceRotationBlend_MetaData[];
#endif
		static void NewProp_bMeshSpaceRotationBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshSpaceRotationBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMeshSpaceScaleBlend_MetaData[];
#endif
		static void NewProp_bMeshSpaceScaleBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshSpaceScaleBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveBlendOption_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveBlendOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlendRootMotionBasedOnRootBone_MetaData[];
#endif
		static void NewProp_bBlendRootMotionBasedOnRootBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendRootMotionBasedOnRootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerBoneBlendWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerBoneBlendWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerBoneBlendWeights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletonGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualBoneGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualBoneGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Layered blend (per bone); has dynamic number of blendposes that can blend per different bone sets\n" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Layered blend (per bone); has dynamic number of blendposes that can blend per different bone sets" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LayeredBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BasePose_MetaData[] = {
		{ "Category", "Links" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The source pose */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The source pose" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BasePose_MetaData), Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BasePose_MetaData) }; // 1465313103
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendPoses_Inner = { "BlendPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(0, nullptr) }; // 1465313103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendPoses_MetaData[] = {
		{ "Category", "Links" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Each layer's blended pose */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Each layer's blended pose" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendPoses = { "BlendPoses", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, BlendPoses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendPoses_MetaData), Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendPoses_MetaData) }; // 1465313103
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to use branch filters or a blend mask to specify an input pose per-bone influence */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to use branch filters or a blend mask to specify an input pose per-bone influence" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, BlendMode), Z_Construct_UEnum_JakubAnimNodesTool_ELayeredBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendMode_MetaData), Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendMode_MetaData) }; // 1992104364
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendMasks_Inner = { "BlendMasks", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendMasks_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The blend masks to use for our layer inputs. Allows the use of per-bone alphas.\n\x09 * Blend masks are used when BlendMode is BlendMask.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The blend masks to use for our layer inputs. Allows the use of per-bone alphas.\nBlend masks are used when BlendMode is BlendMask." },
#endif
		{ "UseAsBlendMask", "TRUE" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendMasks = { "BlendMasks", nullptr, (EPropertyFlags)0x0014000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, BlendMasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendMasks_MetaData), Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendMasks_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_LayerSetup_Inner = { "LayerSetup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // 4202871921
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_LayerSetup_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Configuration for the parts of the skeleton to blend for each layer. Allows\n\x09 * certain parts of the tree to be blended out or omitted from the pose.\n\x09 * LayerSetup is used when BlendMode is BranchFilter.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration for the parts of the skeleton to blend for each layer. Allows\ncertain parts of the tree to be blended out or omitted from the pose.\nLayerSetup is used when BlendMode is BranchFilter." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_LayerSetup = { "LayerSetup", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, LayerSetup), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_LayerSetup_MetaData), Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_LayerSetup_MetaData) }; // 4202871921
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendWeights_Inner = { "BlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendWeights_MetaData[] = {
		{ "Category", "Runtime" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The weights of each layer */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The weights of each layer" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendWeights = { "BlendWeights", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, BlendWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendWeights_MetaData), Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendWeights_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bMeshSpaceRotationBlend_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to blend bone rotations in mesh space or in local space */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to blend bone rotations in mesh space or in local space" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bMeshSpaceRotationBlend_SetBit(void* Obj)
	{
		((FAnimNode_LayeredBone*)Obj)->bMeshSpaceRotationBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bMeshSpaceRotationBlend = { "bMeshSpaceRotationBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_LayeredBone), &Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bMeshSpaceRotationBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bMeshSpaceRotationBlend_MetaData), Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bMeshSpaceRotationBlend_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bMeshSpaceScaleBlend_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to blend bone scales in mesh space or in local space */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to blend bone scales in mesh space or in local space" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bMeshSpaceScaleBlend_SetBit(void* Obj)
	{
		((FAnimNode_LayeredBone*)Obj)->bMeshSpaceScaleBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bMeshSpaceScaleBlend = { "bMeshSpaceScaleBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_LayeredBone), &Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bMeshSpaceScaleBlend_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bMeshSpaceScaleBlend_MetaData), Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bMeshSpaceScaleBlend_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_CurveBlendOption_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How to blend the layers together */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How to blend the layers together" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_CurveBlendOption = { "CurveBlendOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, CurveBlendOption), Z_Construct_UEnum_Engine_ECurveBlendOption, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_CurveBlendOption_MetaData), Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_CurveBlendOption_MetaData) }; // 347579443
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bBlendRootMotionBasedOnRootBone_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to incorporate the per-bone blend weight of the root bone when lending root motion */" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to incorporate the per-bone blend weight of the root bone when lending root motion" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bBlendRootMotionBasedOnRootBone_SetBit(void* Obj)
	{
		((FAnimNode_LayeredBone*)Obj)->bBlendRootMotionBasedOnRootBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bBlendRootMotionBasedOnRootBone = { "bBlendRootMotionBasedOnRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimNode_LayeredBone), &Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bBlendRootMotionBasedOnRootBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bBlendRootMotionBasedOnRootBone_MetaData), Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bBlendRootMotionBasedOnRootBone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Max LOD that this node is allowed to run\n\x09 * For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n\x09 * when the component LOD becomes 3, it will stop update/evaluate\n\x09 * currently transition would be issue and that has to be re-visited\n\x09 */" },
#endif
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, LODThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_LODThreshold_MetaData), Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_LODThreshold_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_PerBoneBlendWeights_Inner = { "PerBoneBlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPerBoneBlendWeight, METADATA_PARAMS(0, nullptr) }; // 2215196490
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_PerBoneBlendWeights_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Per-bone weights for the skeleton. Serialized as these are only relative to the skeleton, but can potentially\n// be regenerated at runtime if the GUIDs dont match\n" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-bone weights for the skeleton. Serialized as these are only relative to the skeleton, but can potentially\nbe regenerated at runtime if the GUIDs dont match" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_PerBoneBlendWeights = { "PerBoneBlendWeights", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, PerBoneBlendWeights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_PerBoneBlendWeights_MetaData), Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_PerBoneBlendWeights_MetaData) }; // 2215196490
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_SkeletonGuid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Guids for skeleton used to determine whether the PerBoneBlendWeights need rebuilding\n" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Guids for skeleton used to determine whether the PerBoneBlendWeights need rebuilding" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_SkeletonGuid = { "SkeletonGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, SkeletonGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_SkeletonGuid_MetaData), Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_SkeletonGuid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_VirtualBoneGuid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Guid for virtual bones used to determine whether the PerBoneBlendWeights need rebuilding\n" },
#endif
		{ "ModuleRelativePath", "Public/MyAnimNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Guid for virtual bones used to determine whether the PerBoneBlendWeights need rebuilding" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_VirtualBoneGuid = { "VirtualBoneGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_LayeredBone, VirtualBoneGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_VirtualBoneGuid_MetaData), Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_VirtualBoneGuid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BasePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendPoses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendPoses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendMasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendMasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_LayerSetup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_LayerSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_BlendWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bMeshSpaceRotationBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bMeshSpaceScaleBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_CurveBlendOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_bBlendRootMotionBasedOnRootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_LODThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_PerBoneBlendWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_PerBoneBlendWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_SkeletonGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewProp_VirtualBoneGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_LayeredBone",
		Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::PropPointers),
		sizeof(FAnimNode_LayeredBone),
		alignof(FAnimNode_LayeredBone),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LayeredBone()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_LayeredBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_LayeredBone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_LayeredBone.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_MyAnimNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_MyAnimNode_h_Statics::EnumInfo[] = {
		{ ELayeredBlendMode_StaticEnum, TEXT("ELayeredBlendMode"), &Z_Registration_Info_UEnum_ELayeredBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1992104364U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_MyAnimNode_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_LayeredBone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics::NewStructOps, TEXT("AnimNode_LayeredBone"), &Z_Registration_Info_UScriptStruct_AnimNode_LayeredBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LayeredBone), 1762479874U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_MyAnimNode_h_1248255466(TEXT("/Script/JakubAnimNodesTool"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_MyAnimNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_MyAnimNode_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_MyAnimNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_MyAnimNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
