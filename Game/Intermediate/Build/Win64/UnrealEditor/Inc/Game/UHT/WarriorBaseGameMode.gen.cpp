// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/Public/GameModes/WarriorBaseGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorBaseGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GAME_API UClass* Z_Construct_UClass_AWarriorBaseGameMode();
GAME_API UClass* Z_Construct_UClass_AWarriorBaseGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References

// Begin Class AWarriorBaseGameMode
void AWarriorBaseGameMode::StaticRegisterNativesAWarriorBaseGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorBaseGameMode);
UClass* Z_Construct_UClass_AWarriorBaseGameMode_NoRegister()
{
	return AWarriorBaseGameMode::StaticClass();
}
struct Z_Construct_UClass_AWarriorBaseGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/WarriorBaseGameMode.h" },
		{ "ModuleRelativePath", "Public/GameModes/WarriorBaseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorBaseGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWarriorBaseGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorBaseGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorBaseGameMode_Statics::ClassParams = {
	&AWarriorBaseGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorBaseGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorBaseGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorBaseGameMode()
{
	if (!Z_Registration_Info_UClass_AWarriorBaseGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorBaseGameMode.OuterSingleton, Z_Construct_UClass_AWarriorBaseGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorBaseGameMode.OuterSingleton;
}
template<> GAME_API UClass* StaticClass<AWarriorBaseGameMode>()
{
	return AWarriorBaseGameMode::StaticClass();
}
AWarriorBaseGameMode::AWarriorBaseGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorBaseGameMode);
AWarriorBaseGameMode::~AWarriorBaseGameMode() {}
// End Class AWarriorBaseGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_ZeroDeadlySins_Game_Source_Game_Public_GameModes_WarriorBaseGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorBaseGameMode, AWarriorBaseGameMode::StaticClass, TEXT("AWarriorBaseGameMode"), &Z_Registration_Info_UClass_AWarriorBaseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorBaseGameMode), 129881553U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ZeroDeadlySins_Game_Source_Game_Public_GameModes_WarriorBaseGameMode_h_2110136058(TEXT("/Script/Game"),
	Z_CompiledInDeferFile_FID_ZeroDeadlySins_Game_Source_Game_Public_GameModes_WarriorBaseGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ZeroDeadlySins_Game_Source_Game_Public_GameModes_WarriorBaseGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
