// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubAnimNodes/Public/JWAN_ModifyLayeringGraph.h"
#include "JakubAnimNodesTool/Public/JWAN_ModifyLayeringLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJWAN_ModifyLayeringGraph() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	JAKUBANIMNODES_API UClass* Z_Construct_UClass_UJWAN_ModifyLayeringGraph();
	JAKUBANIMNODES_API UClass* Z_Construct_UClass_UJWAN_ModifyLayeringGraph_NoRegister();
	JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyLayering();
	UPackage* Z_Construct_UPackage__Script_JakubAnimNodes();
// End Cross Module References
	void UJWAN_ModifyLayeringGraph::StaticRegisterNativesUJWAN_ModifyLayeringGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJWAN_ModifyLayeringGraph);
	UClass* Z_Construct_UClass_UJWAN_ModifyLayeringGraph_NoRegister()
	{
		return UJWAN_ModifyLayeringGraph::StaticClass();
	}
	struct Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodes,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Easy way to modify curve values on a pose */" },
#endif
		{ "IncludePath", "JWAN_ModifyLayeringGraph.h" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Easy way to modify curve values on a pose" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJWAN_ModifyLayeringGraph, Node), Z_Construct_UScriptStruct_FAnimNode_ModifyLayering, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics::NewProp_Node_MetaData), Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics::NewProp_Node_MetaData) }; // 413973551
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJWAN_ModifyLayeringGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics::ClassParams = {
		&UJWAN_ModifyLayeringGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UJWAN_ModifyLayeringGraph()
	{
		if (!Z_Registration_Info_UClass_UJWAN_ModifyLayeringGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJWAN_ModifyLayeringGraph.OuterSingleton, Z_Construct_UClass_UJWAN_ModifyLayeringGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJWAN_ModifyLayeringGraph.OuterSingleton;
	}
	template<> JAKUBANIMNODES_API UClass* StaticClass<UJWAN_ModifyLayeringGraph>()
	{
		return UJWAN_ModifyLayeringGraph::StaticClass();
	}
	UJWAN_ModifyLayeringGraph::UJWAN_ModifyLayeringGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJWAN_ModifyLayeringGraph);
	UJWAN_ModifyLayeringGraph::~UJWAN_ModifyLayeringGraph() {}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_ModifyLayeringGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_ModifyLayeringGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJWAN_ModifyLayeringGraph, UJWAN_ModifyLayeringGraph::StaticClass, TEXT("UJWAN_ModifyLayeringGraph"), &Z_Registration_Info_UClass_UJWAN_ModifyLayeringGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJWAN_ModifyLayeringGraph), 1886902239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_ModifyLayeringGraph_h_670916214(TEXT("/Script/JakubAnimNodes"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_ModifyLayeringGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubAnimNodes_Source_JakubAnimNodes_Public_JWAN_ModifyLayeringGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
