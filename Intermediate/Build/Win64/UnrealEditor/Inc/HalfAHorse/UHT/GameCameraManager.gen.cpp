// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/GameCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
HALFAHORSE_API UClass* Z_Construct_UClass_AGameCameraManager();
HALFAHORSE_API UClass* Z_Construct_UClass_AGameCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_HalfAHorse();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGameCameraManager Function ConfigureCameraForPlayer *********************
struct Z_Construct_UFunction_AGameCameraManager_ConfigureCameraForPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/GameCameraManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameCameraManager_ConfigureCameraForPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameCameraManager, nullptr, "ConfigureCameraForPlayer", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameCameraManager_ConfigureCameraForPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameCameraManager_ConfigureCameraForPlayer_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGameCameraManager_ConfigureCameraForPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameCameraManager_ConfigureCameraForPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameCameraManager::execConfigureCameraForPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigureCameraForPlayer();
	P_NATIVE_END;
}
// ********** End Class AGameCameraManager Function ConfigureCameraForPlayer ***********************

// ********** Begin Class AGameCameraManager *******************************************************
void AGameCameraManager::StaticRegisterNativesAGameCameraManager()
{
	UClass* Class = AGameCameraManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConfigureCameraForPlayer", &AGameCameraManager::execConfigureCameraForPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGameCameraManager;
UClass* AGameCameraManager::GetPrivateStaticClass()
{
	using TClass = AGameCameraManager;
	if (!Z_Registration_Info_UClass_AGameCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameCameraManager"),
			Z_Registration_Info_UClass_AGameCameraManager.InnerSingleton,
			StaticRegisterNativesAGameCameraManager,
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
	return Z_Registration_Info_UClass_AGameCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AGameCameraManager_NoRegister()
{
	return AGameCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGameCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Player/GameCameraManager.h" },
		{ "ModuleRelativePath", "Player/GameCameraManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameCameraManager_ConfigureCameraForPlayer, "ConfigureCameraForPlayer" }, // 3128898094
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGameCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_HalfAHorse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameCameraManager_Statics::ClassParams = {
	&AGameCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameCameraManager()
{
	if (!Z_Registration_Info_UClass_AGameCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameCameraManager.OuterSingleton, Z_Construct_UClass_AGameCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameCameraManager.OuterSingleton;
}
AGameCameraManager::AGameCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameCameraManager);
AGameCameraManager::~AGameCameraManager() {}
// ********** End Class AGameCameraManager *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_GameCameraManager_h__Script_HalfAHorse_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameCameraManager, AGameCameraManager::StaticClass, TEXT("AGameCameraManager"), &Z_Registration_Info_UClass_AGameCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameCameraManager), 4023969311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_GameCameraManager_h__Script_HalfAHorse_1500312636(TEXT("/Script/HalfAHorse"),
	Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_GameCameraManager_h__Script_HalfAHorse_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_GameCameraManager_h__Script_HalfAHorse_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
