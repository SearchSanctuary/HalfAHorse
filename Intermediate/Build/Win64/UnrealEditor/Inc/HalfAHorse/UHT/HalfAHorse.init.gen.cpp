// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHalfAHorse_init() {}
	HALFAHORSE_API UFunction* Z_Construct_UDelegateFunction_HalfAHorse_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HalfAHorse;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HalfAHorse()
	{
		if (!Z_Registration_Info_UPackage__Script_HalfAHorse.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HalfAHorse_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HalfAHorse",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x33AC8C25,
				0x1BBEEF2A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HalfAHorse.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HalfAHorse.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HalfAHorse(Z_Construct_UPackage__Script_HalfAHorse, TEXT("/Script/HalfAHorse"), Z_Registration_Info_UPackage__Script_HalfAHorse, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x33AC8C25, 0x1BBEEF2A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
