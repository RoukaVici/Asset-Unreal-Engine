// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "VibrationSelectionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVibrationSelectionWidget() {}
// Cross Module References
	ROUKAVICI_API UClass* Z_Construct_UClass_UVibrationSelectionWidget_NoRegister();
	ROUKAVICI_API UClass* Z_Construct_UClass_UVibrationSelectionWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_RoukaVici();
	ROUKAVICI_API UClass* Z_Construct_UClass_ARoukaViciController_NoRegister();
	ROUKAVICI_API UScriptStruct* Z_Construct_UScriptStruct_FmPattern();
// End Cross Module References
	void UVibrationSelectionWidget::StaticRegisterNativesUVibrationSelectionWidget()
	{
	}
	UClass* Z_Construct_UClass_UVibrationSelectionWidget_NoRegister()
	{
		return UVibrationSelectionWidget::StaticClass();
	}
	UClass* Z_Construct_UClass_UVibrationSelectionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UUserWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_RoukaVici,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "VibrationSelectionWidget.h" },
				{ "ModuleRelativePath", "VibrationSelectionWidget.h" },
				{ "ToolTip", "\\class UVibrationSelectionWidget\n\n\\brief Provide an example\n\nThis class is the parent class of blueprint\nVibrationSelectionWidget. It is used to pass the\nvariables so that the internal compenents in\nthe inherited class can work properly with RoukaVici\n\n\\author $Author: Louis Jahn $\n\n\\version $Revision: 1.1 $" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_controller_MetaData[] = {
				{ "Category", "VibrationSelectionWidget" },
				{ "ModuleRelativePath", "VibrationSelectionWidget.h" },
				{ "ToolTip", "< A boolean that indicates if the UI has been updated" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_controller = { UE4CodeGen_Private::EPropertyClass::Object, "controller", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UVibrationSelectionWidget, controller), Z_Construct_UClass_ARoukaViciController_NoRegister, METADATA_PARAMS(NewProp_controller_MetaData, ARRAY_COUNT(NewProp_controller_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_updateUI_MetaData[] = {
				{ "Category", "VibrationSelectionWidget" },
				{ "ModuleRelativePath", "VibrationSelectionWidget.h" },
				{ "ToolTip", "< The array of the registered patterns" },
			};
#endif
			auto NewProp_updateUI_SetBit = [](void* Obj){ ((UVibrationSelectionWidget*)Obj)->updateUI = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_updateUI = { UE4CodeGen_Private::EPropertyClass::Bool, "updateUI", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVibrationSelectionWidget), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_updateUI_SetBit)>::SetBit, METADATA_PARAMS(NewProp_updateUI_MetaData, ARRAY_COUNT(NewProp_updateUI_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Patterns_MetaData[] = {
				{ "Category", "VibrationSelectionWidget" },
				{ "ModuleRelativePath", "VibrationSelectionWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Patterns = { UE4CodeGen_Private::EPropertyClass::Array, "Patterns", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVibrationSelectionWidget, Patterns), METADATA_PARAMS(NewProp_Patterns_MetaData, ARRAY_COUNT(NewProp_Patterns_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Patterns_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Patterns", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FmPattern, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mWidget_MetaData[] = {
				{ "Category", "Vibration selecton widget" },
				{ "ModuleRelativePath", "VibrationSelectionWidget.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_mWidget = { UE4CodeGen_Private::EPropertyClass::Str, "mWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVibrationSelectionWidget, mWidget), METADATA_PARAMS(NewProp_mWidget_MetaData, ARRAY_COUNT(NewProp_mWidget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_controller,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_updateUI,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Patterns,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Patterns_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mWidget,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVibrationSelectionWidget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVibrationSelectionWidget::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(UVibrationSelectionWidget, 1804396802);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVibrationSelectionWidget(Z_Construct_UClass_UVibrationSelectionWidget, &UVibrationSelectionWidget::StaticClass, TEXT("/Script/RoukaVici"), TEXT("UVibrationSelectionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVibrationSelectionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
