// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HalfAHorsePlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHalfAHorsePlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
HALFAHORSE_API UClass* Z_Construct_UClass_AHalfAHorsePlayerController();
HALFAHORSE_API UClass* Z_Construct_UClass_AHalfAHorsePlayerController_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_HalfAHorse();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHalfAHorsePlayerController **********************************************
void AHalfAHorsePlayerController::StaticRegisterNativesAHalfAHorsePlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHalfAHorsePlayerController;
UClass* AHalfAHorsePlayerController::GetPrivateStaticClass()
{
	using TClass = AHalfAHorsePlayerController;
	if (!Z_Registration_Info_UClass_AHalfAHorsePlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HalfAHorsePlayerController"),
			Z_Registration_Info_UClass_AHalfAHorsePlayerController.InnerSingleton,
			StaticRegisterNativesAHalfAHorsePlayerController,
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
	return Z_Registration_Info_UClass_AHalfAHorsePlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AHalfAHorsePlayerController_NoRegister()
{
	return AHalfAHorsePlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHalfAHorsePlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic PlayerController class for a third person game\n *  Manages input mappings\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "HalfAHorsePlayerController.h" },
		{ "ModuleRelativePath", "HalfAHorsePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic PlayerController class for a third person game\nManages input mappings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "HalfAHorsePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileExcludedMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "HalfAHorsePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidgetClass_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mobile controls widget to spawn */" },
#endif
		{ "ModuleRelativePath", "HalfAHorsePlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mobile controls widget to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAligningCamera_MetaData[] = {
		{ "Category", "HalfAHorsePlayerController" },
		{ "ModuleRelativePath", "HalfAHorsePlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraAlignSpeed_MetaData[] = {
		{ "Category", "HalfAHorsePlayerController" },
		{ "ModuleRelativePath", "HalfAHorsePlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileExcludedMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileExcludedMappingContexts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MobileControlsWidgetClass;
	static void NewProp_bAligningCamera_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAligningCamera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraAlignSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHalfAHorsePlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHalfAHorsePlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHalfAHorsePlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHalfAHorsePlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHalfAHorsePlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHalfAHorsePlayerController_Statics::NewProp_MobileExcludedMappingContexts = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHalfAHorsePlayerController, MobileExcludedMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileExcludedMappingContexts_MetaData), NewProp_MobileExcludedMappingContexts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHalfAHorsePlayerController_Statics::NewProp_MobileControlsWidgetClass = { "MobileControlsWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHalfAHorsePlayerController, MobileControlsWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidgetClass_MetaData), NewProp_MobileControlsWidgetClass_MetaData) };
void Z_Construct_UClass_AHalfAHorsePlayerController_Statics::NewProp_bAligningCamera_SetBit(void* Obj)
{
	((AHalfAHorsePlayerController*)Obj)->bAligningCamera = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHalfAHorsePlayerController_Statics::NewProp_bAligningCamera = { "bAligningCamera", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHalfAHorsePlayerController), &Z_Construct_UClass_AHalfAHorsePlayerController_Statics::NewProp_bAligningCamera_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAligningCamera_MetaData), NewProp_bAligningCamera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHalfAHorsePlayerController_Statics::NewProp_CameraAlignSpeed = { "CameraAlignSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHalfAHorsePlayerController, CameraAlignSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraAlignSpeed_MetaData), NewProp_CameraAlignSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHalfAHorsePlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorsePlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorsePlayerController_Statics::NewProp_DefaultMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorsePlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorsePlayerController_Statics::NewProp_MobileExcludedMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorsePlayerController_Statics::NewProp_MobileControlsWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorsePlayerController_Statics::NewProp_bAligningCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorsePlayerController_Statics::NewProp_CameraAlignSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorsePlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHalfAHorsePlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_HalfAHorse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorsePlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHalfAHorsePlayerController_Statics::ClassParams = {
	&AHalfAHorsePlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHalfAHorsePlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorsePlayerController_Statics::PropPointers),
	0,
	0x008003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorsePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AHalfAHorsePlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHalfAHorsePlayerController()
{
	if (!Z_Registration_Info_UClass_AHalfAHorsePlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHalfAHorsePlayerController.OuterSingleton, Z_Construct_UClass_AHalfAHorsePlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHalfAHorsePlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHalfAHorsePlayerController);
AHalfAHorsePlayerController::~AHalfAHorsePlayerController() {}
// ********** End Class AHalfAHorsePlayerController ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_HalfAHorsePlayerController_h__Script_HalfAHorse_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHalfAHorsePlayerController, AHalfAHorsePlayerController::StaticClass, TEXT("AHalfAHorsePlayerController"), &Z_Registration_Info_UClass_AHalfAHorsePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHalfAHorsePlayerController), 4192033386U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_HalfAHorsePlayerController_h__Script_HalfAHorse_4244278576(TEXT("/Script/HalfAHorse"),
	Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_HalfAHorsePlayerController_h__Script_HalfAHorse_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_HalfAHorsePlayerController_h__Script_HalfAHorse_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
