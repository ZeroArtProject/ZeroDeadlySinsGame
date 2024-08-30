

#pragma once

#include "NativeGameplayTags.h"
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

namespace WarriorGameplayTags
{
	/** Input Tags **/
	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look);
	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_EquipAxe);
	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_UnequipAxe);

	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_LightAttack_Axe);
	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_HeavyAttack_Axe);


	/** Player Tags **/
	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Equip_Axe);
	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Equip_Shield);
	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Unequip_Axe);
	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Unequip_Shield);

	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Light_Axe);
	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack_Heavy_Axe);



	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Weapon_Axe);
	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Weapon_Shield);

	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Equip_Axe);
	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Equip_Shield);
	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Unequip_Axe);
	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Unequip_Shield);
	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_ComboAttack_Next);
	


	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_JumpToFinisher);

	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_SetByCaller_AttackType_Light);
	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_SetByCaller_AttackType_Heavy);

	/** Enemy Tags **/

	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Enemy_Weapon);

	/** Shared Tags **/
	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Event_MeleeHit);

	GAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_SetByCaller_BaseDamage);
}