// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyTankController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_MyTankController_generated_h
#error "MyTankController.generated.h already included, missing '#pragma once' in MyTankController.h"
#endif
#define TOONTANKS_MyTankController_generated_h

#define FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTankController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTankController(); \
	friend struct Z_Construct_UClass_AMyTankController_Statics; \
public: \
	DECLARE_CLASS(AMyTankController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(AMyTankController)


#define FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTankController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTankController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyTankController(AMyTankController&&); \
	AMyTankController(const AMyTankController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTankController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTankController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTankController) \
	NO_API virtual ~AMyTankController();


#define FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTankController_h_12_PROLOG
#define FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTankController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTankController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTankController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class AMyTankController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTankController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
