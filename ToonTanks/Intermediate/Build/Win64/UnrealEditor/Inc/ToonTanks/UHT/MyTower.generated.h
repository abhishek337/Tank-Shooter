// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyTower.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_MyTower_generated_h
#error "MyTower.generated.h already included, missing '#pragma once' in MyTower.h"
#endif
#define TOONTANKS_MyTower_generated_h

#define FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTower_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTower(); \
	friend struct Z_Construct_UClass_AMyTower_Statics; \
public: \
	DECLARE_CLASS(AMyTower, AMyPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(AMyTower)


#define FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTower_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTower(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyTower(AMyTower&&); \
	AMyTower(const AMyTower&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTower); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTower); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTower) \
	NO_API virtual ~AMyTower();


#define FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTower_h_12_PROLOG
#define FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTower_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTower_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTower_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class AMyTower>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTower_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
