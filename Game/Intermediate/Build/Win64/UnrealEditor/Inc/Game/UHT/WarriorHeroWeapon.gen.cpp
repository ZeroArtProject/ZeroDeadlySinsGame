// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/Public/Items/Weapons/WarriorHeroWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorHeroWeapon() {}

// Begin Cross Module References
GAME_API UClass* Z_Construct_UClass_AWarriorHeroWeapon();
GAME_API UClass* Z_Construct_UClass_AWarriorHeroWeapon_NoRegister();
GAME_API UClass* Z_Construct_UClass_AWarriorWeaponBase();
UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References

// Begin Class AWarriorHeroWeapon
void AWarriorHeroWeapon::StaticRegisterNativesAWarriorHeroWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorHeroWeapon);
UClass* Z_Construct_UClass_AWarriorHeroWeapon_NoRegister()
{
	return AWarriorHeroWeapon::StaticClass();
}
struct Z_Construct_UClass_AWarriorHeroWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/Weapons/WarriorHeroWeapon.h" },
		{ "ModuleRelativePath", "Public/Items/Weapons/WarriorHeroWeapon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorHeroWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWarriorHeroWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWarriorWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorHeroWeapon_Statics::ClassParams = {
	&AWarriorHeroWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeroWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorHeroWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorHeroWeapon()
{
	if (!Z_Registration_Info_UClass_AWarriorHeroWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorHeroWeapon.OuterSingleton, Z_Construct_UClass_AWarriorHeroWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorHeroWeapon.OuterSingleton;
}
template<> GAME_API UClass* StaticClass<AWarriorHeroWeapon>()
{
	return AWarriorHeroWeapon::StaticClass();
}
AWarriorHeroWeapon::AWarriorHeroWeapon() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorHeroWeapon);
AWarriorHeroWeapon::~AWarriorHeroWeapon() {}
// End Class AWarriorHeroWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_ZeroDeadlySins_Game_Source_Game_Public_Items_Weapons_WarriorHeroWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorHeroWeapon, AWarriorHeroWeapon::StaticClass, TEXT("AWarriorHeroWeapon"), &Z_Registration_Info_UClass_AWarriorHeroWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorHeroWeapon), 3078589581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ZeroDeadlySins_Game_Source_Game_Public_Items_Weapons_WarriorHeroWeapon_h_890569931(TEXT("/Script/Game"),
	Z_CompiledInDeferFile_FID_ZeroDeadlySins_Game_Source_Game_Public_Items_Weapons_WarriorHeroWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ZeroDeadlySins_Game_Source_Game_Public_Items_Weapons_WarriorHeroWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
