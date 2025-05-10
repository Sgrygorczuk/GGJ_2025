// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TankComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGJ_TankComponent_generated_h
#error "TankComponent.generated.h already included, missing '#pragma once' in TankComponent.h"
#endif
#define GGJ_TankComponent_generated_h

#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_TankComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHideTrajectory); \
	DECLARE_FUNCTION(execShowTrajectory); \
	DECLARE_FUNCTION(execFireMortar);


#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_TankComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTankComponent(); \
	friend struct Z_Construct_UClass_UTankComponent_Statics; \
public: \
	DECLARE_CLASS(UTankComponent, UCharacterComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GGJ"), NO_API) \
	DECLARE_SERIALIZER(UTankComponent)


#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_TankComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTankComponent(UTankComponent&&); \
	UTankComponent(const UTankComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTankComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTankComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTankComponent) \
	NO_API virtual ~UTankComponent();


#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_TankComponent_h_12_PROLOG
#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_TankComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_TankComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_TankComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_TankComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGJ_API UClass* StaticClass<class UTankComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_TankComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
