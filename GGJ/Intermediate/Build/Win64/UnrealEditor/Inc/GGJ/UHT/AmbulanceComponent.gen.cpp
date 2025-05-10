// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGJ/Public/AmbulanceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbulanceComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
GGJ_API UClass* Z_Construct_UClass_UAmbulanceComponent();
GGJ_API UClass* Z_Construct_UClass_UAmbulanceComponent_NoRegister();
GGJ_API UClass* Z_Construct_UClass_UCharacterComponent();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_GGJ();
// End Cross Module References

// Begin Class UAmbulanceComponent Function SetHealingActive
struct Z_Construct_UFunction_UAmbulanceComponent_SetHealingActive_Statics
{
	struct AmbulanceComponent_eventSetHealingActive_Parms
	{
		bool bActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbulanceComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAmbulanceComponent_SetHealingActive_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((AmbulanceComponent_eventSetHealingActive_Parms*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAmbulanceComponent_SetHealingActive_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AmbulanceComponent_eventSetHealingActive_Parms), &Z_Construct_UFunction_UAmbulanceComponent_SetHealingActive_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAmbulanceComponent_SetHealingActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAmbulanceComponent_SetHealingActive_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbulanceComponent_SetHealingActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAmbulanceComponent_SetHealingActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAmbulanceComponent, nullptr, "SetHealingActive", nullptr, nullptr, Z_Construct_UFunction_UAmbulanceComponent_SetHealingActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbulanceComponent_SetHealingActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAmbulanceComponent_SetHealingActive_Statics::AmbulanceComponent_eventSetHealingActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAmbulanceComponent_SetHealingActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAmbulanceComponent_SetHealingActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAmbulanceComponent_SetHealingActive_Statics::AmbulanceComponent_eventSetHealingActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAmbulanceComponent_SetHealingActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAmbulanceComponent_SetHealingActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAmbulanceComponent::execSetHealingActive)
{
	P_GET_UBOOL(Z_Param_bActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHealingActive(Z_Param_bActive);
	P_NATIVE_END;
}
// End Class UAmbulanceComponent Function SetHealingActive

// Begin Class UAmbulanceComponent
void UAmbulanceComponent::StaticRegisterNativesUAmbulanceComponent()
{
	UClass* Class = UAmbulanceComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetHealingActive", &UAmbulanceComponent::execSetHealingActive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAmbulanceComponent);
UClass* Z_Construct_UClass_UAmbulanceComponent_NoRegister()
{
	return UAmbulanceComponent::StaticClass();
}
struct Z_Construct_UClass_UAmbulanceComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AmbulanceComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AmbulanceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealRadius_MetaData[] = {
		{ "Category", "Healing" },
		{ "ModuleRelativePath", "Public/AmbulanceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealInterval_MetaData[] = {
		{ "Category", "Healing" },
		{ "ModuleRelativePath", "Public/AmbulanceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealAmount_MetaData[] = {
		{ "Category", "Healing" },
		{ "ModuleRelativePath", "Public/AmbulanceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealRemainingAmount_MetaData[] = {
		{ "Category", "Healing" },
		{ "ModuleRelativePath", "Public/AmbulanceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealMaxAmount_MetaData[] = {
		{ "Category", "Healing" },
		{ "ModuleRelativePath", "Public/AmbulanceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealCooldown_MetaData[] = {
		{ "Category", "Healing" },
		{ "ModuleRelativePath", "Public/AmbulanceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealingEffect_MetaData[] = {
		{ "Category", "Visuals" },
		{ "ModuleRelativePath", "Public/AmbulanceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealingVisualComponent_MetaData[] = {
		{ "Category", "Visuals" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmbulanceComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealingColor_MetaData[] = {
		{ "Category", "Visuals" },
		{ "ModuleRelativePath", "Public/AmbulanceComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealRemainingAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealMaxAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealCooldown;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealingEffect;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealingVisualComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HealingColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAmbulanceComponent_SetHealingActive, "SetHealingActive" }, // 3316796434
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmbulanceComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealRadius = { "HealRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbulanceComponent, HealRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealRadius_MetaData), NewProp_HealRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealInterval = { "HealInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbulanceComponent, HealInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealInterval_MetaData), NewProp_HealInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbulanceComponent, HealAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealAmount_MetaData), NewProp_HealAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealRemainingAmount = { "HealRemainingAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbulanceComponent, HealRemainingAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealRemainingAmount_MetaData), NewProp_HealRemainingAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealMaxAmount = { "HealMaxAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbulanceComponent, HealMaxAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealMaxAmount_MetaData), NewProp_HealMaxAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealCooldown = { "HealCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbulanceComponent, HealCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealCooldown_MetaData), NewProp_HealCooldown_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealingEffect = { "HealingEffect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbulanceComponent, HealingEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealingEffect_MetaData), NewProp_HealingEffect_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealingVisualComponent = { "HealingVisualComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbulanceComponent, HealingVisualComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealingVisualComponent_MetaData), NewProp_HealingVisualComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealingColor = { "HealingColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAmbulanceComponent, HealingColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealingColor_MetaData), NewProp_HealingColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAmbulanceComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealRemainingAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealMaxAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealingEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealingVisualComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbulanceComponent_Statics::NewProp_HealingColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbulanceComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAmbulanceComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GGJ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbulanceComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAmbulanceComponent_Statics::ClassParams = {
	&UAmbulanceComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAmbulanceComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAmbulanceComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAmbulanceComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAmbulanceComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAmbulanceComponent()
{
	if (!Z_Registration_Info_UClass_UAmbulanceComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAmbulanceComponent.OuterSingleton, Z_Construct_UClass_UAmbulanceComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAmbulanceComponent.OuterSingleton;
}
template<> GGJ_API UClass* StaticClass<UAmbulanceComponent>()
{
	return UAmbulanceComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAmbulanceComponent);
UAmbulanceComponent::~UAmbulanceComponent() {}
// End Class UAmbulanceComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_AmbulanceComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAmbulanceComponent, UAmbulanceComponent::StaticClass, TEXT("UAmbulanceComponent"), &Z_Registration_Info_UClass_UAmbulanceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAmbulanceComponent), 3624632399U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_AmbulanceComponent_h_2083057045(TEXT("/Script/GGJ"),
	Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_AmbulanceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_AmbulanceComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
