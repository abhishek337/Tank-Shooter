// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/MyTower.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTower() {}

// Begin Cross Module References
TOONTANKS_API UClass* Z_Construct_UClass_AMyPawn();
TOONTANKS_API UClass* Z_Construct_UClass_AMyTower();
TOONTANKS_API UClass* Z_Construct_UClass_AMyTower_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References

// Begin Class AMyTower
void AMyTower::StaticRegisterNativesAMyTower()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTower);
UClass* Z_Construct_UClass_AMyTower_NoRegister()
{
	return AMyTower::StaticClass();
}
struct Z_Construct_UClass_AMyTower_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyTower.h" },
		{ "ModuleRelativePath", "MyTower.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRange_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MyTower.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTower>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyTower_Statics::NewProp_FireRange = { "FireRange", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTower, FireRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRange_MetaData), NewProp_FireRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyTower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTower_Statics::NewProp_FireRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTower_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyTower_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTower_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTower_Statics::ClassParams = {
	&AMyTower::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyTower_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyTower_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTower_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTower_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyTower()
{
	if (!Z_Registration_Info_UClass_AMyTower.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTower.OuterSingleton, Z_Construct_UClass_AMyTower_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyTower.OuterSingleton;
}
template<> TOONTANKS_API UClass* StaticClass<AMyTower>()
{
	return AMyTower::StaticClass();
}
AMyTower::AMyTower() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTower);
AMyTower::~AMyTower() {}
// End Class AMyTower

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTower_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyTower, AMyTower::StaticClass, TEXT("AMyTower"), &Z_Registration_Info_UClass_AMyTower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTower), 946704917U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTower_h_2082048175(TEXT("/Script/ToonTanks"),
	Z_CompiledInDeferFile_FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTower_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTower_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
