// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/MergeLocation.h"

#ifdef HALFAHORSE_MergeLocation_generated_h
#error "MergeLocation.generated.h already included, missing '#pragma once' in MergeLocation.h"
#endif
#define HALFAHORSE_MergeLocation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMergeLocation ***********************************************************
HALFAHORSE_API UClass* Z_Construct_UClass_AMergeLocation_NoRegister();

#define FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_MergeLocation_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMergeLocation(); \
	friend struct Z_Construct_UClass_AMergeLocation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HALFAHORSE_API UClass* Z_Construct_UClass_AMergeLocation_NoRegister(); \
public: \
	DECLARE_CLASS2(AMergeLocation, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HalfAHorse"), Z_Construct_UClass_AMergeLocation_NoRegister) \
	DECLARE_SERIALIZER(AMergeLocation)


#define FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_MergeLocation_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMergeLocation(AMergeLocation&&) = delete; \
	AMergeLocation(const AMergeLocation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMergeLocation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMergeLocation); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMergeLocation) \
	NO_API virtual ~AMergeLocation();


#define FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_MergeLocation_h_27_PROLOG
#define FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_MergeLocation_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_MergeLocation_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_MergeLocation_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMergeLocation;

// ********** End Class AMergeLocation *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_MergeLocation_h

// ********** Begin Enum EMergeState ***************************************************************
#define FOREACH_ENUM_EMERGESTATE(op) \
	op(EMergeState::Waiting) \
	op(EMergeState::MovingPlayers) \
	op(EMergeState::AligningCameras) \
	op(EMergeState::SwitchingToShared) \
	op(EMergeState::Finished) \
	op(EMergeState::ConversationInProgress) 

enum class EMergeState : uint8;
template<> struct TIsUEnumClass<EMergeState> { enum { Value = true }; };
template<> HALFAHORSE_API UEnum* StaticEnum<EMergeState>();
// ********** End Enum EMergeState *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
