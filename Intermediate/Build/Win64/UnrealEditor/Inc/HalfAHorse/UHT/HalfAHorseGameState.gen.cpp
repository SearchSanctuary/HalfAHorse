// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/HalfAHorseGameState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHalfAHorseGameState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameState();
HALFAHORSE_API UClass* Z_Construct_UClass_AHalfAHorseGameState();
HALFAHORSE_API UClass* Z_Construct_UClass_AHalfAHorseGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_HalfAHorse();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHalfAHorseGameState *****************************************************
void AHalfAHorseGameState::StaticRegisterNativesAHalfAHorseGameState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHalfAHorseGameState;
UClass* AHalfAHorseGameState::GetPrivateStaticClass()
{
	using TClass = AHalfAHorseGameState;
	if (!Z_Registration_Info_UClass_AHalfAHorseGameState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HalfAHorseGameState"),
			Z_Registration_Info_UClass_AHalfAHorseGameState.InnerSingleton,
			StaticRegisterNativesAHalfAHorseGameState,
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
	return Z_Registration_Info_UClass_AHalfAHorseGameState.InnerSingleton;
}
UClass* Z_Construct_UClass_AHalfAHorseGameState_NoRegister()
{
	return AHalfAHorseGameState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHalfAHorseGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/HalfAHorseGameState.h" },
		{ "ModuleRelativePath", "Public/Game/HalfAHorseGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHalfAHorseGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHalfAHorseGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_HalfAHorse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorseGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHalfAHorseGameState_Statics::ClassParams = {
	&AHalfAHorseGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorseGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AHalfAHorseGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHalfAHorseGameState()
{
	if (!Z_Registration_Info_UClass_AHalfAHorseGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHalfAHorseGameState.OuterSingleton, Z_Construct_UClass_AHalfAHorseGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHalfAHorseGameState.OuterSingleton;
}
AHalfAHorseGameState::AHalfAHorseGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHalfAHorseGameState);
AHalfAHorseGameState::~AHalfAHorseGameState() {}
// ********** End Class AHalfAHorseGameState *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Public_Game_HalfAHorseGameState_h__Script_HalfAHorse_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHalfAHorseGameState, AHalfAHorseGameState::StaticClass, TEXT("AHalfAHorseGameState"), &Z_Registration_Info_UClass_AHalfAHorseGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHalfAHorseGameState), 2280932546U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Public_Game_HalfAHorseGameState_h__Script_HalfAHorse_2030297006(TEXT("/Script/HalfAHorse"),
	Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Public_Game_HalfAHorseGameState_h__Script_HalfAHorse_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Public_Game_HalfAHorseGameState_h__Script_HalfAHorse_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
