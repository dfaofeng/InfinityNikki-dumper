﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_HitBackActionSet

#include "Basic.hpp"

#include "F_HitBackAMSet_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_HitBackActionSet.F_HitBackActionSet
// 0x0028 (0x0028 - 0x0000)
struct FF_HitBackActionSet final
{
public:
	struct FF_HitBackAMSet                        Front_34_E3DCA1B245512B89D07CC5964441053D;         // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FF_HitBackAMSet                        Back_35_8AB7541B4646B9C15F73D4A02A4EFC48;          // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpenRMForce_33_1A9F8CC0432C2C44510ACB9328CC5680; // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_HitBackActionSet) == 0x000008, "Wrong alignment on FF_HitBackActionSet");
static_assert(sizeof(FF_HitBackActionSet) == 0x000028, "Wrong size on FF_HitBackActionSet");
static_assert(offsetof(FF_HitBackActionSet, Front_34_E3DCA1B245512B89D07CC5964441053D) == 0x000000, "Member 'FF_HitBackActionSet::Front_34_E3DCA1B245512B89D07CC5964441053D' has a wrong offset!");
static_assert(offsetof(FF_HitBackActionSet, Back_35_8AB7541B4646B9C15F73D4A02A4EFC48) == 0x000010, "Member 'FF_HitBackActionSet::Back_35_8AB7541B4646B9C15F73D4A02A4EFC48' has a wrong offset!");
static_assert(offsetof(FF_HitBackActionSet, IsOpenRMForce_33_1A9F8CC0432C2C44510ACB9328CC5680) == 0x000020, "Member 'FF_HitBackActionSet::IsOpenRMForce_33_1A9F8CC0432C2C44510ACB9328CC5680' has a wrong offset!");

}

