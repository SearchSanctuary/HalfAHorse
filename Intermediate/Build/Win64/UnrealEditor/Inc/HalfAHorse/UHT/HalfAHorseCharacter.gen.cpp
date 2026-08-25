// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HalfAHorseCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHalfAHorseCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
HALFAHORSE_API UClass* Z_Construct_UClass_AHalfAHorseCharacter();
HALFAHORSE_API UClass* Z_Construct_UClass_AHalfAHorseCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_HalfAHorse();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHalfAHorseCharacter Function DoJumpEnd **********************************
struct Z_Construct_UFunction_AHalfAHorseCharacter_DoJumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump pressed inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "HalfAHorseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump pressed inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHalfAHorseCharacter_DoJumpEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHalfAHorseCharacter, nullptr, "DoJumpEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHalfAHorseCharacter_DoJumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHalfAHorseCharacter_DoJumpEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHalfAHorseCharacter_DoJumpEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHalfAHorseCharacter_DoJumpEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHalfAHorseCharacter::execDoJumpEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpEnd();
	P_NATIVE_END;
}
// ********** End Class AHalfAHorseCharacter Function DoJumpEnd ************************************

// ********** Begin Class AHalfAHorseCharacter Function DoJumpStart ********************************
struct Z_Construct_UFunction_AHalfAHorseCharacter_DoJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump pressed inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "HalfAHorseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump pressed inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHalfAHorseCharacter_DoJumpStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHalfAHorseCharacter, nullptr, "DoJumpStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHalfAHorseCharacter_DoJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHalfAHorseCharacter_DoJumpStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHalfAHorseCharacter_DoJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHalfAHorseCharacter_DoJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHalfAHorseCharacter::execDoJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStart();
	P_NATIVE_END;
}
// ********** End Class AHalfAHorseCharacter Function DoJumpStart **********************************

