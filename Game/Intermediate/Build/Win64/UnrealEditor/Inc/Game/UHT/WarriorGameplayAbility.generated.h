// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_WarriorGameplayAbility_generated_h
#error "WarriorGameplayAbility.generated.h already included, missing '#pragma once' in WarriorGameplayAbility.h"
#endif
#define GAME_WarriorGameplayAbility_generated_h

#define FID_ZeroDeadlySins_Game_Source_Game_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorGameplayAbility(); \
	friend struct Z_Construct_UClass_UWarriorGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UWarriorGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(UWarriorGameplayAbility)


#define FID_ZeroDeadlySins_Game_Source_Game_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWarriorGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWarriorGameplayAbility(UWarriorGameplayAbility&&); \
	UWarriorGameplayAbility(const UWarriorGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorGameplayAbility) \
	NO_API virtual ~UWarriorGameplayAbility();


#define FID_ZeroDeadlySins_Game_Source_Game_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_19_PROLOG
#define FID_ZeroDeadlySins_Game_Source_Game_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ZeroDeadlySins_Game_Source_Game_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_22_INCLASS_NO_PURE_DECLS \
	FID_ZeroDeadlySins_Game_Source_Game_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class UWarriorGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ZeroDeadlySins_Game_Source_Game_Public_AbilitySystem_Abilities_WarriorGameplayAbility_h


#define FOREACH_ENUM_EWARRIORABILITYACTIVATIONPOLICY(op) \
	op(EWarriorAbilityActivationPolicy::OnTriggered) \
	op(EWarriorAbilityActivationPolicy::OnGiven) 

enum class EWarriorAbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<EWarriorAbilityActivationPolicy> { enum { Value = true }; };
template<> GAME_API UEnum* StaticEnum<EWarriorAbilityActivationPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
