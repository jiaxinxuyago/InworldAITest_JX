// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cpp_DynamicClimbingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCALS_ComponentAndTransform;
struct FCMC_LedgeC;
struct FCMC_SingleClimbPointC;
#ifdef HELPFULFUNCTIONS_Cpp_DynamicClimbingComponent_generated_h
#error "Cpp_DynamicClimbingComponent.generated.h already included, missing '#pragma once' in Cpp_DynamicClimbingComponent.h"
#endif
#define HELPFULFUNCTIONS_Cpp_DynamicClimbingComponent_generated_h

#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_15_SPARSE_DATA
#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CheckCanJumpBackC_Implementation(bool& ReturnValue, FCMC_SingleClimbPointC& LeftPoint, FCMC_SingleClimbPointC& RightPoint, FCMC_SingleClimbPointC& OriginPoint, bool UseCameraCondition, float JumpMaxDistance); \
	virtual void CheckCanStartCornerC_Implementation(bool& DetectedCorner, bool& OuterType, FCMC_LedgeC& TargetLedgeStruct, bool Valid, bool InputLock); \
	virtual void TryCreateLedgeStructureC_Implementation(bool& Valid, FCMC_SingleClimbPointC& LeftPoint, FCMC_SingleClimbPointC& RightPoint, FCMC_SingleClimbPointC& OriginPoint, bool& FirstNotValid, FVector TraceOrigin, FVector TraceDirection, FVector2D AxisNormals, float Z_Offset, float ForwardTraceLength, float RightOffsetScale, bool UseWallCondition, bool InverseTracing); \
	virtual void GetCharacterAxisC_Implementation(float& Forward, float& Right); \
 \
	DECLARE_FUNCTION(execCheckCanJumpBackC); \
	DECLARE_FUNCTION(execCheckCanStartCornerC); \
	DECLARE_FUNCTION(execTryCreateLedgeStructureC); \
	DECLARE_FUNCTION(execGetCharacterAxisC); \
	DECLARE_FUNCTION(execTryFindTangentForWallC); \
	DECLARE_FUNCTION(execConvertWallToCapPositionC); \
	DECLARE_FUNCTION(execCheckPlayerCanMoveToWallC); \
	DECLARE_FUNCTION(execConvertAxisToNameC); \
	DECLARE_FUNCTION(execGetFootsRelativeVelocityC); \
	DECLARE_FUNCTION(execCheckFootIkValidC); \
	DECLARE_FUNCTION(execUpdateLedgePerFrameC); \
	DECLARE_FUNCTION(execResizeCapsuleToDefaultC); \
	DECLARE_FUNCTION(execCheckCanDropToLedgeC); \
	DECLARE_FUNCTION(execLedgeValidationPart2C); \
	DECLARE_FUNCTION(execConvertLedgeStructToLS); \
	DECLARE_FUNCTION(execConvertLedgeStructToWS); \
	DECLARE_FUNCTION(execGetDirectionByInputC); \
	DECLARE_FUNCTION(execChooseLedgeFindingTransformC); \
	DECLARE_FUNCTION(execConvertFloorToCapPositionC); \
	DECLARE_FUNCTION(execConvertLedgeToCapPositionC); \
	DECLARE_FUNCTION(execCreateAxisValuesWithInterpFast);


#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_15_ACCESSORS
#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_15_CALLBACK_WRAPPERS
#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCpp_DynamicClimbingComponent(); \
	friend struct Z_Construct_UClass_UCpp_DynamicClimbingComponent_Statics; \
public: \
	DECLARE_CLASS(UCpp_DynamicClimbingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UCpp_DynamicClimbingComponent)


#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCpp_DynamicClimbingComponent(UCpp_DynamicClimbingComponent&&); \
	NO_API UCpp_DynamicClimbingComponent(const UCpp_DynamicClimbingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCpp_DynamicClimbingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCpp_DynamicClimbingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCpp_DynamicClimbingComponent) \
	NO_API virtual ~UCpp_DynamicClimbingComponent();


#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_12_PROLOG
#define FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_15_SPARSE_DATA \
	FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_15_ACCESSORS \
	FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_15_CALLBACK_WRAPPERS \
	FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UCpp_DynamicClimbingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_2_TestDoArmour_5_2_5_3_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_DynamicClimbingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
