// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Conversation/ConversationManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeConversationManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
HALFAHORSE_API UClass* Z_Construct_UClass_UConversationDataAsset_NoRegister();
HALFAHORSE_API UClass* Z_Construct_UClass_UConversationManager();
HALFAHORSE_API UClass* Z_Construct_UClass_UConversationManager_NoRegister();
HALFAHORSE_API UClass* Z_Construct_UClass_UDualConversationWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_HalfAHorse();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UConversationManager *****************************************************
void UConversationManager::StaticRegisterNativesUConversationManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UConversationManager;
UClass* UConversationManager::GetPrivateStaticClass()
{
	using TClass = UConversationManager;
	if (!Z_Registration_Info_UClass_UConversationManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ConversationManager"),
			Z_Registration_Info_UClass_UConversationManager.InnerSingleton,
			StaticRegisterNativesUConversationManager,
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
	return Z_Registration_Info_UClass_UConversationManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UConversationManager_NoRegister()
{
	return UConversationManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UConversationManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Conversation/ConversationManager.h" },
		{ "ModuleRelativePath", "Conversation/ConversationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConversationWidget_MetaData[] = {
		{ "Category", "ConversationManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Conversation/ConversationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentConversation_MetaData[] = {
		{ "ModuleRelativePath", "Conversation/ConversationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNodeID_MetaData[] = {
		{ "ModuleRelativePath", "Conversation/ConversationManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConversationWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentConversation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentNodeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConversationManager_Statics::NewProp_ConversationWidget = { "ConversationWidget", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConversationManager, ConversationWidget), Z_Construct_UClass_UDualConversationWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConversationWidget_MetaData), NewProp_ConversationWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConversationManager_Statics::NewProp_CurrentConversation = { "CurrentConversation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConversationManager, CurrentConversation), Z_Construct_UClass_UConversationDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentConversation_MetaData), NewProp_CurrentConversation_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UConversationManager_Statics::NewProp_CurrentNodeID = { "CurrentNodeID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConversationManager, CurrentNodeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentNodeID_MetaData), NewProp_CurrentNodeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConversationManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationManager_Statics::NewProp_ConversationWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationManager_Statics::NewProp_CurrentConversation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationManager_Statics::NewProp_CurrentNodeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConversationManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConversationManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_HalfAHorse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConversationManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationManager_Statics::ClassParams = {
	&UConversationManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UConversationManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UConversationManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConversationManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UConversationManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConversationManager()
{
	if (!Z_Registration_Info_UClass_UConversationManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationManager.OuterSingleton, Z_Construct_UClass_UConversationManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConversationManager.OuterSingleton;
}
UConversationManager::UConversationManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationManager);
UConversationManager::~UConversationManager() {}
// ********** End Class UConversationManager *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_ConversationManager_h__Script_HalfAHorse_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConversationManager, UConversationManager::StaticClass, TEXT("UConversationManager"), &Z_Registration_Info_UClass_UConversationManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationManager), 413751163U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_ConversationManager_h__Script_HalfAHorse_3643772687(TEXT("/Script/HalfAHorse"),
	Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_ConversationManager_h__Script_HalfAHorse_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_ConversationManager_h__Script_HalfAHorse_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
