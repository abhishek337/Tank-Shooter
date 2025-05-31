// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/MyTankController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTankController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
TOONTANKS_API UClass* Z_Construct_UClass_AMyTankController();
TOONTANKS_API UClass* Z_Construct_UClass_AMyTankController_NoRegister();
UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References

// Begin Class AMyTankController
void AMyTankController::StaticRegisterNativesAMyTankController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTankController);
UClass* Z_Construct_UClass_AMyTankController_NoRegister()
{
	return AMyTankController::StaticClass();
}
struct Z_Construct_UClass_AMyTankController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MyTankController.h" },
		{ "ModuleRelativePath", "MyTankController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTankController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyTankController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTankController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTankController_Statics::ClassParams = {
	&AMyTankController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTankController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTankController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyTankController()
{
	if (!Z_Registration_Info_UClass_AMyTankController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTankController.OuterSingleton, Z_Construct_UClass_AMyTankController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyTankController.OuterSingleton;
}
template<> TOONTANKS_API UClass* StaticClass<AMyTankController>()
{
	return AMyTankController::StaticClass();
}
AMyTankController::AMyTankController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTankController);
AMyTankController::~AMyTankController() {}
// End Class AMyTankController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTankController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyTankController, AMyTankController::StaticClass, TEXT("AMyTankController"), &Z_Registration_Info_UClass_AMyTankController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTankController), 26918364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTankController_h_2109400774(TEXT("/Script/ToonTanks"),
	Z_CompiledInDeferFile_FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTankController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_ToonTanks_ToonTanks_Source_ToonTanks_MyTankController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
