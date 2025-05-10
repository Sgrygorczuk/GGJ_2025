// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGJ_Projectile_generated_h
#error "Projectile.generated.h already included, missing '#pragma once' in Projectile.h"
#endif
#define GGJ_Projectile_generated_h

#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_Projectile_h_9_DELEGATE \
GGJ_API void FOnHit_DelegateWrapper(const FMulticastScriptDelegate& OnHit);


#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_Projectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile(); \
	friend struct Z_Construct_UClass_AProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GGJ"), NO_API) \
	DECLARE_SERIALIZER(AProjectile)


#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_Projectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectile(AProjectile&&); \
	AProjectile(const AProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile) \
	NO_API virtual ~AProjectile();


#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_Projectile_h_11_PROLOG
#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_Projectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_Projectile_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_Projectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGJ_API UClass* StaticClass<class AProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
