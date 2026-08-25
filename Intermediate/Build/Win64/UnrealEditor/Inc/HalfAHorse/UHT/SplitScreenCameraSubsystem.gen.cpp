// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/SplitScreenCameraSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSplitScreenCameraSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
HALFAHORSE_API UClass* Z_Construct_UClass_USplitScreenCameraSubsystem();
HALFAHORSE_API UClass* Z_Construct_UClass_USplitScreenCameraSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_HalfAHorse();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USplitScreenCameraSubsystem **********************************************
void USplitScreenCameraSubsystem::StaticRegisterNativesUSplitScreenCameraSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USplitScreenCameraSubsystem;
UClass* USplitScreenCameraSubsystem::GetPrivateStaticClass()
{
	using TClass = USplitScreenCameraSubsystem;
	if (!Z_Registration_Info_UClass_USplitScreenCameraSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SplitScreenCameraSubsystem"),
			Z_Registration_Info_UClass_USplitScreenCameraSubsystem.InnerSingleton,
			StaticRegisterNativesUSplitScreenCameraSubsystem,
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
	return Z_Registration_Info_UClass_USplitScreenCameraSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USplitScreenCameraSubsystem_NoRegister()
{
	return USplitScreenCameraSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USplitScreenCameraSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Game/SplitScreenCameraSubsystem.h" },
		{ "ModuleRelativePath", "Public/Game/SplitScreenCameraSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplitScreenCameraSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USplitScreenCameraSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_HalfAHorse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USplitScreenCameraSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USplitScreenCameraSubsystem_Statics::ClassParams = {
	&USplitScreenCameraSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USplitScreenCameraSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USplitScreenCameraSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USplitScreenCameraSubsystem()
{
	if (!Z_Registration_Info_UClass_USplitScreenCameraSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplitScreenCameraSubsystem.OuterSingleton, Z_Construct_UClass_USplitScreenCameraSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USplitScreenCameraSubsystem.OuterSingleton;
}
USplitScreenCameraSubsystem::USplitScreenCameraSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USplitScreenCameraSubsystem);
USplitScreenCameraSubsystem::~USplitScreenCameraSubsystem() {}
// ********** End Class USplitScreenCameraSubsystem ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Public_Game_SplitScreenCameraSubsystem_h__Script_HalfAHorse_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USplitScreenCameraSubsystem, USplitScreenCameraSubsystem::StaticClass, TEXT("USplitScreenCameraSubsystem"), &Z_Registration_Info_UClass_USplitScreenCameraSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplitScreenCameraSubsystem), 3957799086U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Public_Game_SplitScreenCameraSubsystem_h__Script_HalfAHorse_4026907805(TEXT("/Script/HalfAHorse"),
	Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Public_Game_SplitScreenCameraSubsystem_h__Script_HalfAHorse_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Public_Game_SplitScreenCameraSubsystem_h__Script_HalfAHorse_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
