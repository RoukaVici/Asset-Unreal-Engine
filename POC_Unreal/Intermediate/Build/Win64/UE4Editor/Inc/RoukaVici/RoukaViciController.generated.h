// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FmPattern;
#ifdef ROUKAVICI_RoukaViciController_generated_h
#error "RoukaViciController.generated.h already included, missing '#pragma once' in RoukaViciController.h"
#endif
#define ROUKAVICI_RoukaViciController_generated_h

#define POC_Unreal_Source_RoukaVici_RoukaViciController_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetFingerPattern) \
	{ \
		P_GET_STRUCT(FmPattern,Z_Param_pattern); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FingerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=ARoukaViciController::getFingerPattern(Z_Param_pattern,Z_Param_FingerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetVibrationPattern) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_patternID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setVibrationPattern(Z_Param_patternID); \
		P_NATIVE_END; \
	}


#define POC_Unreal_Source_RoukaVici_RoukaViciController_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetFingerPattern) \
	{ \
		P_GET_STRUCT(FmPattern,Z_Param_pattern); \
		P_GET_PROPERTY(UIntProperty,Z_Param_FingerId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=ARoukaViciController::getFingerPattern(Z_Param_pattern,Z_Param_FingerId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsetVibrationPattern) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_patternID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setVibrationPattern(Z_Param_patternID); \
		P_NATIVE_END; \
	}


#define POC_Unreal_Source_RoukaVici_RoukaViciController_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoukaViciController(); \
	friend ROUKAVICI_API class UClass* Z_Construct_UClass_ARoukaViciController(); \
public: \
	DECLARE_CLASS(ARoukaViciController, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RoukaVici"), NO_API) \
	DECLARE_SERIALIZER(ARoukaViciController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define POC_Unreal_Source_RoukaVici_RoukaViciController_h_28_INCLASS \
private: \
	static void StaticRegisterNativesARoukaViciController(); \
	friend ROUKAVICI_API class UClass* Z_Construct_UClass_ARoukaViciController(); \
public: \
	DECLARE_CLASS(ARoukaViciController, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RoukaVici"), NO_API) \
	DECLARE_SERIALIZER(ARoukaViciController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define POC_Unreal_Source_RoukaVici_RoukaViciController_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARoukaViciController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARoukaViciController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoukaViciController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoukaViciController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoukaViciController(ARoukaViciController&&); \
	NO_API ARoukaViciController(const ARoukaViciController&); \
public:


#define POC_Unreal_Source_RoukaVici_RoukaViciController_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoukaViciController(ARoukaViciController&&); \
	NO_API ARoukaViciController(const ARoukaViciController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoukaViciController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoukaViciController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoukaViciController)


#define POC_Unreal_Source_RoukaVici_RoukaViciController_h_28_PRIVATE_PROPERTY_OFFSET
#define POC_Unreal_Source_RoukaVici_RoukaViciController_h_25_PROLOG
#define POC_Unreal_Source_RoukaVici_RoukaViciController_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	POC_Unreal_Source_RoukaVici_RoukaViciController_h_28_PRIVATE_PROPERTY_OFFSET \
	POC_Unreal_Source_RoukaVici_RoukaViciController_h_28_RPC_WRAPPERS \
	POC_Unreal_Source_RoukaVici_RoukaViciController_h_28_INCLASS \
	POC_Unreal_Source_RoukaVici_RoukaViciController_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define POC_Unreal_Source_RoukaVici_RoukaViciController_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	POC_Unreal_Source_RoukaVici_RoukaViciController_h_28_PRIVATE_PROPERTY_OFFSET \
	POC_Unreal_Source_RoukaVici_RoukaViciController_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	POC_Unreal_Source_RoukaVici_RoukaViciController_h_28_INCLASS_NO_PURE_DECLS \
	POC_Unreal_Source_RoukaVici_RoukaViciController_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID POC_Unreal_Source_RoukaVici_RoukaViciController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
