// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/Cpp_LadderClimbingComponent.h"
#include "HelpfulFunctions/Public/ALS_StructuresAndEnumsCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCpp_LadderClimbingComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_LadderClimbingComponent();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UCpp_LadderClimbingComponent_NoRegister();
	HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALS_ComponentAndTransform();
	UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References
	DEFINE_FUNCTION(UCpp_LadderClimbingComponent::execInitComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_LadderClimbingComponent::execTryStartLadderClimb)
	{
		P_GET_STRUCT(FCALS_ComponentAndTransform,Z_Param_TargetPositionWS);
		P_GET_OBJECT(AActor,Z_Param_LadderActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_RungComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryStartLadderClimb_Implementation(Z_Param_TargetPositionWS,Z_Param_LadderActor,Z_Param_RungComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_LadderClimbingComponent::execTryFinishLadderClimb)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryFinishLadderClimb_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCpp_LadderClimbingComponent::execCheckCanStartClimbLadder)
	{
		P_GET_UBOOL(Z_Param_CheckMainCondition);
		P_GET_UBOOL(Z_Param_Param2);
		P_GET_STRUCT_REF(FCALS_ComponentAndTransform,Z_Param_Out_TargetCapPositionWS);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_LadderActor);
		P_GET_OBJECT_REF(UPrimitiveComponent,Z_Param_Out_RungComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckCanStartClimbLadder_Implementation(Z_Param_CheckMainCondition,Z_Param_Param2,Z_Param_Out_TargetCapPositionWS,Z_Param_Out_LadderActor,Z_Param_Out_RungComp);
		P_NATIVE_END;
	}
	struct Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms
	{
		bool CheckMainCondition;
		bool Param2;
		FCALS_ComponentAndTransform TargetCapPositionWS;
		AActor* LadderActor;
		UPrimitiveComponent* RungComp;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct Cpp_LadderClimbingComponent_eventInitComponent_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		Cpp_LadderClimbingComponent_eventInitComponent_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct Cpp_LadderClimbingComponent_eventTryFinishLadderClimb_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		Cpp_LadderClimbingComponent_eventTryFinishLadderClimb_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms
	{
		FCALS_ComponentAndTransform TargetPositionWS;
		AActor* LadderActor;
		UPrimitiveComponent* RungComp;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder = FName(TEXT("CheckCanStartClimbLadder"));
	bool UCpp_LadderClimbingComponent::CheckCanStartClimbLadder(bool CheckMainCondition, bool Param2, FCALS_ComponentAndTransform& TargetCapPositionWS, AActor*& LadderActor, UPrimitiveComponent*& RungComp)
	{
		Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms Parms;
		Parms.CheckMainCondition=CheckMainCondition ? true : false;
		Parms.Param2=Param2 ? true : false;
		Parms.TargetCapPositionWS=TargetCapPositionWS;
		Parms.LadderActor=LadderActor;
		Parms.RungComp=RungComp;
		ProcessEvent(FindFunctionChecked(NAME_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder),&Parms);
		TargetCapPositionWS=Parms.TargetCapPositionWS;
		LadderActor=Parms.LadderActor;
		RungComp=Parms.RungComp;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UCpp_LadderClimbingComponent_InitComponent = FName(TEXT("InitComponent"));
	bool UCpp_LadderClimbingComponent::InitComponent()
	{
		Cpp_LadderClimbingComponent_eventInitComponent_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UCpp_LadderClimbingComponent_InitComponent),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UCpp_LadderClimbingComponent_TryFinishLadderClimb = FName(TEXT("TryFinishLadderClimb"));
	bool UCpp_LadderClimbingComponent::TryFinishLadderClimb()
	{
		Cpp_LadderClimbingComponent_eventTryFinishLadderClimb_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UCpp_LadderClimbingComponent_TryFinishLadderClimb),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UCpp_LadderClimbingComponent_TryStartLadderClimb = FName(TEXT("TryStartLadderClimb"));
	bool UCpp_LadderClimbingComponent::TryStartLadderClimb(FCALS_ComponentAndTransform TargetPositionWS, AActor* LadderActor, UPrimitiveComponent* RungComp)
	{
		Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms Parms;
		Parms.TargetPositionWS=TargetPositionWS;
		Parms.LadderActor=LadderActor;
		Parms.RungComp=RungComp;
		ProcessEvent(FindFunctionChecked(NAME_UCpp_LadderClimbingComponent_TryStartLadderClimb),&Parms);
		return !!Parms.ReturnValue;
	}
	void UCpp_LadderClimbingComponent::StaticRegisterNativesUCpp_LadderClimbingComponent()
	{
		UClass* Class = UCpp_LadderClimbingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckCanStartClimbLadder", &UCpp_LadderClimbingComponent::execCheckCanStartClimbLadder },
			{ "InitComponent", &UCpp_LadderClimbingComponent::execInitComponent },
			{ "TryFinishLadderClimb", &UCpp_LadderClimbingComponent::execTryFinishLadderClimb },
			{ "TryStartLadderClimb", &UCpp_LadderClimbingComponent::execTryStartLadderClimb },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics
	{
		static void NewProp_CheckMainCondition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CheckMainCondition;
		static void NewProp_Param2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetCapPositionWS;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LadderActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RungComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RungComp;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_CheckMainCondition_SetBit(void* Obj)
	{
		((Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms*)Obj)->CheckMainCondition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_CheckMainCondition = { "CheckMainCondition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_CheckMainCondition_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_Param2_SetBit(void* Obj)
	{
		((Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms*)Obj)->Param2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_Param2_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_TargetCapPositionWS = { "TargetCapPositionWS", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms, TargetCapPositionWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 2580185970
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_LadderActor = { "LadderActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms, LadderActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_RungComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_RungComp = { "RungComp", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms, RungComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_RungComp_MetaData), Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_RungComp_MetaData) };
	void Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_CheckMainCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_TargetCapPositionWS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_LadderActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_RungComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ladder System" },
		{ "DisplayName", "Check Can Start Climb Ladder" },
		{ "Keywords", "Ladder System Cpp" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_LadderClimbingComponent, nullptr, "CheckCanStartClimbLadder", nullptr, nullptr, Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::PropPointers), sizeof(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::PropPointers) < 2048);
	static_assert(sizeof(Cpp_LadderClimbingComponent_eventCheckCanStartClimbLadder_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Cpp_LadderClimbingComponent_eventInitComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventInitComponent_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ladder System" },
		{ "DisplayName", "Initialize Component" },
		{ "Keywords", "Ladder System Cpp" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_LadderClimbingComponent, nullptr, "InitComponent", nullptr, nullptr, Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::PropPointers), sizeof(Cpp_LadderClimbingComponent_eventInitComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Cpp_LadderClimbingComponent_eventInitComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Cpp_LadderClimbingComponent_eventTryFinishLadderClimb_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventTryFinishLadderClimb_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ladder System" },
		{ "DisplayName", "Try Finish Ladder Climb" },
		{ "Keywords", "Ladder System Cpp" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_LadderClimbingComponent, nullptr, "TryFinishLadderClimb", nullptr, nullptr, Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::PropPointers), sizeof(Cpp_LadderClimbingComponent_eventTryFinishLadderClimb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::PropPointers) < 2048);
	static_assert(sizeof(Cpp_LadderClimbingComponent_eventTryFinishLadderClimb_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPositionWS;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LadderActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RungComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RungComp;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_TargetPositionWS = { "TargetPositionWS", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms, TargetPositionWS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(0, nullptr) }; // 2580185970
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_LadderActor = { "LadderActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms, LadderActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_RungComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_RungComp = { "RungComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms, RungComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_RungComp_MetaData), Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_RungComp_MetaData) };
	void Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms), &Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_TargetPositionWS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_LadderActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_RungComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ladder System" },
		{ "DisplayName", "Try Start Ladder Climb" },
		{ "Keywords", "Ladder System Cpp" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCpp_LadderClimbingComponent, nullptr, "TryStartLadderClimb", nullptr, nullptr, Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::PropPointers), sizeof(Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::PropPointers) < 2048);
	static_assert(sizeof(Cpp_LadderClimbingComponent_eventTryStartLadderClimb_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCpp_LadderClimbingComponent);
	UClass* Z_Construct_UClass_UCpp_LadderClimbingComponent_NoRegister()
	{
		return UCpp_LadderClimbingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLadderClimbC_MetaData[];
#endif
		static void NewProp_StartLadderClimbC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StartLadderClimbC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefCapsuleSizeC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefCapsuleSizeC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RungComponentC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RungComponentC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootOffsetLC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffsetLC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootOffsetRC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffsetRC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RungLenghtC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RungLenghtC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceLenghtC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SequenceLenghtC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosesConfigValuesC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PosesConfigValuesC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCpp_LadderClimbingComponent_CheckCanStartClimbLadder, "CheckCanStartClimbLadder" }, // 2480253633
		{ &Z_Construct_UFunction_UCpp_LadderClimbingComponent_InitComponent, "InitComponent" }, // 2265955676
		{ &Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryFinishLadderClimb, "TryFinishLadderClimb" }, // 491033044
		{ &Z_Construct_UFunction_UCpp_LadderClimbingComponent_TryStartLadderClimb, "TryStartLadderClimb" }, // 1013189429
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Cpp_LadderClimbingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_StartLadderClimbC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Ladder System" },
		{ "DisplayName", "StartLadderClimbC" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_StartLadderClimbC_SetBit(void* Obj)
	{
		((UCpp_LadderClimbingComponent*)Obj)->StartLadderClimbC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_StartLadderClimbC = { "StartLadderClimbC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCpp_LadderClimbingComponent), &Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_StartLadderClimbC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_StartLadderClimbC_MetaData), Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_StartLadderClimbC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_CharacterC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "DisplayName", "CharacterC" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_CharacterC = { "CharacterC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_LadderClimbingComponent, CharacterC), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_CharacterC_MetaData), Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_CharacterC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_DefCapsuleSizeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "DisplayName", "DefCapsuleSizeC" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_DefCapsuleSizeC = { "DefCapsuleSizeC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_LadderClimbingComponent, DefCapsuleSizeC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_DefCapsuleSizeC_MetaData), Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_DefCapsuleSizeC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_RungComponentC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "DisplayName", "RungComponentC" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_RungComponentC = { "RungComponentC", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_LadderClimbingComponent, RungComponentC), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_RungComponentC_MetaData), Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_RungComponentC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_FootOffsetLC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Inverse Kinematic" },
		{ "DisplayName", "FootOffset_L" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_FootOffsetLC = { "FootOffsetLC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_LadderClimbingComponent, FootOffsetLC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_FootOffsetLC_MetaData), Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_FootOffsetLC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_FootOffsetRC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Inverse Kinematic" },
		{ "DisplayName", "FootOffset_R" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_FootOffsetRC = { "FootOffsetRC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_LadderClimbingComponent, FootOffsetRC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_FootOffsetRC_MetaData), Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_FootOffsetRC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_RungLenghtC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Base" },
		{ "DisplayName", "RungLenghtC" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_RungLenghtC = { "RungLenghtC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_LadderClimbingComponent, RungLenghtC), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_RungLenghtC_MetaData), Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_RungLenghtC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_SequenceLenghtC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Sequencer" },
		{ "DisplayName", "SequenceLenghtC" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_SequenceLenghtC = { "SequenceLenghtC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_LadderClimbingComponent, SequenceLenghtC), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_SequenceLenghtC_MetaData), Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_SequenceLenghtC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_PosesConfigValuesC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Base" },
		{ "DisplayName", "PosesConfigValuesC" },
		{ "ModuleRelativePath", "Public/Cpp_LadderClimbingComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_PosesConfigValuesC = { "PosesConfigValuesC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCpp_LadderClimbingComponent, PosesConfigValuesC), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_PosesConfigValuesC_MetaData), Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_PosesConfigValuesC_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_StartLadderClimbC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_CharacterC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_DefCapsuleSizeC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_RungComponentC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_FootOffsetLC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_FootOffsetRC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_RungLenghtC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_SequenceLenghtC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::NewProp_PosesConfigValuesC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCpp_LadderClimbingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::ClassParams = {
		&UCpp_LadderClimbingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCpp_LadderClimbingComponent()
	{
		if (!Z_Registration_Info_UClass_UCpp_LadderClimbingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCpp_LadderClimbingComponent.OuterSingleton, Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCpp_LadderClimbingComponent.OuterSingleton;
	}
	template<> HELPFULFUNCTIONS_API UClass* StaticClass<UCpp_LadderClimbingComponent>()
	{
		return UCpp_LadderClimbingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCpp_LadderClimbingComponent);
	UCpp_LadderClimbingComponent::~UCpp_LadderClimbingComponent() {}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCpp_LadderClimbingComponent, UCpp_LadderClimbingComponent::StaticClass, TEXT("UCpp_LadderClimbingComponent"), &Z_Registration_Info_UClass_UCpp_LadderClimbingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCpp_LadderClimbingComponent), 2738951052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_1770355544(TEXT("/Script/HelpfulFunctions"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
