// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyTank.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_MyTank_generated_h
#error "MyTank.generated.h already included, missing '#pragma once' in MyTank.h"
#endif
#define TOONTANKS_MyTank_generated_h

#define FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTank_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleTouch);


#define FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTank_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTank(); \
	friend struct Z_Construct_UClass_AMyTank_Statics; \
public: \
	DECLARE_CLASS(AMyTank, AMyPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(AMyTank)


#define FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTank_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyTank(AMyTank&&); \
	AMyTank(const AMyTank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTank) \
	NO_API virtual ~AMyTank();


#define FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTank_h_12_PROLOG
#define FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTank_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTank_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTank_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTank_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class AMyTank>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