// ********** Begin Class AHalfAHorseCharacter Function DoLook *************************************
struct Z_Construct_UFunction_AHalfAHorseCharacter_DoLook_Statics
{
	struct HalfAHorseCharacter_eventDoLook_Parms
	{
		float Yaw;
		float Pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles look inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "HalfAHorseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles look inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHalfAHorseCharacter_DoLook_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HalfAHorseCharacter_eventDoLook_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHalfAHorseCharacter_DoLook_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HalfAHorseCharacter_eventDoLook_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHalfAHorseCharacter_DoLook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHalfAHorseCharacter_DoLook_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHalfAHorseCharacter_DoLook_Statics::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHalfAHorseCharacter_DoLook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHalfAHorseCharacter_DoLook_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHalfAHorseCharacter, nullptr, "DoLook", Z_Construct_UFunction_AHalfAHorseCharacter_DoLook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHalfAHorseCharacter_DoLook_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHalfAHorseCharacter_DoLook_Statics::HalfAHorseCharacter_eventDoLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHalfAHorseCharacter_DoLook_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHalfAHorseCharacter_DoLook_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHalfAHorseCharacter_DoLook_Statics::HalfAHorseCharacter_eventDoLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHalfAHorseCharacter_DoLook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHalfAHorseCharacter_DoLook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHalfAHorseCharacter::execDoLook)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoLook(Z_Param_Yaw,Z_Param_Pitch);
	P_NATIVE_END;
}
// ********** End Class AHalfAHorseCharacter Function DoLook ***************************************

// ********** Begin Class AHalfAHorseCharacter Function DoMove *************************************
struct Z_Construct_UFunction_AHalfAHorseCharacter_DoMove_Statics
{
	struct HalfAHorseCharacter_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles move inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "HalfAHorseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles move inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHalfAHorseCharacter_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HalfAHorseCharacter_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHalfAHorseCharacter_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HalfAHorseCharacter_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHalfAHorseCharacter_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHalfAHorseCharacter_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHalfAHorseCharacter_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHalfAHorseCharacter_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHalfAHorseCharacter_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHalfAHorseCharacter, nullptr, "DoMove", Z_Construct_UFunction_AHalfAHorseCharacter_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHalfAHorseCharacter_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHalfAHorseCharacter_DoMove_Statics::HalfAHorseCharacter_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHalfAHorseCharacter_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHalfAHorseCharacter_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHalfAHorseCharacter_DoMove_Statics::HalfAHorseCharacter_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHalfAHorseCharacter_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHalfAHorseCharacter_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHalfAHorseCharacter::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class AHalfAHorseCharacter Function DoMove ***************************************

// ********** Begin Class AHalfAHorseCharacter *****************************************************
void AHalfAHorseCharacter::StaticRegisterNativesAHalfAHorseCharacter()
{
	UClass* Class = AHalfAHorseCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoJumpEnd", &AHalfAHorseCharacter::execDoJumpEnd },
		{ "DoJumpStart", &AHalfAHorseCharacter::execDoJumpStart },
		{ "DoLook", &AHalfAHorseCharacter::execDoLook },
		{ "DoMove", &AHalfAHorseCharacter::execDoMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHalfAHorseCharacter;
UClass* AHalfAHorseCharacter::GetPrivateStaticClass()
{
	using TClass = AHalfAHorseCharacter;
	if (!Z_Registration_Info_UClass_AHalfAHorseCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HalfAHorseCharacter"),
			Z_Registration_Info_UClass_AHalfAHorseCharacter.InnerSingleton,
			StaticRegisterNativesAHalfAHorseCharacter,
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
	return Z_Registration_Info_UClass_AHalfAHorseCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AHalfAHorseCharacter_NoRegister()
{
	return AHalfAHorseCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHalfAHorseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A simple player-controllable third person character\n *  Implements a controllable orbiting camera\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HalfAHorseCharacter.h" },
		{ "ModuleRelativePath", "HalfAHorseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple player-controllable third person character\nImplements a controllable orbiting camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HalfAHorseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HalfAHorseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "HalfAHorseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "HalfAHorseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "HalfAHorseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mouse Look Input Action */" },
#endif
		{ "ModuleRelativePath", "HalfAHorseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mouse Look Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHalfAHorseCharacter_DoJumpEnd, "DoJumpEnd" }, // 145321297
		{ &Z_Construct_UFunction_AHalfAHorseCharacter_DoJumpStart, "DoJumpStart" }, // 3446476879
		{ &Z_Construct_UFunction_AHalfAHorseCharacter_DoLook, "DoLook" }, // 3666344185
		{ &Z_Construct_UFunction_AHalfAHorseCharacter_DoMove, "DoMove" }, // 1753136543
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHalfAHorseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHalfAHorseCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHalfAHorseCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHalfAHorseCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHalfAHorseCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHalfAHorseCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHalfAHorseCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHalfAHorseCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHalfAHorseCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHalfAHorseCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHalfAHorseCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHalfAHorseCharacter_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHalfAHorseCharacter, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookAction_MetaData), NewProp_MouseLookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHalfAHorseCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorseCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorseCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorseCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorseCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorseCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHalfAHorseCharacter_Statics::NewProp_MouseLookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorseCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHalfAHorseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_HalfAHorse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHalfAHorseCharacter_Statics::ClassParams = {
	&AHalfAHorseCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHalfAHorseCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorseCharacter_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHalfAHorseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AHalfAHorseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHalfAHorseCharacter()
{
	if (!Z_Registration_Info_UClass_AHalfAHorseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHalfAHorseCharacter.OuterSingleton, Z_Construct_UClass_AHalfAHorseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHalfAHorseCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHalfAHorseCharacter);
AHalfAHorseCharacter::~AHalfAHorseCharacter() {}
// ********** End Class AHalfAHorseCharacter *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_HalfAHorseCharacter_h__Script_HalfAHorse_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHalfAHorseCharacter, AHalfAHorseCharacter::StaticClass, TEXT("AHalfAHorseCharacter"), &Z_Registration_Info_UClass_AHalfAHorseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHalfAHorseCharacter), 2559077837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_HalfAHorseCharacter_h__Script_HalfAHorse_3661893009(TEXT("/Script/HalfAHorse"),
	Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_HalfAHorseCharacter_h__Script_HalfAHorse_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_xavie_OneDrive_Documents_Unreal_Projects_Games_HalfAHorse_Source_HalfAHorse_HalfAHorseCharacter_h__Script_HalfAHorse_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
