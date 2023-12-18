// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cpp_LadderClimbingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FCALS_ComponentAndTransform;
#ifdef HELPFULFUNCTIONS_Cpp_LadderClimbingComponent_generated_h
#error "Cpp_LadderClimbingComponent.generated.h already included, missing '#pragma once' in Cpp_LadderClimbingComponent.h"
#endif
#define HELPFULFUNCTIONS_Cpp_LadderClimbingComponent_generated_h

#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_SPARSE_DATA
#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool InitComponent_Implementation(); \
	virtual bool TryStartLadderClimb_Implementation(FCALS_ComponentAndTransform TargetPositionWS, AActor* LadderActor, UPrimitiveComponent* RungComp); \
	virtual bool TryFinishLadderClimb_Implementation(); \
	virtual bool CheckCanStartClimbLadder_Implementation(bool CheckMainCondition, bool Param2, FCALS_ComponentAndTransform& TargetCapPositionWS, AActor*& LadderActor, UPrimitiveComponent*& RungComp); \
 \
	DECLARE_FUNCTION(execInitComponent); \
	DECLARE_FUNCTION(execTryStartLadderClimb); \
	DECLARE_FUNCTION(execTryFinishLadderClimb); \
	DECLARE_FUNCTION(execCheckCanStartClimbLadder);


#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_ACCESSORS
#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_CALLBACK_WRAPPERS
#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCpp_LadderClimbingComponent(); \
	friend struct Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics; \
public: \
	DECLARE_CLASS(UCpp_LadderClimbingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UCpp_LadderClimbingComponent)


#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCpp_LadderClimbingComponent(UCpp_LadderClimbingComponent&&); \
	NO_API UCpp_LadderClimbingComponent(const UCpp_LadderClimbingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCpp_LadderClimbingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCpp_LadderClimbingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCpp_LadderClimbingComponent) \
	NO_API virtual ~UCpp_LadderClimbingComponent();


#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_11_PROLOG
#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_SPARSE_DATA \
	FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_ACCESSORS \
	FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_CALLBACK_WRAPPERS \
	FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UCpp_LadderClimbingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
