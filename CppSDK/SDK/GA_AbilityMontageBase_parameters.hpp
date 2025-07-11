﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_AbilityMontageBase

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_AbilityMontageBase.GA_AbilityMontageBase_C.BP_IsMoving
// 0x0001 (0x0001 - 0x0000)
struct GA_AbilityMontageBase_C_BP_IsMoving final
{
public:
	bool                                          IsMoving;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_AbilityMontageBase_C_BP_IsMoving) == 0x000001, "Wrong alignment on GA_AbilityMontageBase_C_BP_IsMoving");
static_assert(sizeof(GA_AbilityMontageBase_C_BP_IsMoving) == 0x000001, "Wrong size on GA_AbilityMontageBase_C_BP_IsMoving");
static_assert(offsetof(GA_AbilityMontageBase_C_BP_IsMoving, IsMoving) == 0x000000, "Member 'GA_AbilityMontageBase_C_BP_IsMoving::IsMoving' has a wrong offset!");

// Function GA_AbilityMontageBase.GA_AbilityMontageBase_C.BP_SetEnbaleBulletFilter
// 0x0028 (0x0028 - 0x0000)
struct GA_AbilityMontageBase_C_BP_SetEnbaleBulletFilter final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue_1; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetConsoleVariableIntValue_ReturnValue;   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_Map_Find_Value;                           // 0x001C(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_AbilityMontageBase_C_BP_SetEnbaleBulletFilter) == 0x000008, "Wrong alignment on GA_AbilityMontageBase_C_BP_SetEnbaleBulletFilter");
static_assert(sizeof(GA_AbilityMontageBase_C_BP_SetEnbaleBulletFilter) == 0x000028, "Wrong size on GA_AbilityMontageBase_C_BP_SetEnbaleBulletFilter");
static_assert(offsetof(GA_AbilityMontageBase_C_BP_SetEnbaleBulletFilter, bEnable) == 0x000000, "Member 'GA_AbilityMontageBase_C_BP_SetEnbaleBulletFilter::bEnable' has a wrong offset!");
static_assert(offsetof(GA_AbilityMontageBase_C_BP_SetEnbaleBulletFilter, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000008, "Member 'GA_AbilityMontageBase_C_BP_SetEnbaleBulletFilter::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AbilityMontageBase_C_BP_SetEnbaleBulletFilter, CallFunc_GetOwningActorFromActorInfo_ReturnValue_1) == 0x000010, "Member 'GA_AbilityMontageBase_C_BP_SetEnbaleBulletFilter::CallFunc_GetOwningActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_AbilityMontageBase_C_BP_SetEnbaleBulletFilter, CallFunc_GetConsoleVariableIntValue_ReturnValue) == 0x000018, "Member 'GA_AbilityMontageBase_C_BP_SetEnbaleBulletFilter::CallFunc_GetConsoleVariableIntValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_AbilityMontageBase_C_BP_SetEnbaleBulletFilter, CallFunc_Map_Find_Value) == 0x00001C, "Member 'GA_AbilityMontageBase_C_BP_SetEnbaleBulletFilter::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(GA_AbilityMontageBase_C_BP_SetEnbaleBulletFilter, CallFunc_Map_Find_ReturnValue) == 0x000024, "Member 'GA_AbilityMontageBase_C_BP_SetEnbaleBulletFilter::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function GA_AbilityMontageBase.GA_AbilityMontageBase_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct GA_AbilityMontageBase_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(GA_AbilityMontageBase_C_GetModuleName) == 0x000008, "Wrong alignment on GA_AbilityMontageBase_C_GetModuleName");
static_assert(sizeof(GA_AbilityMontageBase_C_GetModuleName) == 0x000010, "Wrong size on GA_AbilityMontageBase_C_GetModuleName");
static_assert(offsetof(GA_AbilityMontageBase_C_GetModuleName, ReturnValue) == 0x000000, "Member 'GA_AbilityMontageBase_C_GetModuleName::ReturnValue' has a wrong offset!");

}

