// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "RoukaViciController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoukaViciController() {}
// Cross Module References
	ROUKAVICI_API UClass* Z_Construct_UClass_ARoukaViciController_NoRegister();
	ROUKAVICI_API UClass* Z_Construct_UClass_ARoukaViciController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RoukaVici();
	ROUKAVICI_API UFunction* Z_Construct_UFunction_ARoukaViciController_getFingerPattern();
	ROUKAVICI_API UScriptStruct* Z_Construct_UScriptStruct_FmPattern();
	ROUKAVICI_API UFunction* Z_Construct_UFunction_ARoukaViciController_setVibrationPattern();
// End Cross Module References
	void ARoukaViciController::StaticRegisterNativesARoukaViciController()
	{
		UClass* Class = ARoukaViciController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getFingerPattern", &ARoukaViciController::execgetFingerPattern },
			{ "setVibrationPattern", &ARoukaViciController::execsetVibrationPattern },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ARoukaViciController_getFingerPattern()
	{
		struct RoukaViciController_eventgetFingerPattern_Parms
		{
			FmPattern pattern;
			int32 FingerId;
			TArray<int32> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(RoukaViciController_eventgetFingerPattern_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FingerId = { UE4CodeGen_Private::EPropertyClass::Int, "FingerId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RoukaViciController_eventgetFingerPattern_Parms, FingerId), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_pattern = { UE4CodeGen_Private::EPropertyClass::Struct, "pattern", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RoukaViciController_eventgetFingerPattern_Parms, pattern), Z_Construct_UScriptStruct_FmPattern, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FingerId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pattern,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "RoukaViciController.h" },
				{ "ToolTip", "Get the desired FmFinger pattern out of the struct\n\n@param FingerId The ID of the finger to return\n@return TArray<int>" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoukaViciController, "getFingerPattern", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(RoukaViciController_eventgetFingerPattern_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARoukaViciController_setVibrationPattern()
	{
		struct RoukaViciController_eventsetVibrationPattern_Parms
		{
			int32 patternID;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_patternID = { UE4CodeGen_Private::EPropertyClass::Int, "patternID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RoukaViciController_eventsetVibrationPattern_Parms, patternID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_patternID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "RoukaViciController" },
				{ "ModuleRelativePath", "RoukaViciController.h" },
				{ "ToolTip", "Set the vibration pattern ID\n\n@param patternID The ID of the pattern that is selected\n@return void" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoukaViciController, "setVibrationPattern", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(RoukaViciController_eventsetVibrationPattern_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARoukaViciController_NoRegister()
	{
		return ARoukaViciController::StaticClass();
	}
	UClass* Z_Construct_UClass_ARoukaViciController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_RoukaVici,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ARoukaViciController_getFingerPattern, "getFingerPattern" }, // 1378076973
				{ &Z_Construct_UFunction_ARoukaViciController_setVibrationPattern, "setVibrationPattern" }, // 4277738678
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "RoukaViciController.h" },
				{ "ModuleRelativePath", "RoukaViciController.h" },
				{ "ToolTip", "\\class ARoukaViciController\n\nThis class handles all the necessary functions\nand variables in order to run RoukaVici\nproperly. A lot of objects in the world\nwill need a reference to the instance of this class.\nYou can set it up inside the properties window of the editor\n\n\\author $Author: Louis Jahn $\n\n\\version $Revision: 1.1 $" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_patternID_MetaData[] = {
				{ "Category", "RoukaViciController" },
				{ "ModuleRelativePath", "RoukaViciController.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_patternID = { UE4CodeGen_Private::EPropertyClass::Int, "patternID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(ARoukaViciController, patternID), METADATA_PARAMS(NewProp_patternID_MetaData, ARRAY_COUNT(NewProp_patternID_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_patterns_MetaData[] = {
				{ "Category", "RoukaViciController" },
				{ "ModuleRelativePath", "RoukaViciController.h" },
				{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"RoukaViciController\")\nvoid stopVibrationCommand(int finderID);" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_patterns = { UE4CodeGen_Private::EPropertyClass::Array, "patterns", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ARoukaViciController, patterns), METADATA_PARAMS(NewProp_patterns_MetaData, ARRAY_COUNT(NewProp_patterns_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_patterns_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "patterns", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FmPattern, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_patternID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_patterns,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_patterns_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ARoukaViciController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ARoukaViciController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARoukaViciController, 3740173831);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoukaViciController(Z_Construct_UClass_ARoukaViciController, &ARoukaViciController::StaticClass, TEXT("/Script/RoukaVici"), TEXT("ARoukaViciController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoukaViciController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
