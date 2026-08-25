// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/GameCameraManager.h"

#ifdef HALFAHORSE_GameCameraManager_generated_h
#error "GameCameraManager.generated.h already included, missing '#pragma once' in GameCameraManager.h"
#endif
#define HALFAHORSE_GameCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGameCameraManager *******************************************************
#define FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_GameCameraManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConfigureCameraForPlayer);


HALFAHORSE_API UClass* Z_Construct_UClass_AGameCameraManager_NoRegister();

#define FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_GameCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameCameraManager(); \
	friend struct Z_Construct_UClass_AGameCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HALFAHORSE_API UClass* Z_Construct_UClass_AGameCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HalfAHorse"), Z_Construct_UClass_AGameCameraManager_NoRegister) \
	DECLARE_SERIALIZER(AGameCameraManager)


#define FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_GameCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameCameraManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameCameraManager(AGameCameraManager&&) = delete; \
	AGameCameraManager(const AGameCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameCameraManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameCameraManager) \
	NO_API virtual ~AGameCameraManager();


#define FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_GameCameraManager_h_13_PROLOG
#define FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_GameCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_GameCameraManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_GameCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_GameCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameCameraManager;

// ********** End Class AGameCameraManager *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_GameCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
