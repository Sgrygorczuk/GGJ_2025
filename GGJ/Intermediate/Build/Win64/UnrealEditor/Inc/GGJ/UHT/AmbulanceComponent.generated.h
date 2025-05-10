// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AmbulanceComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGJ_AmbulanceComponent_generated_h
#error "AmbulanceComponent.generated.h already included, missing '#pragma once' in AmbulanceComponent.h"
#endif
#define GGJ_AmbulanceComponent_generated_h

#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_AmbulanceComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHealingActive);


#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_AmbulanceComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAmbulanceComponent(); \
	friend struct Z_Construct_UClass_UAmbulanceComponent_Statics; \
public: \
	DECLARE_CLASS(UAmbulanceComponent, UCharacterComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GGJ"), NO_API) \
	DECLARE_SERIALIZER(UAmbulanceComponent)


#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_AmbulanceComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAmbulanceComponent(UAmbulanceComponent&&); \
	UAmbulanceComponent(const UAmbulanceComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAmbulanceComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAmbulanceComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAmbulanceComponent) \
	NO_API virtual ~UAmbulanceComponent();


#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_AmbulanceComponent_h_10_PROLOG
#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_AmbulanceComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_AmbulanceComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_AmbulanceComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_AmbulanceComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGJ_API UClass* StaticClass<class UAmbulanceComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_AmbulanceComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
