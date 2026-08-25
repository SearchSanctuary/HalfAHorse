// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Conversation/DualConversationWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDualConversationWidget() {}

// ********** Begin Cross Module References ********************************************************
HALFAHORSE_API UClass* Z_Construct_UClass_UDialogueChoiceWidget_NoRegister();
HALFAHORSE_API UClass* Z_Construct_UClass_UDualConversationWidget();
HALFAHORSE_API UClass* Z_Construct_UClass_UDualConversationWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_HalfAHorse();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDualConversationWidget **************************************************
void UDualConversationWidget::StaticRegisterNativesUDualConversationWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDualConversationWidget;
UClass* UDualConversationWidget::GetPrivateStaticClass()
{
	using TClass = UDualConversationWidget;
	if (!Z_Registration_Info_UClass_UDualConversationWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DualConversationWidget"),
			Z_Registration_Info_UClass_UDualConversationWidget.InnerSingleton,
			StaticRegisterNativesUDualConversationWidget,
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
	return Z_Registration_Info_UClass_UDualConversationWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UDualConversationWidget_NoRegister()
{
	return UDualConversationWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDualConversationWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Conversation/DualConversationWidget.h" },
		{ "ModuleRelativePath", "Conversation/DualConversationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NPCText_MetaData[] = {
		{ "bindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* Conversational Text Blocks\n\x09*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Conversation/DualConversationWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Conversational Text Blocks" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P1Panel_MetaData[] = {
		{ "bindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Conversation/DualConversationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2Panel_MetaData[] = {
		{ "bindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Conversation/DualConversationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P1ChoiceList_MetaData[] = {
		{ "bindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Conversation/DualConversationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2ChoiceList_MetaData[] = {
		{ "bindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Conversation/DualConversationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P1Choice_1_MetaData[] = {
		{ "bindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Conversation/DualConversationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P1Choice_2_MetaData[] = {
		{ "bindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Conversation/DualConversationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P1Choice_3_MetaData[] = {
		{ "bindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Conversation/DualConversationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2Choice_1_MetaData[] = {
		{ "bindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Conversation/DualConversationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2Choice_2_MetaData[] = {
		{ "bindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Conversation/DualConversationWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2Choice_3_MetaData[] = {
		{ "bindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Conversation/DualConversationWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_P1Panel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_P2Panel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_P1ChoiceList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_P2ChoiceList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_P1Choice_1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_P1Choice_2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_P1Choice_3;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_P2Choice_1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_P2Choice_2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_P2Choice_3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDualConversationWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_NPCText = { "NPCText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDualConversationWidget, NPCText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NPCText_MetaData), NewProp_NPCText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P1Panel = { "P1Panel", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDualConversationWidget, P1Panel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P1Panel_MetaData), NewProp_P1Panel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P2Panel = { "P2Panel", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDualConversationWidget, P2Panel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2Panel_MetaData), NewProp_P2Panel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P1ChoiceList = { "P1ChoiceList", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDualConversationWidget, P1ChoiceList), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P1ChoiceList_MetaData), NewProp_P1ChoiceList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P2ChoiceList = { "P2ChoiceList", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDualConversationWidget, P2ChoiceList), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2ChoiceList_MetaData), NewProp_P2ChoiceList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P1Choice_1 = { "P1Choice_1", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDualConversationWidget, P1Choice_1), Z_Construct_UClass_UDialogueChoiceWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P1Choice_1_MetaData), NewProp_P1Choice_1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P1Choice_2 = { "P1Choice_2", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDualConversationWidget, P1Choice_2), Z_Construct_UClass_UDialogueChoiceWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P1Choice_2_MetaData), NewProp_P1Choice_2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P1Choice_3 = { "P1Choice_3", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDualConversationWidget, P1Choice_3), Z_Construct_UClass_UDialogueChoiceWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P1Choice_3_MetaData), NewProp_P1Choice_3_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P2Choice_1 = { "P2Choice_1", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDualConversationWidget, P2Choice_1), Z_Construct_UClass_UDialogueChoiceWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2Choice_1_MetaData), NewProp_P2Choice_1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P2Choice_2 = { "P2Choice_2", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDualConversationWidget, P2Choice_2), Z_Construct_UClass_UDialogueChoiceWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2Choice_2_MetaData), NewProp_P2Choice_2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P2Choice_3 = { "P2Choice_3", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDualConversationWidget, P2Choice_3), Z_Construct_UClass_UDialogueChoiceWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2Choice_3_MetaData), NewProp_P2Choice_3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDualConversationWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_NPCText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P1Panel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P2Panel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P1ChoiceList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P2ChoiceList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P1Choice_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P1Choice_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P1Choice_3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P2Choice_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P2Choice_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDualConversationWidget_Statics::NewProp_P2Choice_3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDualConversationWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDualConversationWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_HalfAHorse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDualConversationWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDualConversationWidget_Statics::ClassParams = {
	&UDualConversationWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDualConversationWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDualConversationWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDualConversationWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDualConversationWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDualConversationWidget()
{
	if (!Z_Registration_Info_UClass_UDualConversationWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDualConversationWidget.OuterSingleton, Z_Construct_UClass_UDualConversationWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDualConversationWidget.OuterSingleton;
}
UDualConversationWidget::UDualConversationWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDualConversationWidget);
UDualConversationWidget::~UDualConversationWidget() {}
// ********** End Class UDualConversationWidget ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_DualConversationWidget_h__Script_HalfAHorse_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDualConversationWidget, UDualConversationWidget::StaticClass, TEXT("UDualConversationWidget"), &Z_Registration_Info_UClass_UDualConversationWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDualConversationWidget), 4214238386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_DualConversationWidget_h__Script_HalfAHorse_2266366658(TEXT("/Script/HalfAHorse"),
	Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_DualConversationWidget_h__Script_HalfAHorse_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_DualConversationWidget_h__Script_HalfAHorse_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
