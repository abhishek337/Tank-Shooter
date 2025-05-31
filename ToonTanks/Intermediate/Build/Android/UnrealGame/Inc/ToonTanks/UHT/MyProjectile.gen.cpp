// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/MyProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TOONTANKS_API UClass* Z_Construct_UClass_AMyProjectile();
TOONTANKS_API UClass* Z_Construct_UClass_AMyProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References

// Begin Class AMyProjectile
void AMyProjectile::StaticRegisterNativesAMyProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyProjectile);
UClass* Z_Construct_UClass_AMyProjectile_NoRegister()
{
	return AMyProjectile::StaticClass();
}
struct Z_Construct_UClass_AMyProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyProjectile.h" },
		{ "ModuleRelativePath", "MyProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMesh_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectile_Statics::NewProp_ProjectileMesh = { "ProjectileMesh", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyProjectile, ProjectileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMesh_MetaData), NewProp_ProjectileMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectile_Statics::NewProp_ProjectileMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyProjectile_Statics::ClassParams = {
	&AMyProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyProjectile()
{
	if (!Z_Registration_Info_UClass_AMyProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyProjectile.OuterSingleton, Z_Construct_UClass_AMyProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyProjectile.OuterSingleton;
}
template<> TOONTANKS_API UClass* StaticClass<AMyProjectile>()
{
	return AMyProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectile);
AMyProjectile::~AMyProjectile() {}
// End Class AMyProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyProjectile, AMyProjectile::StaticClass, TEXT("AMyProjectile"), &Z_Registration_Info_UClass_AMyProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyProjectile), 3910609684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyProjectile_h_1639553923(TEXT("/Script/ToonTanks"),
	Z_CompiledInDeferFile_FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
