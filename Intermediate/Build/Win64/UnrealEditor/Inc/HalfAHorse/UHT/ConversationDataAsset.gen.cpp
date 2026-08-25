// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Conversation/ConversationDataAsset.h"
#include "Conversation/ConversationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeConversationDataAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
HALFAHORSE_API UClass* Z_Construct_UClass_UConversationDataAsset();
HALFAHORSE_API UClass* Z_Construct_UClass_UConversationDataAsset_NoRegister();
HALFAHORSE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode();
UPackage* Z_Construct_UPackage__Script_HalfAHorse();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UConversationDataAsset ***************************************************
void UConversationDataAsset::StaticRegisterNativesUConversationDataAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UConversationDataAsset;
UClass* UConversationDataAsset::GetPrivateStaticClass()
{
	using TClass = UConversationDataAsset;
	if (!Z_Registration_Info_UClass_UConversationDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ConversationDataAsset"),
			Z_Registration_Info_UClass_UConversationDataAsset.InnerSingleton,
			StaticRegisterNativesUConversationDataAsset,
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
	return Z_Registration_Info_UClass_UConversationDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UConversationDataAsset_NoRegister()
{
	return UConversationDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UConversationDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Data Asset for conversations\n */" },
#endif
		{ "IncludePath", "Conversation/ConversationDataAsset.h" },
		{ "ModuleRelativePath", "Conversation/ConversationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data Asset for conversations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConversationID_MetaData[] = {
		{ "Category", "ConversationDataAsset" },
		{ "ModuleRelativePath", "Conversation/ConversationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConversationNodes_MetaData[] = {
		{ "Category", "ConversationDataAsset" },
		{ "ModuleRelativePath", "Conversation/ConversationDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConversationID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConversationNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ConversationNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UConversationDataAsset_Statics::NewProp_ConversationID = { "ConversationID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConversationDataAsset, ConversationID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConversationID_MetaData), NewProp_ConversationID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationDataAsset_Statics::NewProp_ConversationNodes_Inner = { "ConversationNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueNode, METADATA_PARAMS(0, nullptr) }; // 1536128260
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConversationDataAsset_Statics::NewProp_ConversationNodes = { "ConversationNodes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UConversationDataAsset, ConversationNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConversationNodes_MetaData), NewProp_ConversationNodes_MetaData) }; // 1536128260
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConversationDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDataAsset_Statics::NewProp_ConversationID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDataAsset_Statics::NewProp_ConversationNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationDataAsset_Statics::NewProp_ConversationNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConversationDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UConversationDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_HalfAHorse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UConversationDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationDataAsset_Statics::ClassParams = {
	&UConversationDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UConversationDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UConversationDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UConversationDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UConversationDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UConversationDataAsset()
{
	if (!Z_Registration_Info_UClass_UConversationDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationDataAsset.OuterSingleton, Z_Construct_UClass_UConversationDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UConversationDataAsset.OuterSingleton;
}
UConversationDataAsset::UConversationDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationDataAsset);
UConversationDataAsset::~UConversationDataAsset() {}
// ********** End Class UConversationDataAsset *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_ConversationDataAsset_h__Script_HalfAHorse_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UConversationDataAsset, UConversationDataAsset::StaticClass, TEXT("UConversationDataAsset"), &Z_Registration_Info_UClass_UConversationDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationDataAsset), 4058667175U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_ConversationDataAsset_h__Script_HalfAHorse_3369136986(TEXT("/Script/HalfAHorse"),
	Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_ConversationDataAsset_h__Script_HalfAHorse_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_ConversationDataAsset_h__Script_HalfAHorse_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
