// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/Public/DataAssets/StartUpData/DataAsset_StartUpDataBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_StartUpDataBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAME_API UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase();
GAME_API UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References

// Begin Class UDataAsset_StartUpDataBase
void UDataAsset_StartUpDataBase::StaticRegisterNativesUDataAsset_StartUpDataBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset_StartUpDataBase);
UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase_NoRegister()
{
	return UDataAsset_StartUpDataBase::StaticClass();
}
struct Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAssets/StartUpData/DataAsset_StartUpDataBase.h" },
		{ "ModuleRelativePath", "Public/DataAssets/StartUpData/DataAsset_StartUpDataBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_StartUpDataBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::ClassParams = {
	&UDataAsset_StartUpDataBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_StartUpDataBase()
{
	if (!Z_Registration_Info_UClass_UDataAsset_StartUpDataBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_StartUpDataBase.OuterSingleton, Z_Construct_UClass_UDataAsset_StartUpDataBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_StartUpDataBase.OuterSingleton;
}
template<> GAME_API UClass* StaticClass<UDataAsset_StartUpDataBase>()
{
	return UDataAsset_StartUpDataBase::StaticClass();
}
UDataAsset_StartUpDataBase::UDataAsset_StartUpDataBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_StartUpDataBase);
UDataAsset_StartUpDataBase::~UDataAsset_StartUpDataBase() {}
// End Class UDataAsset_StartUpDataBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_ZeroDeadlySins_Game_Source_Game_Public_DataAssets_StartUpData_DataAsset_StartUpDataBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_StartUpDataBase, UDataAsset_StartUpDataBase::StaticClass, TEXT("UDataAsset_StartUpDataBase"), &Z_Registration_Info_UClass_UDataAsset_StartUpDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_StartUpDataBase), 4242833816U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ZeroDeadlySins_Game_Source_Game_Public_DataAssets_StartUpData_DataAsset_StartUpDataBase_h_2475459829(TEXT("/Script/Game"),
	Z_CompiledInDeferFile_FID_ZeroDeadlySins_Game_Source_Game_Public_DataAssets_StartUpData_DataAsset_StartUpDataBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ZeroDeadlySins_Game_Source_Game_Public_DataAssets_StartUpData_DataAsset_StartUpDataBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
