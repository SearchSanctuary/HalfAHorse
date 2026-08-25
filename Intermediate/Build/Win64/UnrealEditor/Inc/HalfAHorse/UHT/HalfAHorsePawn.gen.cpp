// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HalfAHorsePawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHalfAHorsePawn() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
HALFAHORSE_API UClass* Z_Construct_UClass_AHalfAHorsePawn();
HALFAHORSE_API UClass* Z_Construct_UClass_AHalfAHorsePawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_HalfAHorse();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHalfAHorsePawn **********************************************************
void AHalfAHorsePawn::StaticRegisterNativesAHalfAHorsePawn()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHalfAHorsePawn;
UClass* AHalfAHorsePawn::GetPrivateStaticClass()
{
	using TClass = AHalfAHorsePawn;
	if (!Z_Registration_Info_UClass_AHalfAHorsePawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HalfAHorsePawn"),
			Z_Registration_Info_UClass_AHalfAHorsePawn.InnerSingleton,
			StaticRegisterNativesAHalfAHorsePawn,
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
	return Z_Registration_Info_UClass_AHalfAHorsePawn.InnerSingleton;
}
UClass* Z_Construct_UClass_AHalfAHorsePawn_NoRegister()
{
	return AHalfAHorsePawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHalfAHorsePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HalfAHorsePawn.h" },
		{ "ModuleRelativePath", "HalfAHorsePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "HalfAHorsePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HalfAHorsePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHalfAHorsePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHalfAHorsePawn_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHalfAHorsePawn, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHalfAHorsePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorsePawn_Statics::NewProp_SceneRoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorsePawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHalfAHorsePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_HalfAHorse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorsePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHalfAHorsePawn_Statics::ClassParams = {
	&AHalfAHorsePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHalfAHorsePawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorsePawn_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorsePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AHalfAHorsePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHalfAHorsePawn()
{
	if (!Z_Registration_Info_UClass_AHalfAHorsePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHalfAHorsePawn.OuterSingleton, Z_Construct_UClass_AHalfAHorsePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHalfAHorsePawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHalfAHorsePawn);
AHalfAHorsePawn::~AHalfAHorsePawn() {}
// ********** End Class AHalfAHorsePawn ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_HalfAHorsePawn_h__Script_HalfAHorse_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHalfAHorsePawn, AHalfAHorsePawn::StaticClass, TEXT("AHalfAHorsePawn"), &Z_Registration_Info_UClass_AHalfAHorsePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHalfAHorsePawn), 1652065284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_HalfAHorsePawn_h__Script_HalfAHorse_4060881893(TEXT("/Script/HalfAHorse"),
	Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_HalfAHorsePawn_h__Script_HalfAHorse_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_HalfAHorsePawn_h__Script_HalfAHorse_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
