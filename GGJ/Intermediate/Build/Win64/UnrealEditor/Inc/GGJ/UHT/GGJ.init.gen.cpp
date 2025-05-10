// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGGJ_init() {}
	GGJ_API UFunction* Z_Construct_UDelegateFunction_GGJ_OnDeath__DelegateSignature();
	GGJ_API UFunction* Z_Construct_UDelegateFunction_GGJ_OnHit__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GGJ;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GGJ()
	{
		if (!Z_Registration_Info_UPackage__Script_GGJ.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GGJ_OnDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GGJ_OnHit__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GGJ",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3A51B95B,
				0xF19B7F6E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GGJ.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GGJ.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GGJ(Z_Construct_UPackage__Script_GGJ, TEXT("/Script/GGJ"), Z_Registration_Info_UPackage__Script_GGJ, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3A51B95B, 0xF19B7F6E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
