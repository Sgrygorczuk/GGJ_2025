// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterVehiclePawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GGJ_CharacterVehiclePawn_generated_h
#error "CharacterVehiclePawn.generated.h already included, missing '#pragma once' in CharacterVehiclePawn.h"
#endif
#define GGJ_CharacterVehiclePawn_generated_h

#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterVehiclePawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterVehiclePawn(); \
	friend struct Z_Construct_UClass_ACharacterVehiclePawn_Statics; \
public: \
	DECLARE_CLASS(ACharacterVehiclePawn, AWheeledVehiclePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GGJ"), NO_API) \
	DECLARE_SERIALIZER(ACharacterVehiclePawn)


#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterVehiclePawn_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterVehiclePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACharacterVehiclePawn(ACharacterVehiclePawn&&); \
	ACharacterVehiclePawn(const ACharacterVehiclePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterVehiclePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterVehiclePawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterVehiclePawn) \
	NO_API virtual ~ACharacterVehiclePawn();


#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterVehiclePawn_h_14_PROLOG
#define FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterVehiclePawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterVehiclePawn_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterVehiclePawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GGJ_API UClass* StaticClass<class ACharacterVehiclePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lucap_source_repos_GGJ_2025_GGJ_Source_GGJ_Public_CharacterVehiclePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
