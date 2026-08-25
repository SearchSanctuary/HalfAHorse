// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Conversation/DialogueChoiceWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDialogueChoiceWidget() {}

// ********** Begin Cross Module References ********************************************************
HALFAHORSE_API UClass* Z_Construct_UClass_UDialogueChoiceWidget();
HALFAHORSE_API UClass* Z_Construct_UClass_UDialogueChoiceWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_HalfAHorse();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDialogueChoiceWidget Function OnDialogueButtonClicked *******************
struct Z_Construct_UFunction_UDialogueChoiceWidget_OnDialogueButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Conversation/DialogueChoiceWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueChoiceWidget_OnDialogueButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueChoiceWidget, nullptr, "OnDialogueButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueChoiceWidget_OnDialogueButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueChoiceWidget_OnDialogueButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDialogueChoiceWidget_OnDialogueButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueChoiceWidget_OnDialogueButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueChoiceWidget::execOnDialogueButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDialogueButtonClicked();
	P_NATIVE_END;
}
// ********** End Class UDialogueChoiceWidget Function OnDialogueButtonClicked *********************

// ********** Begin Class UDialogueChoiceWidget ****************************************************
void UDialogueChoiceWidget::StaticRegisterNativesUDialogueChoiceWidget()
{
	UClass* Class = UDialogueChoiceWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDialogueButtonClicked", &UDialogueChoiceWidget::execOnDialogueButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueChoiceWidget;
UClass* UDialogueChoiceWidget::GetPrivateStaticClass()
{
	using TClass = UDialogueChoiceWidget;
	if (!Z_Registration_Info_UClass_UDialogueChoiceWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DialogueChoiceWidget"),
			Z_Registration_Info_UClass_UDialogueChoiceWidget.InnerSingleton,
			StaticRegisterNativesUDialogueChoiceWidget,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UDialogueChoiceWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UDialogueChoiceWidget_NoRegister()
{
	return UDialogueChoiceWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDialogueChoiceWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Conversation/DialogueChoiceWidget.h" },
		{ "ModuleRelativePath", "Conversation/DialogueChoiceWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueButton_MetaData[] = {
		{ "bindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Conversation/DialogueChoiceWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueText_MetaData[] = {
		{ "bindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Conversation/DialogueChoiceWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueChoiceWidget_OnDialogueButtonClicked, "OnDialogueButtonClicked" }, // 3360816555
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueChoiceWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueChoiceWidget_Statics::NewProp_DialogueButton = { "DialogueButton", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueChoiceWidget, DialogueButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueButton_MetaData), NewProp_DialogueButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueChoiceWidget_Statics::NewProp_DialogueText = { "DialogueText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueChoiceWidget, DialogueText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueText_MetaData), NewProp_DialogueText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueChoiceWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueChoiceWidget_Statics::NewProp_DialogueButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueChoiceWidget_Statics::NewProp_DialogueText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueChoiceWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueChoiceWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_HalfAHorse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueChoiceWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueChoiceWidget_Statics::ClassParams = {
	&UDialogueChoiceWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogueChoiceWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueChoiceWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueChoiceWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueChoiceWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueChoiceWidget()
{
	if (!Z_Registration_Info_UClass_UDialogueChoiceWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueChoiceWidget.OuterSingleton, Z_Construct_UClass_UDialogueChoiceWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueChoiceWidget.OuterSingleton;
}
UDialogueChoiceWidget::UDialogueChoiceWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueChoiceWidget);
UDialogueChoiceWidget::~UDialogueChoiceWidget() {}
// ********** End Class UDialogueChoiceWidget ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_DialogueChoiceWidget_h__Script_HalfAHorse_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueChoiceWidget, UDialogueChoiceWidget::StaticClass, TEXT("UDialogueChoiceWidget"), &Z_Registration_Info_UClass_UDialogueChoiceWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueChoiceWidget), 5608883U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_DialogueChoiceWidget_h__Script_HalfAHorse_2183591006(TEXT("/Script/HalfAHorse"),
	Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_DialogueChoiceWidget_h__Script_HalfAHorse_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_DialogueChoiceWidget_h__Script_HalfAHorse_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
