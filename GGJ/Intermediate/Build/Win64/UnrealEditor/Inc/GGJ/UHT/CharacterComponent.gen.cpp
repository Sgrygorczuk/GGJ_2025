// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ/Public/CharacterComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GGJ_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
GGJ_API UClass* Z_Construct_UClass_UCharacterComponent();
GGJ_API UClass* Z_Construct_UClass_UCharacterComponent_NoRegister();
GGJ_API UFunction* Z_Construct_UDelegateFunction_GGJ_OnDeath__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GGJ();
// End Cross Module References

// Begin Delegate FOnDeath
struct Z_Construct_UDelegateFunction_GGJ_OnDeath__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GGJ_OnDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GGJ, nullptr, "OnDeath__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GGJ_OnDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GGJ_OnDeath__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_GGJ_OnDeath__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GGJ_OnDeath__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath)
{
	OnDeath.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnDeath

// Begin Class UCharacterComponent Function Fire
struct Z_Construct_UFunction_UCharacterComponent_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/CharacterComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterComponent_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterComponent, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterComponent_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterComponent_Fire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCharacterComponent_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterComponent_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterComponent::execFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire();
	P_NATIVE_END;
}
// End Class UCharacterComponent Function Fire

// Begin Class UCharacterComponent Function Heal
struct Z_Construct_UFunction_UCharacterComponent_Heal_Statics
{
	struct CharacterComponent_eventHeal_Parms
	{
		float healAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Actions" },
		{ "ModuleRelativePath", "Public/CharacterComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_healAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterComponent_Heal_Statics::NewProp_healAmount = { "healAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterComponent_eventHeal_Parms, healAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterComponent_Heal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterComponent_Heal_Statics::NewProp_healAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterComponent_Heal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterComponent_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterComponent, nullptr, "Heal", nullptr, nullptr, Z_Construct_UFunction_UCharacterComponent_Heal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterComponent_Heal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterComponent_Heal_Statics::CharacterComponent_eventHeal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterComponent_Heal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterComponent_Heal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterComponent_Heal_Statics::CharacterComponent_eventHeal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterComponent_Heal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterComponent_Heal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterComponent::execHeal)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_healAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Heal(Z_Param_healAmount);
	P_NATIVE_END;
}
// End Class UCharacterComponent Function Heal

// Begin Class UCharacterComponent Function TakeDamage
struct Z_Construct_UFunction_UCharacterComponent_TakeDamage_Statics
{
	struct CharacterComponent_eventTakeDamage_Parms
	{
		float damageAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Character Actions" },
		{ "ModuleRelativePath", "Public/CharacterComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterComponent_TakeDamage_Statics::NewProp_damageAmount = { "damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterComponent_eventTakeDamage_Parms, damageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterComponent_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterComponent_TakeDamage_Statics::NewProp_damageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterComponent_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterComponent_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterComponent, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_UCharacterComponent_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterComponent_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharacterComponent_TakeDamage_Statics::CharacterComponent_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterComponent_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterComponent_TakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharacterComponent_TakeDamage_Statics::CharacterComponent_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharacterComponent_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterComponent_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCharacterComponent::execTakeDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_damageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage(Z_Param_damageAmount);
	P_NATIVE_END;
}
// End Class UCharacterComponent Function TakeDamage

// Begin Class UCharacterComponent
void UCharacterComponent::StaticRegisterNativesUCharacterComponent()
{
	UClass* Class = UCharacterComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fire", &UCharacterComponent::execFire },
		{ "Heal", &UCharacterComponent::execHeal },
		{ "TakeDamage", &UCharacterComponent::execTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterComponent);
UClass* Z_Construct_UClass_UCharacterComponent_NoRegister()
{
	return UCharacterComponent::StaticClass();
}
struct Z_Construct_UClass_UCharacterComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CharacterComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CharacterComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentHealth_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Public/CharacterComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Public/CharacterComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[] = {
		{ "Category", "Character Stats" },
		{ "ModuleRelativePath", "Public/CharacterComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireCooldown_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/CharacterComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireLaunchSpeed_MetaData[] = {
		{ "Category", "Firing" },
		{ "ModuleRelativePath", "Public/CharacterComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Firing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Damage value for the normal shot\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Damage value for the normal shot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirePointNameRef_MetaData[] = {
		{ "Category", "Firing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Firing point reference\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Firing point reference" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FiringProjectileClass_MetaData[] = {
		{ "Category", "Firing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Projectile class\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[] = {
		{ "Category", "Character Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Death event \n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Death event" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
	static void NewProp_isDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isDead;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireLaunchSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FirePointNameRef;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FiringProjectileClass;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterComponent_Fire, "Fire" }, // 338607449
		{ &Z_Construct_UFunction_UCharacterComponent_Heal, "Heal" }, // 3877975917
		{ &Z_Construct_UFunction_UCharacterComponent_TakeDamage, "TakeDamage" }, // 4237745255
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterComponent_Statics::NewProp_currentHealth = { "currentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterComponent, currentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentHealth_MetaData), NewProp_currentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterComponent_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterComponent, maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxHealth_MetaData), NewProp_maxHealth_MetaData) };
void Z_Construct_UClass_UCharacterComponent_Statics::NewProp_isDead_SetBit(void* Obj)
{
	((UCharacterComponent*)Obj)->isDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterComponent_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterComponent), &Z_Construct_UClass_UCharacterComponent_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isDead_MetaData), NewProp_isDead_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterComponent_Statics::NewProp_FireCooldown = { "FireCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterComponent, FireCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireCooldown_MetaData), NewProp_FireCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterComponent_Statics::NewProp_FireLaunchSpeed = { "FireLaunchSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterComponent, FireLaunchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireLaunchSpeed_MetaData), NewProp_FireLaunchSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterComponent_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterComponent, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCharacterComponent_Statics::NewProp_FirePointNameRef = { "FirePointNameRef", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterComponent, FirePointNameRef), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirePointNameRef_MetaData), NewProp_FirePointNameRef_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCharacterComponent_Statics::NewProp_FiringProjectileClass = { "FiringProjectileClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterComponent, FiringProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FiringProjectileClass_MetaData), NewProp_FiringProjectileClass_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCharacterComponent_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterComponent, OnDeath), Z_Construct_UDelegateFunction_GGJ_OnDeath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeath_MetaData), NewProp_OnDeath_MetaData) }; // 1803430627
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterComponent_Statics::NewProp_currentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterComponent_Statics::NewProp_maxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterComponent_Statics::NewProp_isDead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterComponent_Statics::NewProp_FireCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterComponent_Statics::NewProp_FireLaunchSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterComponent_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterComponent_Statics::NewProp_FirePointNameRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterComponent_Statics::NewProp_FiringProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterComponent_Statics::NewProp_OnDeath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GGJ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterComponent_Statics::ClassParams = {
	&UCharacterComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCharacterComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterComponent()
{
	if (!Z_Registration_Info_UClass_UCharacterComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterComponent.OuterSingleton, Z_Construct_UClass_UCharacterComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterComponent.OuterSingleton;
}
template<> GGJ_API UClass* StaticClass<UCharacterComponent>()
{
	return UCharacterComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterComponent);
UCharacterComponent::~UCharacterComponent() {}
// End Class UCharacterComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterComponent, UCharacterComponent::StaticClass, TEXT("UCharacterComponent"), &Z_Registration_Info_UClass_UCharacterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterComponent), 4038816105U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterComponent_h_4245833289(TEXT("/Script/GGJ"),
	Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
