// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HalfAHorseGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHalfAHorseGameMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HALFAHORSE_API UClass* Z_Construct_UClass_AHalfAHorseCameraDirector_NoRegister();
HALFAHORSE_API UClass* Z_Construct_UClass_AHalfAHorseGameMode();
HALFAHORSE_API UClass* Z_Construct_UClass_AHalfAHorseGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HalfAHorse();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHalfAHorseGameMode ******************************************************
void AHalfAHorseGameMode::StaticRegisterNativesAHalfAHorseGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHalfAHorseGameMode;
UClass* AHalfAHorseGameMode::GetPrivateStaticClass()
{
	using TClass = AHalfAHorseGameMode;
	if (!Z_Registration_Info_UClass_AHalfAHorseGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HalfAHorseGameMode"),
			Z_Registration_Info_UClass_AHalfAHorseGameMode.InnerSingleton,
			StaticRegisterNativesAHalfAHorseGameMode,
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
	return Z_Registration_Info_UClass_AHalfAHorseGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AHalfAHorseGameMode_NoRegister()
{
	return AHalfAHorseGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHalfAHorseGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HalfAHorseGameMode.h" },
		{ "ModuleRelativePath", "HalfAHorseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraDirectorClass_MetaData[] = {
		{ "Category", "HalfAHorseGameMode" },
		{ "ModuleRelativePath", "HalfAHorseGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraDirectorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHalfAHorseGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHalfAHorseGameMode_Statics::NewProp_CameraDirectorClass = { "CameraDirectorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHalfAHorseGameMode, CameraDirectorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AHalfAHorseCameraDirector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraDirectorClass_MetaData), NewProp_CameraDirectorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHalfAHorseGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorseGameMode_Statics::NewProp_CameraDirectorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorseGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHalfAHorseGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HalfAHorse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorseGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHalfAHorseGameMode_Statics::ClassParams = {
	&AHalfAHorseGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHalfAHorseGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorseGameMode_Statics::PropPointers),
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorseGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHalfAHorseGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHalfAHorseGameMode()
{
	if (!Z_Registration_Info_UClass_AHalfAHorseGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHalfAHorseGameMode.OuterSingleton, Z_Construct_UClass_AHalfAHorseGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHalfAHorseGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHalfAHorseGameMode);
AHalfAHorseGameMode::~AHalfAHorseGameMode() {}
// ********** End Class AHalfAHorseGameMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_HalfAHorseGameMode_h__Script_HalfAHorse_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHalfAHorseGameMode, AHalfAHorseGameMode::StaticClass, TEXT("AHalfAHorseGameMode"), &Z_Registration_Info_UClass_AHalfAHorseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHalfAHorseGameMode), 3905604128U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_HalfAHorseGameMode_h__Script_HalfAHorse_3478525404(TEXT("/Script/HalfAHorse"),
	Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_HalfAHorseGameMode_h__Script_HalfAHorse_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_HalfAHorseGameMode_h__Script_HalfAHorse_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
