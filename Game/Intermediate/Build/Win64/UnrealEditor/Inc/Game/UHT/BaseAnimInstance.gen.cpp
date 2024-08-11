// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/Public/AnimInstances/BaseAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
GAME_API UClass* Z_Construct_UClass_UBaseAnimInstance();
GAME_API UClass* Z_Construct_UClass_UBaseAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game();
// End Cross Module References

// Begin Class UBaseAnimInstance
void UBaseAnimInstance::StaticRegisterNativesUBaseAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseAnimInstance);
UClass* Z_Construct_UClass_UBaseAnimInstance_NoRegister()
{
	return UBaseAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UBaseAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimInstances/BaseAnimInstance.h" },
		{ "ModuleRelativePath", "Public/AnimInstances/BaseAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Game,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAnimInstance_Statics::ClassParams = {
	&UBaseAnimInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseAnimInstance()
{
	if (!Z_Registration_Info_UClass_UBaseAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAnimInstance.OuterSingleton, Z_Construct_UClass_UBaseAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAnimInstance.OuterSingleton;
}
template<> GAME_API UClass* StaticClass<UBaseAnimInstance>()
{
	return UBaseAnimInstance::StaticClass();
}
UBaseAnimInstance::UBaseAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAnimInstance);
UBaseAnimInstance::~UBaseAnimInstance() {}
// End Class UBaseAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_ZeroDeadlySins_Game_Source_Game_Public_AnimInstances_BaseAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAnimInstance, UBaseAnimInstance::StaticClass, TEXT("UBaseAnimInstance"), &Z_Registration_Info_UClass_UBaseAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAnimInstance), 4281995011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ZeroDeadlySins_Game_Source_Game_Public_AnimInstances_BaseAnimInstance_h_3757506553(TEXT("/Script/Game"),
	Z_CompiledInDeferFile_FID_ZeroDeadlySins_Game_Source_Game_Public_AnimInstances_BaseAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ZeroDeadlySins_Game_Source_Game_Public_AnimInstances_BaseAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
