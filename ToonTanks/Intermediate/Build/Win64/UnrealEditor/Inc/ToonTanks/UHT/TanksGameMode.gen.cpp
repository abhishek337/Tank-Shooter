// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/TanksGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTanksGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TOONTANKS_API UClass* Z_Construct_UClass_ATanksGameMode();
TOONTANKS_API UClass* Z_Construct_UClass_ATanksGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References

// Begin Class ATanksGameMode Function EndGame
struct TanksGameMode_eventEndGame_Parms
{
	bool bEndGame;
};
static FName NAME_ATanksGameMode_EndGame = FName(TEXT("EndGame"));
void ATanksGameMode::EndGame(bool bEndGame)
{
	TanksGameMode_eventEndGame_Parms Parms;
	Parms.bEndGame=bEndGame ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_ATanksGameMode_EndGame),&Parms);
}
struct Z_Construct_UFunction_ATanksGameMode_EndGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TanksGameMode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEndGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATanksGameMode_EndGame_Statics::NewProp_bEndGame_SetBit(void* Obj)
{
	((TanksGameMode_eventEndGame_Parms*)Obj)->bEndGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATanksGameMode_EndGame_Statics::NewProp_bEndGame = { "bEndGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TanksGameMode_eventEndGame_Parms), &Z_Construct_UFunction_ATanksGameMode_EndGame_Statics::NewProp_bEndGame_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATanksGameMode_EndGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATanksGameMode_EndGame_Statics::NewProp_bEndGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATanksGameMode_EndGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATanksGameMode_EndGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATanksGameMode, nullptr, "EndGame", nullptr, nullptr, Z_Construct_UFunction_ATanksGameMode_EndGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATanksGameMode_EndGame_Statics::PropPointers), sizeof(TanksGameMode_eventEndGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATanksGameMode_EndGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATanksGameMode_EndGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(TanksGameMode_eventEndGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATanksGameMode_EndGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATanksGameMode_EndGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATanksGameMode Function EndGame

// Begin Class ATanksGameMode Function StartGame
static FName NAME_ATanksGameMode_StartGame = FName(TEXT("StartGame"));
void ATanksGameMode::StartGame()
{
	ProcessEvent(FindFunctionChecked(NAME_ATanksGameMode_StartGame),NULL);
}
struct Z_Construct_UFunction_ATanksGameMode_StartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TanksGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATanksGameMode_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATanksGameMode, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATanksGameMode_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATanksGameMode_StartGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATanksGameMode_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATanksGameMode_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATanksGameMode Function StartGame

// Begin Class ATanksGameMode Function WonGame
struct TanksGameMode_eventWonGame_Parms
{
	bool bWonGame;
};
static FName NAME_ATanksGameMode_WonGame = FName(TEXT("WonGame"));
void ATanksGameMode::WonGame(bool bWonGame)
{
	TanksGameMode_eventWonGame_Parms Parms;
	Parms.bWonGame=bWonGame ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_ATanksGameMode_WonGame),&Parms);
}
struct Z_Construct_UFunction_ATanksGameMode_WonGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TanksGameMode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWonGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWonGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ATanksGameMode_WonGame_Statics::NewProp_bWonGame_SetBit(void* Obj)
{
	((TanksGameMode_eventWonGame_Parms*)Obj)->bWonGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATanksGameMode_WonGame_Statics::NewProp_bWonGame = { "bWonGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TanksGameMode_eventWonGame_Parms), &Z_Construct_UFunction_ATanksGameMode_WonGame_Statics::NewProp_bWonGame_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATanksGameMode_WonGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATanksGameMode_WonGame_Statics::NewProp_bWonGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATanksGameMode_WonGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATanksGameMode_WonGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATanksGameMode, nullptr, "WonGame", nullptr, nullptr, Z_Construct_UFunction_ATanksGameMode_WonGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATanksGameMode_WonGame_Statics::PropPointers), sizeof(TanksGameMode_eventWonGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATanksGameMode_WonGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATanksGameMode_WonGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(TanksGameMode_eventWonGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATanksGameMode_WonGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATanksGameMode_WonGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ATanksGameMode Function WonGame

// Begin Class ATanksGameMode
void ATanksGameMode::StaticRegisterNativesATanksGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATanksGameMode);
UClass* Z_Construct_UClass_ATanksGameMode_NoRegister()
{
	return ATanksGameMode::StaticClass();
}
struct Z_Construct_UClass_ATanksGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TanksGameMode.h" },
		{ "ModuleRelativePath", "TanksGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATanksGameMode_EndGame, "EndGame" }, // 1127560117
		{ &Z_Construct_UFunction_ATanksGameMode_StartGame, "StartGame" }, // 2575151958
		{ &Z_Construct_UFunction_ATanksGameMode_WonGame, "WonGame" }, // 467505146
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATanksGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATanksGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATanksGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATanksGameMode_Statics::ClassParams = {
	&ATanksGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATanksGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATanksGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATanksGameMode()
{
	if (!Z_Registration_Info_UClass_ATanksGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATanksGameMode.OuterSingleton, Z_Construct_UClass_ATanksGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATanksGameMode.OuterSingleton;
}
template<> TOONTANKS_API UClass* StaticClass<ATanksGameMode>()
{
	return ATanksGameMode::StaticClass();
}
ATanksGameMode::ATanksGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATanksGameMode);
ATanksGameMode::~ATanksGameMode() {}
// End Class ATanksGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_TanksGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATanksGameMode, ATanksGameMode::StaticClass, TEXT("ATanksGameMode"), &Z_Registration_Info_UClass_ATanksGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATanksGameMode), 4175992601U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_TanksGameMode_h_2648869348(TEXT("/Script/ToonTanks"),
	Z_CompiledInDeferFile_FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_TanksGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_TanksGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
