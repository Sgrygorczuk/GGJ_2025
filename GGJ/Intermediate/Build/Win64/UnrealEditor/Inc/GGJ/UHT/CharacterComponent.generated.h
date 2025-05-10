// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGJ_CharacterComponent_generated_h
#error "CharacterComponent.generated.h already included, missing '#pragma once' in CharacterComponent.h"
#endif
#define GGJ_CharacterComponent_generated_h

#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterComponent_h_11_DELEGATE \
GGJ_API void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath);


#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execHeal); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterComponent(); \
	friend struct Z_Construct_UClass_UCharacterComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GGJ"), NO_API) \
	DECLARE_SERIALIZER(UCharacterComponent)


#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCharacterComponent(UCharacterComponent&&); \
	UCharacterComponent(const UCharacterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterComponent) \
	NO_API virtual ~UCharacterComponent();


#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterComponent_h_13_PROLOG
#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGJ_API UClass* StaticClass<class UCharacterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
