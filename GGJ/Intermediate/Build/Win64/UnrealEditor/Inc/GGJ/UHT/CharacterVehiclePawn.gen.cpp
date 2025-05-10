// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ/Public/CharacterVehiclePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterVehiclePawn() {}

// Begin Cross Module References
CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
GGJ_API UClass* Z_Construct_UClass_ACharacterVehiclePawn();
GGJ_API UClass* Z_Construct_UClass_ACharacterVehiclePawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_GGJ();
// End Cross Module References

// Begin Class ACharacterVehiclePawn
void ACharacterVehiclePawn::StaticRegisterNativesACharacterVehiclePawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterVehiclePawn);
UClass* Z_Construct_UClass_ACharacterVehiclePawn_NoRegister()
{
	return ACharacterVehiclePawn::StaticClass();
}
struct Z_Construct_UClass_ACharacterVehiclePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterVehiclePawn.h" },
		{ "ModuleRelativePath", "Public/CharacterVehiclePawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterVehiclePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACharacterVehiclePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_GGJ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterVehiclePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterVehiclePawn_Statics::ClassParams = {
	&ACharacterVehiclePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterVehiclePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterVehiclePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacterVehiclePawn()
{
	if (!Z_Registration_Info_UClass_ACharacterVehiclePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterVehiclePawn.OuterSingleton, Z_Construct_UClass_ACharacterVehiclePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacterVehiclePawn.OuterSingleton;
}
template<> GGJ_API UClass* StaticClass<ACharacterVehiclePawn>()
{
	return ACharacterVehiclePawn::StaticClass();
}
ACharacterVehiclePawn::ACharacterVehiclePawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterVehiclePawn);
ACharacterVehiclePawn::~ACharacterVehiclePawn() {}
// End Class ACharacterVehiclePawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterVehiclePawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterVehiclePawn, ACharacterVehiclePawn::StaticClass, TEXT("ACharacterVehiclePawn"), &Z_Registration_Info_UClass_ACharacterVehiclePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterVehiclePawn), 1073200977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterVehiclePawn_h_2429522188(TEXT("/Script/GGJ"),
	Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterVehiclePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterVehiclePawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
