// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROUKAVICI_RoukaViciFinger_generated_h
#error "RoukaViciFinger.generated.h already included, missing '#pragma once' in RoukaViciFinger.h"
#endif
#define ROUKAVICI_RoukaViciFinger_generated_h

#define POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_30_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execstopVibrationCommand) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_fingerID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->stopVibrationCommand(Z_Param_fingerID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsendVibrationCommand) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_fingerID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->sendVibrationCommand(Z_Param_fingerID); \
		P_NATIVE_END; \
	}


#define POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execstopVibrationCommand) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_fingerID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->stopVibrationCommand(Z_Param_fingerID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execsendVibrationCommand) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_fingerID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->sendVibrationCommand(Z_Param_fingerID); \
		P_NATIVE_END; \
	}


#define POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARoukaViciFinger(); \
	friend ROUKAVICI_API class UClass* Z_Construct_UClass_ARoukaViciFinger(); \
public: \
	DECLARE_CLASS(ARoukaViciFinger, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RoukaVici"), NO_API) \
	DECLARE_SERIALIZER(ARoukaViciFinger) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_30_INCLASS \
private: \
	static void StaticRegisterNativesARoukaViciFinger(); \
	friend ROUKAVICI_API class UClass* Z_Construct_UClass_ARoukaViciFinger(); \
public: \
	DECLARE_CLASS(ARoukaViciFinger, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RoukaVici"), NO_API) \
	DECLARE_SERIALIZER(ARoukaViciFinger) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARoukaViciFinger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARoukaViciFinger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoukaViciFinger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoukaViciFinger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoukaViciFinger(ARoukaViciFinger&&); \
	NO_API ARoukaViciFinger(const ARoukaViciFinger&); \
public:


#define POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARoukaViciFinger(ARoukaViciFinger&&); \
	NO_API ARoukaViciFinger(const ARoukaViciFinger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARoukaViciFinger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARoukaViciFinger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARoukaViciFinger)


#define POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_30_PRIVATE_PROPERTY_OFFSET
#define POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_27_PROLOG
#define POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_30_PRIVATE_PROPERTY_OFFSET \
	POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_30_RPC_WRAPPERS \
	POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_30_INCLASS \
	POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_30_PRIVATE_PROPERTY_OFFSET \
	POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_30_INCLASS_NO_PURE_DECLS \
	POC_Unreal_Source_RoukaVici_RoukaViciFinger_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID POC_Unreal_Source_RoukaVici_RoukaViciFinger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
