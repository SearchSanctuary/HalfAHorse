// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/HalfAHorseCameraDirector.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHalfAHorseCameraDirector() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
HALFAHORSE_API UClass* Z_Construct_UClass_AHalfAHorseCameraDirector();
HALFAHORSE_API UClass* Z_Construct_UClass_AHalfAHorseCameraDirector_NoRegister();
UPackage* Z_Construct_UPackage__Script_HalfAHorse();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHalfAHorseCameraDirector ************************************************
void AHalfAHorseCameraDirector::StaticRegisterNativesAHalfAHorseCameraDirector()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHalfAHorseCameraDirector;
UClass* AHalfAHorseCameraDirector::GetPrivateStaticClass()
{
	using TClass = AHalfAHorseCameraDirector;
	if (!Z_Registration_Info_UClass_AHalfAHorseCameraDirector.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HalfAHorseCameraDirector"),
			Z_Registration_Info_UClass_AHalfAHorseCameraDirector.InnerSingleton,
			StaticRegisterNativesAHalfAHorseCameraDirector,
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
	return Z_Registration_Info_UClass_AHalfAHorseCameraDirector.InnerSingleton;
}
UClass* Z_Construct_UClass_AHalfAHorseCameraDirector_NoRegister()
{
	return AHalfAHorseCameraDirector::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHalfAHorseCameraDirector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/HalfAHorseCameraDirector.h" },
		{ "ModuleRelativePath", "Player/HalfAHorseCameraDirector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraClass_MetaData[] = {
		{ "Category", "HalfAHorseCameraDirector" },
		{ "ModuleRelativePath", "Player/HalfAHorseCameraDirector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowMerge_MetaData[] = {
		{ "Category", "HalfAHorseCameraDirector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Temporary\n" },
#endif
		{ "ModuleRelativePath", "Player/HalfAHorseCameraDirector.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temporary" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Merging_MetaData[] = {
		{ "Category", "HalfAHorseCameraDirector" },
		{ "ModuleRelativePath", "Player/HalfAHorseCameraDirector.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergingPlayerDistance_MetaData[] = {
		{ "Category", "HalfAHorseCameraDirector" },
		{ "ModuleRelativePath", "Player/HalfAHorseCameraDirector.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraClass;
	static void NewProp_AllowMerge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowMerge;
	static void NewProp_Merging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Merging;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MergingPlayerDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHalfAHorseCameraDirector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::NewProp_CameraClass = { "CameraClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHalfAHorseCameraDirector, CameraClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraClass_MetaData), NewProp_CameraClass_MetaData) };
void Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::NewProp_AllowMerge_SetBit(void* Obj)
{
	((AHalfAHorseCameraDirector*)Obj)->AllowMerge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::NewProp_AllowMerge = { "AllowMerge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHalfAHorseCameraDirector), &Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::NewProp_AllowMerge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowMerge_MetaData), NewProp_AllowMerge_MetaData) };
void Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::NewProp_Merging_SetBit(void* Obj)
{
	((AHalfAHorseCameraDirector*)Obj)->Merging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::NewProp_Merging = { "Merging", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHalfAHorseCameraDirector), &Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::NewProp_Merging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Merging_MetaData), NewProp_Merging_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::NewProp_MergingPlayerDistance = { "MergingPlayerDistance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHalfAHorseCameraDirector, MergingPlayerDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergingPlayerDistance_MetaData), NewProp_MergingPlayerDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::NewProp_CameraClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::NewProp_AllowMerge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::NewProp_Merging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::NewProp_MergingPlayerDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HalfAHorse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::ClassParams = {
	&AHalfAHorseCameraDirector::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::Class_MetaDataParams), Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHalfAHorseCameraDirector()
{
	if (!Z_Registration_Info_UClass_AHalfAHorseCameraDirector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHalfAHorseCameraDirector.OuterSingleton, Z_Construct_UClass_AHalfAHorseCameraDirector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHalfAHorseCameraDirector.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHalfAHorseCameraDirector);
AHalfAHorseCameraDirector::~AHalfAHorseCameraDirector() {}
// ********** End Class AHalfAHorseCameraDirector **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_HalfAHorseCameraDirector_h__Script_HalfAHorse_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHalfAHorseCameraDirector, AHalfAHorseCameraDirector::StaticClass, TEXT("AHalfAHorseCameraDirector"), &Z_Registration_Info_UClass_AHalfAHorseCameraDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHalfAHorseCameraDirector), 1900166757U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_HalfAHorseCameraDirector_h__Script_HalfAHorse_770892483(TEXT("/Script/HalfAHorse"),
	Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_HalfAHorseCameraDirector_h__Script_HalfAHorse_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_HalfAHorseCameraDirector_h__Script_HalfAHorse_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
