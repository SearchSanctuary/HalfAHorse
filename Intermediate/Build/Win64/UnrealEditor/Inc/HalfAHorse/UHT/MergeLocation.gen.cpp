// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/MergeLocation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMergeLocation() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
HALFAHORSE_API UClass* Z_Construct_UClass_AMergeLocation();
HALFAHORSE_API UClass* Z_Construct_UClass_AMergeLocation_NoRegister();
HALFAHORSE_API UClass* Z_Construct_UClass_UConversationDataAsset_NoRegister();
HALFAHORSE_API UClass* Z_Construct_UClass_UDualConversationWidget_NoRegister();
HALFAHORSE_API UEnum* Z_Construct_UEnum_HalfAHorse_EMergeState();
UPackage* Z_Construct_UPackage__Script_HalfAHorse();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EMergeState ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMergeState;
static UEnum* EMergeState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMergeState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMergeState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HalfAHorse_EMergeState, (UObject*)Z_Construct_UPackage__Script_HalfAHorse(), TEXT("EMergeState"));
	}
	return Z_Registration_Info_UEnum_EMergeState.OuterSingleton;
}
template<> HALFAHORSE_API UEnum* StaticEnum<EMergeState>()
{
	return EMergeState_StaticEnum();
}
struct Z_Construct_UEnum_HalfAHorse_EMergeState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AligningCameras.DisplayName", "Aligning Cameras" },
		{ "AligningCameras.Name", "EMergeState::AligningCameras" },
		{ "BlueprintType", "true" },
		{ "ConversationInProgress.DisplayName", "Conversation In Progress" },
		{ "ConversationInProgress.Name", "EMergeState::ConversationInProgress" },
		{ "Finished.DisplayName", "Finished" },
		{ "Finished.Name", "EMergeState::Finished" },
		{ "ModuleRelativePath", "Player/MergeLocation.h" },
		{ "MovingPlayers.DisplayName", "Moving Players" },
		{ "MovingPlayers.Name", "EMergeState::MovingPlayers" },
		{ "SwitchingToShared.DisplayName", "Switching To Shared" },
		{ "SwitchingToShared.Name", "EMergeState::SwitchingToShared" },
		{ "Waiting.DisplayName", "Waiting" },
		{ "Waiting.Name", "EMergeState::Waiting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMergeState::Waiting", (int64)EMergeState::Waiting },
		{ "EMergeState::MovingPlayers", (int64)EMergeState::MovingPlayers },
		{ "EMergeState::AligningCameras", (int64)EMergeState::AligningCameras },
		{ "EMergeState::SwitchingToShared", (int64)EMergeState::SwitchingToShared },
		{ "EMergeState::Finished", (int64)EMergeState::Finished },
		{ "EMergeState::ConversationInProgress", (int64)EMergeState::ConversationInProgress },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HalfAHorse_EMergeState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HalfAHorse,
	nullptr,
	"EMergeState",
	"EMergeState",
	Z_Construct_UEnum_HalfAHorse_EMergeState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HalfAHorse_EMergeState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HalfAHorse_EMergeState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HalfAHorse_EMergeState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HalfAHorse_EMergeState()
{
	if (!Z_Registration_Info_UEnum_EMergeState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMergeState.InnerSingleton, Z_Construct_UEnum_HalfAHorse_EMergeState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMergeState.InnerSingleton;
}
// ********** End Enum EMergeState *****************************************************************

// ********** Begin Class AMergeLocation ***********************************************************
void AMergeLocation::StaticRegisterNativesAMergeLocation()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMergeLocation;
UClass* AMergeLocation::GetPrivateStaticClass()
{
	using TClass = AMergeLocation;
	if (!Z_Registration_Info_UClass_AMergeLocation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MergeLocation"),
			Z_Registration_Info_UClass_AMergeLocation.InnerSingleton,
			StaticRegisterNativesAMergeLocation,
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
	return Z_Registration_Info_UClass_AMergeLocation.InnerSingleton;
}
UClass* Z_Construct_UClass_AMergeLocation_NoRegister()
{
	return AMergeLocation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMergeLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Player/MergeLocation.h" },
		{ "ModuleRelativePath", "Player/MergeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Conversation_MetaData[] = {
		{ "Category", "MergeLocation" },
		{ "ModuleRelativePath", "Player/MergeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DualConversationClass_MetaData[] = {
		{ "Category", "MergeLocation" },
		{ "ModuleRelativePath", "Player/MergeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SharedCamera_MetaData[] = {
		{ "Category", "MergeLocation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Scene set up\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/MergeLocation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scene set up" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRootComp_MetaData[] = {
		{ "Category", "MergeLocation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/MergeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P1Position_MetaData[] = {
		{ "Category", "MergeLocation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/MergeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2Position_MetaData[] = {
		{ "Category", "MergeLocation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/MergeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P1Ready_MetaData[] = {
		{ "Category", "MergeLocation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Triggers\n" },
#endif
		{ "ModuleRelativePath", "Player/MergeLocation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2Ready_MetaData[] = {
		{ "Category", "MergeLocation" },
		{ "ModuleRelativePath", "Player/MergeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P1Distance_MetaData[] = {
		{ "Category", "MergeLocation" },
		{ "ModuleRelativePath", "Player/MergeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2Distance_MetaData[] = {
		{ "Category", "MergeLocation" },
		{ "ModuleRelativePath", "Player/MergeLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeState_MetaData[] = {
		{ "Category", "MergeLocation" },
		{ "ModuleRelativePath", "Player/MergeLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Conversation;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DualConversationClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SharedCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRootComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_P1Position;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_P2Position;
	static void NewProp_P1Ready_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_P1Ready;
	static void NewProp_P2Ready_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_P2Ready;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_P1Distance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_P2Distance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MergeState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MergeState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMergeLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMergeLocation_Statics::NewProp_Conversation = { "Conversation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMergeLocation, Conversation), Z_Construct_UClass_UConversationDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Conversation_MetaData), NewProp_Conversation_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMergeLocation_Statics::NewProp_DualConversationClass = { "DualConversationClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMergeLocation, DualConversationClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDualConversationWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DualConversationClass_MetaData), NewProp_DualConversationClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMergeLocation_Statics::NewProp_SharedCamera = { "SharedCamera", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMergeLocation, SharedCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SharedCamera_MetaData), NewProp_SharedCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMergeLocation_Statics::NewProp_SceneRootComp = { "SceneRootComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMergeLocation, SceneRootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRootComp_MetaData), NewProp_SceneRootComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMergeLocation_Statics::NewProp_P1Position = { "P1Position", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMergeLocation, P1Position), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P1Position_MetaData), NewProp_P1Position_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMergeLocation_Statics::NewProp_P2Position = { "P2Position", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMergeLocation, P2Position), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2Position_MetaData), NewProp_P2Position_MetaData) };
void Z_Construct_UClass_AMergeLocation_Statics::NewProp_P1Ready_SetBit(void* Obj)
{
	((AMergeLocation*)Obj)->P1Ready = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMergeLocation_Statics::NewProp_P1Ready = { "P1Ready", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMergeLocation), &Z_Construct_UClass_AMergeLocation_Statics::NewProp_P1Ready_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P1Ready_MetaData), NewProp_P1Ready_MetaData) };
void Z_Construct_UClass_AMergeLocation_Statics::NewProp_P2Ready_SetBit(void* Obj)
{
	((AMergeLocation*)Obj)->P2Ready = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMergeLocation_Statics::NewProp_P2Ready = { "P2Ready", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMergeLocation), &Z_Construct_UClass_AMergeLocation_Statics::NewProp_P2Ready_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2Ready_MetaData), NewProp_P2Ready_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMergeLocation_Statics::NewProp_P1Distance = { "P1Distance", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMergeLocation, P1Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P1Distance_MetaData), NewProp_P1Distance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMergeLocation_Statics::NewProp_P2Distance = { "P2Distance", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMergeLocation, P2Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2Distance_MetaData), NewProp_P2Distance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMergeLocation_Statics::NewProp_MergeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMergeLocation_Statics::NewProp_MergeState = { "MergeState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMergeLocation, MergeState), Z_Construct_UEnum_HalfAHorse_EMergeState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeState_MetaData), NewProp_MergeState_MetaData) }; // 2853329532
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMergeLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMergeLocation_Statics::NewProp_Conversation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMergeLocation_Statics::NewProp_DualConversationClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMergeLocation_Statics::NewProp_SharedCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMergeLocation_Statics::NewProp_SceneRootComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMergeLocation_Statics::NewProp_P1Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMergeLocation_Statics::NewProp_P2Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMergeLocation_Statics::NewProp_P1Ready,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMergeLocation_Statics::NewProp_P2Ready,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMergeLocation_Statics::NewProp_P1Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMergeLocation_Statics::NewProp_P2Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMergeLocation_Statics::NewProp_MergeState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMergeLocation_Statics::NewProp_MergeState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMergeLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMergeLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HalfAHorse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMergeLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMergeLocation_Statics::ClassParams = {
	&AMergeLocation::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMergeLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMergeLocation_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMergeLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_AMergeLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMergeLocation()
{
	if (!Z_Registration_Info_UClass_AMergeLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMergeLocation.OuterSingleton, Z_Construct_UClass_AMergeLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMergeLocation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMergeLocation);
AMergeLocation::~AMergeLocation() {}
// ********** End Class AMergeLocation *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_MergeLocation_h__Script_HalfAHorse_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMergeState_StaticEnum, TEXT("EMergeState"), &Z_Registration_Info_UEnum_EMergeState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2853329532U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMergeLocation, AMergeLocation::StaticClass, TEXT("AMergeLocation"), &Z_Registration_Info_UClass_AMergeLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMergeLocation), 1800736696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_MergeLocation_h__Script_HalfAHorse_2255329037(TEXT("/Script/HalfAHorse"),
	Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_MergeLocation_h__Script_HalfAHorse_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_MergeLocation_h__Script_HalfAHorse_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_MergeLocation_h__Script_HalfAHorse_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_Player_MergeLocation_h__Script_HalfAHorse_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
