// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Conversation/ConversationTypes.h"

#ifdef HALFAHORSE_ConversationTypes_generated_h
#error "ConversationTypes.generated.h already included, missing '#pragma once' in ConversationTypes.h"
#endif
#define HALFAHORSE_ConversationTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FDialogueChoice ***************************************************
#define FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_ConversationTypes_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueChoice_Statics; \
	HALFAHORSE_API static class UScriptStruct* StaticStruct();


struct FDialogueChoice;
// ********** End ScriptStruct FDialogueChoice *****************************************************

// ********** Begin ScriptStruct FDialogueNode *****************************************************
#define FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_ConversationTypes_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueNode_Statics; \
	HALFAHORSE_API static class UScriptStruct* StaticStruct();


struct FDialogueNode;
// ********** End ScriptStruct FDialogueNode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Conversation_ConversationTypes_h

// ********** Begin Enum ESpeaker ******************************************************************
#define FOREACH_ENUM_ESPEAKER(op) \
	op(ESpeaker::NPC) \
	op(ESpeaker::Player1) \
	op(ESpeaker::Player2) \
	op(ESpeaker::Waiting) 

enum class ESpeaker : uint8;
template<> struct TIsUEnumClass<ESpeaker> { enum { Value = true }; };
template<> HALFAHORSE_API UEnum* StaticEnum<ESpeaker>();
// ********** End Enum ESpeaker ********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
