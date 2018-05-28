// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "VibrationPatternParser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVibrationPatternParser() {}
// Cross Module References
	ROUKAVICI_API UScriptStruct* Z_Construct_UScriptStruct_FmPattern();
	UPackage* Z_Construct_UPackage__Script_RoukaVici();
	ROUKAVICI_API UScriptStruct* Z_Construct_UScriptStruct_FmFinger();
	ROUKAVICI_API UClass* Z_Construct_UClass_AVibrationPatternParser_NoRegister();
	ROUKAVICI_API UClass* Z_Construct_UClass_AVibrationPatternParser();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ROUKAVICI_API UClass* Z_Construct_UClass_ARoukaViciController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
class UScriptStruct* FmPattern::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ROUKAVICI_API uint32 Get_Z_Construct_UScriptStruct_FmPattern_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FmPattern, Z_Construct_UPackage__Script_RoukaVici(), TEXT("mPattern"), sizeof(FmPattern), Get_Z_Construct_UScriptStruct_FmPattern_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FmPattern(FmPattern::StaticStruct, TEXT("/Script/RoukaVici"), TEXT("mPattern"), false, nullptr, nullptr);
static struct FScriptStruct_RoukaVici_StaticRegisterNativesFmPattern
{
	FScriptStruct_RoukaVici_StaticRegisterNativesFmPattern()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("mPattern")),new UScriptStruct::TCppStructOps<FmPattern>);
	}
} ScriptStruct_RoukaVici_StaticRegisterNativesFmPattern;
	UScriptStruct* Z_Construct_UScriptStruct_FmPattern()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FmPattern_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RoukaVici();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("mPattern"), sizeof(FmPattern), Get_Z_Construct_UScriptStruct_FmPattern_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "VibrationPatternParser.h" },
				{ "ToolTip", "This struct store finger patterns with the delay" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FmPattern>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fingers_MetaData[] = {
				{ "Category", "mPattern" },
				{ "ModuleRelativePath", "VibrationPatternParser.h" },
				{ "ToolTip", "< delay between each intensities" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_fingers = { UE4CodeGen_Private::EPropertyClass::Struct, "fingers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, CPP_ARRAY_DIM(fingers, FmPattern), nullptr, STRUCT_OFFSET(FmPattern, fingers), Z_Construct_UScriptStruct_FmFinger, METADATA_PARAMS(NewProp_fingers_MetaData, ARRAY_COUNT(NewProp_fingers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delay_MetaData[] = {
				{ "Category", "mPattern" },
				{ "ModuleRelativePath", "VibrationPatternParser.h" },
				{ "ToolTip", "< Name of the pattern" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delay = { UE4CodeGen_Private::EPropertyClass::Float, "delay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FmPattern, delay), METADATA_PARAMS(NewProp_delay_MetaData, ARRAY_COUNT(NewProp_delay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_configName_MetaData[] = {
				{ "Category", "mPattern" },
				{ "ModuleRelativePath", "VibrationPatternParser.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_configName = { UE4CodeGen_Private::EPropertyClass::Str, "configName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(FmPattern, configName), METADATA_PARAMS(NewProp_configName_MetaData, ARRAY_COUNT(NewProp_configName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fingers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_delay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_configName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_RoukaVici,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"mPattern",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FmPattern),
				alignof(FmPattern),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FmPattern_CRC() { return 2396767459U; }
class UScriptStruct* FmFinger::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ROUKAVICI_API uint32 Get_Z_Construct_UScriptStruct_FmFinger_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FmFinger, Z_Construct_UPackage__Script_RoukaVici(), TEXT("mFinger"), sizeof(FmFinger), Get_Z_Construct_UScriptStruct_FmFinger_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FmFinger(FmFinger::StaticStruct, TEXT("/Script/RoukaVici"), TEXT("mFinger"), false, nullptr, nullptr);
static struct FScriptStruct_RoukaVici_StaticRegisterNativesFmFinger
{
	FScriptStruct_RoukaVici_StaticRegisterNativesFmFinger()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("mFinger")),new UScriptStruct::TCppStructOps<FmFinger>);
	}
} ScriptStruct_RoukaVici_StaticRegisterNativesFmFinger;
	UScriptStruct* Z_Construct_UScriptStruct_FmFinger()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FmFinger_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RoukaVici();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("mFinger"), sizeof(FmFinger), Get_Z_Construct_UScriptStruct_FmFinger_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "VibrationPatternParser.h" },
				{ "ToolTip", "This struct store pattern information\nfor a specific finger" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FmFinger>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pattern_MetaData[] = {
				{ "Category", "mFinger" },
				{ "ModuleRelativePath", "VibrationPatternParser.h" },
				{ "ToolTip", "< ID of the finger" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pattern = { UE4CodeGen_Private::EPropertyClass::Array, "pattern", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020005, 1, nullptr, STRUCT_OFFSET(FmFinger, pattern), METADATA_PARAMS(NewProp_pattern_MetaData, ARRAY_COUNT(NewProp_pattern_MetaData)) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_pattern_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "pattern", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
				{ "Category", "mFinger" },
				{ "ModuleRelativePath", "VibrationPatternParser.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Int, "ID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FmFinger, ID), METADATA_PARAMS(NewProp_ID_MetaData, ARRAY_COUNT(NewProp_ID_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pattern,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pattern_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ID,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_RoukaVici,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"mFinger",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FmFinger),
				alignof(FmFinger),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FmFinger_CRC() { return 1126139173U; }
	void AVibrationPatternParser::StaticRegisterNativesAVibrationPatternParser()
	{
	}
	UClass* Z_Construct_UClass_AVibrationPatternParser_NoRegister()
	{
		return AVibrationPatternParser::StaticClass();
	}
	UClass* Z_Construct_UClass_AVibrationPatternParser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_RoukaVici,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "VibrationPatternParser.h" },
				{ "ModuleRelativePath", "VibrationPatternParser.h" },
				{ "ToolTip", "\\class AVibrationPatternParser\n\n\\brief Provide an example\n\nThis class parse the JSON files to\nget each patterns informations for each fingers\n\n\\author $Author: Louis Jahn $\n\n\\version $Revision: 1.1 $" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_patterns_MetaData[] = {
				{ "Category", "VibrationPatternParser" },
				{ "ModuleRelativePath", "VibrationPatternParser.h" },
				{ "ToolTip", "< Array of path of config files" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_patterns = { UE4CodeGen_Private::EPropertyClass::Array, "patterns", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(AVibrationPatternParser, patterns), METADATA_PARAMS(NewProp_patterns_MetaData, ARRAY_COUNT(NewProp_patterns_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_patterns_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "patterns", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FmPattern, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pathConfig_MetaData[] = {
				{ "Category", "VibrationPatternParser" },
				{ "ModuleRelativePath", "VibrationPatternParser.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pathConfig = { UE4CodeGen_Private::EPropertyClass::Array, "pathConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVibrationPatternParser, pathConfig), METADATA_PARAMS(NewProp_pathConfig_MetaData, ARRAY_COUNT(NewProp_pathConfig_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_pathConfig_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "pathConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controller_MetaData[] = {
				{ "Category", "VibrationPatternParser" },
				{ "ModuleRelativePath", "VibrationPatternParser.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controller = { UE4CodeGen_Private::EPropertyClass::Object, "controller", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(AVibrationPatternParser, controller), Z_Construct_UClass_ARoukaViciController_NoRegister, METADATA_PARAMS(NewProp_controller_MetaData, ARRAY_COUNT(NewProp_controller_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_widgetTemplate_MetaData[] = {
				{ "Category", "UI" },
				{ "ModuleRelativePath", "VibrationPatternParser.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_widgetTemplate = { UE4CodeGen_Private::EPropertyClass::Class, "widgetTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000015, 1, nullptr, STRUCT_OFFSET(AVibrationPatternParser, widgetTemplate), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_widgetTemplate_MetaData, ARRAY_COUNT(NewProp_widgetTemplate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_patterns,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_patterns_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pathConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_pathConfig_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_controller,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_widgetTemplate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVibrationPatternParser>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVibrationPatternParser::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AVibrationPatternParser, 517904090);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVibrationPatternParser(Z_Construct_UClass_AVibrationPatternParser, &AVibrationPatternParser::StaticClass, TEXT("/Script/RoukaVici"), TEXT("AVibrationPatternParser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVibrationPatternParser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
