// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Conversation/ConversationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeConversationTypes() {}

// ********** Begin Cross Module References ********************************************************
HALFAHORSE_API UEnum* Z_Construct_UEnum_HalfAHorse_ESpeaker();
HALFAHORSE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueChoice();
HALFAHORSE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode();
UPackage* Z_Construct_UPackage__Script_HalfAHorse();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESpeaker ******************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeaker;
static UEnum* ESpeaker_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpeaker.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpeaker.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HalfAHorse_ESpeaker, (UObject*)Z_Construct_UPackage__Script_HalfAHorse(), TEXT("ESpeaker"));
	}
	return Z_Registration_Info_UEnum_ESpeaker.OuterSingleton;
}
template<> HALFAHORSE_API UEnum* StaticEnum<ESpeaker>()
{
	return ESpeaker_StaticEnum();
}
struct Z_Construct_UEnum_HalfAHorse_ESpeaker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Conversation/ConversationTypes.h" },
		{ "NPC.DisplayName", "NPC" },
		{ "NPC.Name", "ESpeaker::NPC" },
		{ "Player1.DisplayName", "Player 1" },
		{ "Player1.Name", "ESpeaker::Player1" },
		{ "Player2.DisplayName", "Player 2" },
		{ "Player2.Name", "ESpeaker::Player2" },
		{ "Waiting.DisplayName", "Waiting" },
		{ "Waiting.Name", "ESpeaker::Waiting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpeaker::NPC", (int64)ESpeaker::NPC },
		{ "ESpeaker::Player1", (int64)ESpeaker::Player1 },
		{ "ESpeaker::Player2", (int64)ESpeaker::Player2 },
		{ "ESpeaker::Waiting", (int64)ESpeaker::Waiting },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HalfAHorse_ESpeaker_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HalfAHorse,
	nullptr,
	"ESpeaker",
	"ESpeaker",
	Z_Construct_UEnum_HalfAHorse_ESpeaker_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HalfAHorse_ESpeaker_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HalfAHorse_ESpeaker_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HalfAHorse_ESpeaker_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HalfAHorse_ESpeaker()
{
	if (!Z_Registration_Info_UEnum_ESpeaker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeaker.InnerSingleton, Z_Construct_UEnum_HalfAHorse_ESpeaker_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpeaker.InnerSingleton;
}
// ********** End Enum ESpeaker ********************************************************************

// ********** Begin ScriptStruct FDialogueChoice ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDialogueChoice;
class UScriptStruct* FDialogueChoice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDialogueChoice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDialogueChoice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueChoice, (UObject*)Z_Construct_UPackage__Script_HalfAHorse(), TEXT("DialogueChoice"));
	}
	return Z_Registration_Info_UScriptStruct_FDialogueChoice.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDialogueChoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Conversation/ConversationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceID_MetaData[] = {
		{ "Category", "DialogueChoice" },
		{ "ModuleRelativePath", "Conversation/ConversationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceText_MetaData[] = {
		{ "Category", "DialogueChoice" },
		{ "ModuleRelativePath", "Conversation/ConversationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextNodeID_MetaData[] = {
		{ "Category", "DialogueChoice" },
		{ "ModuleRelativePath", "Conversation/ConversationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChoiceID;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ChoiceText;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NextNodeID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueChoice>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogueChoice_Statics::NewProp_ChoiceID = { "ChoiceID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueChoice, ChoiceID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceID_MetaData), NewProp_ChoiceID_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueChoice_Statics::NewProp_ChoiceText = { "ChoiceText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueChoice, ChoiceText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceText_MetaData), NewProp_ChoiceText_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogueChoice_Statics::NewProp_NextNodeID = { "NextNodeID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueChoice, NextNodeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextNodeID_MetaData), NewProp_NextNodeID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueChoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueChoice_Statics::NewProp_ChoiceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueChoice_Statics::NewProp_ChoiceText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueChoice_Statics::NewProp_NextNodeID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueChoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueChoice_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HalfAHorse,
	nullptr,
	&NewStructOps,
	"DialogueChoice",
	Z_Construct_UScriptStruct_FDialogueChoice_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueChoice_Statics::PropPointers),
	sizeof(FDialogueChoice),
	alignof(FDialogueChoice),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueChoice_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueChoice_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueChoice()
{
	if (!Z_Registration_Info_UScriptStruct_FDialogueChoice.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDialogueChoice.InnerSingleton, Z_Construct_UScriptStruct_FDialogueChoice_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDialogueChoice.InnerSingleton;
}
// ********** End ScriptStruct FDialogueChoice *****************************************************

// ********** Begin ScriptStruct FDialogueNode *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDialogueNode;
class UScriptStruct* FDialogueNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDialogueNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDialogueNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueNode, (UObject*)Z_Construct_UPackage__Script_HalfAHorse(), TEXT("DialogueNode"));
	}
	return Z_Registration_Info_UScriptStruct_FDialogueNode.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDialogueNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Conversation/ConversationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeID_MetaData[] = {
		{ "Category", "DialogueNode" },
		{ "ModuleRelativePath", "Conversation/ConversationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[] = {
		{ "Category", "DialogueNode" },
		{ "ModuleRelativePath", "Conversation/ConversationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueText_MetaData[] = {
		{ "Category", "DialogueNode" },
		{ "ModuleRelativePath", "Conversation/ConversationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StarChoices_MetaData[] = {
		{ "Category", "DialogueNode" },
		{ "ModuleRelativePath", "Conversation/ConversationTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButterbeanChoices_MetaData[] = {
		{ "Category", "DialogueNode" },
		{ "ModuleRelativePath", "Conversation/ConversationTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Speaker_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Speaker;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DialogueText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StarChoices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StarChoices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButterbeanChoices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ButterbeanChoices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueNode, NodeID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeID_MetaData), NewProp_NodeID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Speaker_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueNode, Speaker), Z_Construct_UEnum_HalfAHorse_ESpeaker, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speaker_MetaData), NewProp_Speaker_MetaData) }; // 3851882190
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_DialogueText = { "DialogueText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueNode, DialogueText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueText_MetaData), NewProp_DialogueText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_StarChoices_Inner = { "StarChoices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueChoice, METADATA_PARAMS(0, nullptr) }; // 2271937779
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_StarChoices = { "StarChoices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueNode, StarChoices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StarChoices_MetaData), NewProp_StarChoices_MetaData) }; // 2271937779
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_ButterbeanChoices_Inner = { "ButterbeanChoices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueChoice, METADATA_PARAMS(0, nullptr) }; // 2271937779
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_ButterbeanChoices = { "ButterbeanChoices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueNode, ButterbeanChoices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButterbeanChoices_MetaData), NewProp_ButterbeanChoices_MetaData) }; // 2271937779
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_NodeID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Speaker_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_Speaker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_DialogueText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_StarChoices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_StarChoices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_ButterbeanChoices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueNode_Statics::NewProp_ButterbeanChoices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HalfAHorse,
	nullptr,
	&NewStructOps,
	"DialogueNode",
	Z_Construct_UScriptStruct_FDialogueNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::PropPointers),
	sizeof(FDialogueNode),
	alignof(FDialogueNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueNode()
{
	if (!Z_Registration_Info_UScriptStruct_FDialogueNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDialogueNode.InnerSingleton, Z_Construct_UScriptStruct_FDialogueNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDialogueNode.InnerSingleton;
}
// ********** End ScriptStruct FDialogueNode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_ConversationTypes_h__Script_HalfAHorse_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESpeaker_StaticEnum, TEXT("ESpeaker"), &Z_Registration_Info_UEnum_ESpeaker, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3851882190U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogueChoice::StaticStruct, Z_Construct_UScriptStruct_FDialogueChoice_Statics::NewStructOps, TEXT("DialogueChoice"), &Z_Registration_Info_UScriptStruct_FDialogueChoice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueChoice), 2271937779U) },
		{ FDialogueNode::StaticStruct, Z_Construct_UScriptStruct_FDialogueNode_Statics::NewStructOps, TEXT("DialogueNode"), &Z_Registration_Info_UScriptStruct_FDialogueNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueNode), 1536128260U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_ConversationTypes_h__Script_HalfAHorse_3245774234(TEXT("/Script/HalfAHorse"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_ConversationTypes_h__Script_HalfAHorse_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_ConversationTypes_h__Script_HalfAHorse_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_ConversationTypes_h__Script_HalfAHorse_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_ConversationTypes_h__Script_HalfAHorse_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
