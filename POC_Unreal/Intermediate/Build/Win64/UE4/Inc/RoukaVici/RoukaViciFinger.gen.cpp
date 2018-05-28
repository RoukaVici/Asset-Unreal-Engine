// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "RoukaViciFinger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoukaViciFinger() {}
// Cross Module References
	ROUKAVICI_API UClass* Z_Construct_UClass_ARoukaViciFinger_NoRegister();
	ROUKAVICI_API UClass* Z_Construct_UClass_ARoukaViciFinger();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RoukaVici();
	ROUKAVICI_API UFunction* Z_Construct_UFunction_ARoukaViciFinger_sendVibrationCommand();
	ROUKAVICI_API UFunction* Z_Construct_UFunction_ARoukaViciFinger_stopVibrationCommand();
	ROUKAVICI_API UClass* Z_Construct_UClass_ARoukaViciController_NoRegister();
// End Cross Module References
	void ARoukaViciFinger::StaticRegisterNativesARoukaViciFinger()
	{
		UClass* Class = ARoukaViciFinger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "sendVibrationCommand", &ARoukaViciFinger::execsendVibrationCommand },
			{ "stopVibrationCommand", &ARoukaViciFinger::execstopVibrationCommand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ARoukaViciFinger_sendVibrationCommand()
	{
		struct RoukaViciFinger_eventsendVibrationCommand_Parms
		{
			int32 fingerID;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_fingerID = { UE4CodeGen_Private::EPropertyClass::Int, "fingerID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RoukaViciFinger_eventsendVibrationCommand_Parms, fingerID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fingerID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "RoukaViciController" },
				{ "ModuleRelativePath", "RoukaViciFinger.h" },
				{ "ToolTip", "Send the vibration command for the appropriate finger\n\n@param fingerID The ID of the finger targeted\n@return void" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoukaViciFinger, "sendVibrationCommand", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(RoukaViciFinger_eventsendVibrationCommand_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARoukaViciFinger_stopVibrationCommand()
	{
		struct RoukaViciFinger_eventstopVibrationCommand_Parms
		{
			int32 fingerID;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_fingerID = { UE4CodeGen_Private::EPropertyClass::Int, "fingerID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RoukaViciFinger_eventstopVibrationCommand_Parms, fingerID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fingerID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "RoukaViciController" },
				{ "ModuleRelativePath", "RoukaViciFinger.h" },
				{ "ToolTip", "Stop the vibration command for the correct finger\n\n@param fingerID The ID of the finger targeted\n@return void" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ARoukaViciFinger, "stopVibrationCommand", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(RoukaViciFinger_eventstopVibrationCommand_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARoukaViciFinger_NoRegister()
	{
		return ARoukaViciFinger::StaticClass();
	}
	UClass* Z_Construct_UClass_ARoukaViciFinger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_RoukaVici,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ARoukaViciFinger_sendVibrationCommand, "sendVibrationCommand" }, // 3830761287
				{ &Z_Construct_UFunction_ARoukaViciFinger_stopVibrationCommand, "stopVibrationCommand" }, // 282061135
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "RoukaViciFinger.h" },
				{ "ModuleRelativePath", "RoukaViciFinger.h" },
				{ "ToolTip", "\\class ARoukaViciFinget\n\n\\brief Provide an example\n\nThis class is the parent class of blueprint\nFinger. It is used to pass the\nvariables so that the internal compenents in\nthe inherited class can work properly with RoukaVici\n\n\\author $Author: Louis Jahn $\n\n\\version $Revision: 1.1 $" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTime_MetaData[] = {
				{ "Category", "RoukaViciFinger" },
				{ "ModuleRelativePath", "RoukaViciFinger.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mTime = { UE4CodeGen_Private::EPropertyClass::Float, "mTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020001, 1, nullptr, STRUCT_OFFSET(ARoukaViciFinger, mTime), METADATA_PARAMS(NewProp_mTime_MetaData, ARRAY_COUNT(NewProp_mTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controller_MetaData[] = {
				{ "Category", "RoukaViciFinger" },
				{ "ModuleRelativePath", "RoukaViciFinger.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controller = { UE4CodeGen_Private::EPropertyClass::Object, "controller", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(ARoukaViciFinger, controller), Z_Construct_UClass_ARoukaViciController_NoRegister, METADATA_PARAMS(NewProp_controller_MetaData, ARRAY_COUNT(NewProp_controller_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_controller,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ARoukaViciFinger>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ARoukaViciFinger::StaticClass,
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
	IMPLEMENT_CLASS(ARoukaViciFinger, 3401784228);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARoukaViciFinger(Z_Construct_UClass_ARoukaViciFinger, &ARoukaViciFinger::StaticClass, TEXT("/Script/RoukaVici"), TEXT("ARoukaViciFinger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoukaViciFinger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
