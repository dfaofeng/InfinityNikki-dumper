﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_AbilityHit_Player

#include "Basic.hpp"

#include "EHitPlayerState_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "ECombatHitDir_structs.hpp"


namespace SDK::Params
{

// Function GA_AbilityHit_Player.GA_AbilityHit_Player_C.BP_ShouldFly
// 0x0010 (0x0010 - 0x0000)
struct GA_AbilityHit_Player_C_BP_ShouldFly final
{
public:
	EHitPlayerState                               HitStateType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           HitBackTag;                                        // 0x0004(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	ECombatHitDir                                 Direction;                                         // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShouldFly;                                        // 0x000D(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_AbilityHit_Player_C_BP_ShouldFly) == 0x000004, "Wrong alignment on GA_AbilityHit_Player_C_BP_ShouldFly");
static_assert(sizeof(GA_AbilityHit_Player_C_BP_ShouldFly) == 0x000010, "Wrong size on GA_AbilityHit_Player_C_BP_ShouldFly");
static_assert(offsetof(GA_AbilityHit_Player_C_BP_ShouldFly, HitStateType) == 0x000000, "Member 'GA_AbilityHit_Player_C_BP_ShouldFly::HitStateType' has a wrong offset!");
static_assert(offsetof(GA_AbilityHit_Player_C_BP_ShouldFly, HitBackTag) == 0x000004, "Member 'GA_AbilityHit_Player_C_BP_ShouldFly::HitBackTag' has a wrong offset!");
static_assert(offsetof(GA_AbilityHit_Player_C_BP_ShouldFly, Direction) == 0x00000C, "Member 'GA_AbilityHit_Player_C_BP_ShouldFly::Direction' has a wrong offset!");
static_assert(offsetof(GA_AbilityHit_Player_C_BP_ShouldFly, bShouldFly) == 0x00000D, "Member 'GA_AbilityHit_Player_C_BP_ShouldFly::bShouldFly' has a wrong offset!");
static_assert(offsetof(GA_AbilityHit_Player_C_BP_ShouldFly, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x00000E, "Member 'GA_AbilityHit_Player_C_BP_ShouldFly::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");

// Function GA_AbilityHit_Player.GA_AbilityHit_Player_C.ExecuteUbergraph_GA_AbilityHit_Player
// 0x0004 (0x0004 - 0x0000)
struct GA_AbilityHit_Player_C_ExecuteUbergraph_GA_AbilityHit_Player final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_AbilityHit_Player_C_ExecuteUbergraph_GA_AbilityHit_Player) == 0x000004, "Wrong alignment on GA_AbilityHit_Player_C_ExecuteUbergraph_GA_AbilityHit_Player");
static_assert(sizeof(GA_AbilityHit_Player_C_ExecuteUbergraph_GA_AbilityHit_Player) == 0x000004, "Wrong size on GA_AbilityHit_Player_C_ExecuteUbergraph_GA_AbilityHit_Player");
static_assert(offsetof(GA_AbilityHit_Player_C_ExecuteUbergraph_GA_AbilityHit_Player, EntryPoint) == 0x000000, "Member 'GA_AbilityHit_Player_C_ExecuteUbergraph_GA_AbilityHit_Player::EntryPoint' has a wrong offset!");

// Function GA_AbilityHit_Player.GA_AbilityHit_Player_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct GA_AbilityHit_Player_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(GA_AbilityHit_Player_C_GetModuleName) == 0x000008, "Wrong alignment on GA_AbilityHit_Player_C_GetModuleName");
static_assert(sizeof(GA_AbilityHit_Player_C_GetModuleName) == 0x000010, "Wrong size on GA_AbilityHit_Player_C_GetModuleName");
static_assert(offsetof(GA_AbilityHit_Player_C_GetModuleName, ReturnValue) == 0x000000, "Member 'GA_AbilityHit_Player_C_GetModuleName::ReturnValue' has a wrong offset!");

}

