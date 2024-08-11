// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimInstances/CharacterAnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME_CharacterAnimInstance_generated_h
#error "CharacterAnimInstance.generated.h already included, missing '#pragma once' in CharacterAnimInstance.h"
#endif
#define GAME_CharacterAnimInstance_generated_h

#define FID_ZeroDeadlySins_Game_Source_Game_Public_AnimInstances_CharacterAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterAnimInstance(); \
	friend struct Z_Construct_UClass_UCharacterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UCharacterAnimInstance, UBaseAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Game"), NO_API) \
	DECLARE_SERIALIZER(UCharacterAnimInstance)


#define FID_ZeroDeadlySins_Game_Source_Game_Public_AnimInstances_CharacterAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCharacterAnimInstance(UCharacterAnimInstance&&); \
	UCharacterAnimInstance(const UCharacterAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterAnimInstance) \
	NO_API virtual ~UCharacterAnimInstance();


#define FID_ZeroDeadlySins_Game_Source_Game_Public_AnimInstances_CharacterAnimInstance_h_14_PROLOG
#define FID_ZeroDeadlySins_Game_Source_Game_Public_AnimInstances_CharacterAnimInstance_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ZeroDeadlySins_Game_Source_Game_Public_AnimInstances_CharacterAnimInstance_h_17_INCLASS_NO_PURE_DECLS \
	FID_ZeroDeadlySins_Game_Source_Game_Public_AnimInstances_CharacterAnimInstance_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME_API UClass* StaticClass<class UCharacterAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ZeroDeadlySins_Game_Source_Game_Public_AnimInstances_CharacterAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
