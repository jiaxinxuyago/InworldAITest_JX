// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubCableComponent/Public/JakubCableComponentBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJakubCableComponentBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubCableComponentBPLibrary();
	JAKUBCABLECOMPONENT_API UClass* Z_Construct_UClass_UJakubCableComponentBPLibrary_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	UPackage* Z_Construct_UPackage__Script_JakubCableComponent();
// End Cross Module References
	DEFINE_FUNCTION(UJakubCableComponentBPLibrary::execGetCollisionTraceFlag)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ECollisionTraceFlag>*)Z_Param__Result=UJakubCableComponentBPLibrary::GetCollisionTraceFlag(Z_Param_Object);
		P_NATIVE_END;
	}
	void UJakubCableComponentBPLibrary::StaticRegisterNativesUJakubCableComponentBPLibrary()
	{
		UClass* Class = UJakubCableComponentBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCollisionTraceFlag", &UJakubCableComponentBPLibrary::execGetCollisionTraceFlag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics
	{
		struct JakubCableComponentBPLibrary_eventGetCollisionTraceFlag_Parms
		{
			UStaticMeshComponent* Object;
			TEnumAsByte<ECollisionTraceFlag> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::NewProp_Object_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCableComponentBPLibrary_eventGetCollisionTraceFlag_Parms, Object), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::NewProp_Object_MetaData), Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::NewProp_Object_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JakubCableComponentBPLibrary_eventGetCollisionTraceFlag_Parms, ReturnValue), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(0, nullptr) }; // 2608406128
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "DisplayName", "Get Collision Trace Flag" },
		{ "Keywords", "For More Information About Static Mesh" },
		{ "ModuleRelativePath", "Public/JakubCableComponentBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJakubCableComponentBPLibrary, nullptr, "GetCollisionTraceFlag", nullptr, nullptr, Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::JakubCableComponentBPLibrary_eventGetCollisionTraceFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::JakubCableComponentBPLibrary_eventGetCollisionTraceFlag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJakubCableComponentBPLibrary);
	UClass* Z_Construct_UClass_UJakubCableComponentBPLibrary_NoRegister()
	{
		return UJakubCableComponentBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_JakubCableComponent,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJakubCableComponentBPLibrary_GetCollisionTraceFlag, "GetCollisionTraceFlag" }, // 3650269208
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JakubCableComponentBPLibrary.h" },
		{ "ModuleRelativePath", "Public/JakubCableComponentBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJakubCableComponentBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics::ClassParams = {
		&UJakubCableComponentBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UJakubCableComponentBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UJakubCableComponentBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJakubCableComponentBPLibrary.OuterSingleton, Z_Construct_UClass_UJakubCableComponentBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJakubCableComponentBPLibrary.OuterSingleton;
	}
	template<> JAKUBCABLECOMPONENT_API UClass* StaticClass<UJakubCableComponentBPLibrary>()
	{
		return UJakubCableComponentBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJakubCableComponentBPLibrary);
	UJakubCableComponentBPLibrary::~UJakubCableComponentBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJakubCableComponentBPLibrary, UJakubCableComponentBPLibrary::StaticClass, TEXT("UJakubCableComponentBPLibrary"), &Z_Registration_Info_UClass_UJakubCableComponentBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJakubCableComponentBPLibrary), 1506066706U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_2862557099(TEXT("/Script/JakubCableComponent"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_3_IWALS__Version_3_0__UE5_3_Plugins_JakubCableComponent_Source_JakubCableComponent_Public_JakubCableComponentBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
