// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/HalfAHorseCameraProfile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHalfAHorseCameraProfile() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
HALFAHORSE_API UClass* Z_Construct_UClass_UHalfAHorseCameraProfile();
HALFAHORSE_API UClass* Z_Construct_UClass_UHalfAHorseCameraProfile_NoRegister();
UPackage* Z_Construct_UPackage__Script_HalfAHorse();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHalfAHorseCameraProfile *************************************************
void UHalfAHorseCameraProfile::StaticRegisterNativesUHalfAHorseCameraProfile()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UHalfAHorseCameraProfile;
UClass* UHalfAHorseCameraProfile::GetPrivateStaticClass()
{
	using TClass = UHalfAHorseCameraProfile;
	if (!Z_Registration_Info_UClass_UHalfAHorseCameraProfile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HalfAHorseCameraProfile"),
			Z_Registration_Info_UClass_UHalfAHorseCameraProfile.InnerSingleton,
			StaticRegisterNativesUHalfAHorseCameraProfile,
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
	return Z_Registration_Info_UClass_UHalfAHorseCameraProfile.InnerSingleton;
}
UClass* Z_Construct_UClass_UHalfAHorseCameraProfile_NoRegister()
{
	return UHalfAHorseCameraProfile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHalfAHorseCameraProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Game/HalfAHorseCameraProfile.h" },
		{ "ModuleRelativePath", "Public/Game/HalfAHorseCameraProfile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHalfAHorseCameraProfile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHalfAHorseCameraProfile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_HalfAHorse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHalfAHorseCameraProfile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHalfAHorseCameraProfile_Statics::ClassParams = {
	&UHalfAHorseCameraProfile::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHalfAHorseCameraProfile_Statics::Class_MetaDataParams), Z_Construct_UClass_UHalfAHorseCameraProfile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHalfAHorseCameraProfile()
{
	if (!Z_Registration_Info_UClass_UHalfAHorseCameraProfile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHalfAHorseCameraProfile.OuterSingleton, Z_Construct_UClass_UHalfAHorseCameraProfile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHalfAHorseCameraProfile.OuterSingleton;
}
UHalfAHorseCameraProfile::UHalfAHorseCameraProfile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHalfAHorseCameraProfile);
UHalfAHorseCameraProfile::~UHalfAHorseCameraProfile() {}
// ********** End Class UHalfAHorseCameraProfile ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Public_Game_HalfAHorseCameraProfile_h__Script_HalfAHorse_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHalfAHorseCameraProfile, UHalfAHorseCameraProfile::StaticClass, TEXT("UHalfAHorseCameraProfile"), &Z_Registration_Info_UClass_UHalfAHorseCameraProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHalfAHorseCameraProfile), 2219460200U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Public_Game_HalfAHorseCameraProfile_h__Script_HalfAHorse_3887173414(TEXT("/Script/HalfAHorse"),
	Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Public_Game_HalfAHorseCameraProfile_h__Script_HalfAHorse_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Public_Game_HalfAHorseCameraProfile_h__Script_HalfAHorse_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
