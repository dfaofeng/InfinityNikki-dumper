﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BulletHitDamageModifier

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_BulletHitDamageModifier.BP_BulletHitDamageModifier_C.CanShapeTrace
// 0x0001 (0x0001 - 0x0000)
struct BP_BulletHitDamageModifier_C_CanShapeTrace final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BulletHitDamageModifier_C_CanShapeTrace) == 0x000001, "Wrong alignment on BP_BulletHitDamageModifier_C_CanShapeTrace");
static_assert(sizeof(BP_BulletHitDamageModifier_C_CanShapeTrace) == 0x000001, "Wrong size on BP_BulletHitDamageModifier_C_CanShapeTrace");
static_assert(offsetof(BP_BulletHitDamageModifier_C_CanShapeTrace, ReturnValue) == 0x000000, "Member 'BP_BulletHitDamageModifier_C_CanShapeTrace::ReturnValue' has a wrong offset!");

// Function BP_BulletHitDamageModifier.BP_BulletHitDamageModifier_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct BP_BulletHitDamageModifier_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_BulletHitDamageModifier_C_GetModuleName) == 0x000008, "Wrong alignment on BP_BulletHitDamageModifier_C_GetModuleName");
static_assert(sizeof(BP_BulletHitDamageModifier_C_GetModuleName) == 0x000010, "Wrong size on BP_BulletHitDamageModifier_C_GetModuleName");
static_assert(offsetof(BP_BulletHitDamageModifier_C_GetModuleName, ReturnValue) == 0x000000, "Member 'BP_BulletHitDamageModifier_C_GetModuleName::ReturnValue' has a wrong offset!");

// Function BP_BulletHitDamageModifier.BP_BulletHitDamageModifier_C.K2_ProcessHitResults
// 0x0040 (0x0040 - 0x0000)
struct BP_BulletHitDamageModifier_C_K2_ProcessHitResults final
{
public:
	struct FVector                                StartLocation;                                     // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndLocation;                                       // 0x0018(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                     HitResults;                                        // 0x0030(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(BP_BulletHitDamageModifier_C_K2_ProcessHitResults) == 0x000008, "Wrong alignment on BP_BulletHitDamageModifier_C_K2_ProcessHitResults");
static_assert(sizeof(BP_BulletHitDamageModifier_C_K2_ProcessHitResults) == 0x000040, "Wrong size on BP_BulletHitDamageModifier_C_K2_ProcessHitResults");
static_assert(offsetof(BP_BulletHitDamageModifier_C_K2_ProcessHitResults, StartLocation) == 0x000000, "Member 'BP_BulletHitDamageModifier_C_K2_ProcessHitResults::StartLocation' has a wrong offset!");
static_assert(offsetof(BP_BulletHitDamageModifier_C_K2_ProcessHitResults, EndLocation) == 0x000018, "Member 'BP_BulletHitDamageModifier_C_K2_ProcessHitResults::EndLocation' has a wrong offset!");
static_assert(offsetof(BP_BulletHitDamageModifier_C_K2_ProcessHitResults, HitResults) == 0x000030, "Member 'BP_BulletHitDamageModifier_C_K2_ProcessHitResults::HitResults' has a wrong offset!");

}

