﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_OutlineStyleSelector

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_OutlineStyleSelector.F_OutlineStyleSelector
// 0x0040 (0x0040 - 0x0000)
struct FF_OutlineStyleSelector final
{
public:
	struct FGameplayTagContainer                  ActivationRequiredTags_3_1777A1734B0A1D25533435B910A9BC37; // 0x0000(0x0020)(Edit, BlueprintVisible)
	struct FLinearColor                           OutlineColor_6_D208B0124179E21D9F67BF8CBFDD4217;   // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OutlineEdgeWith_PC_12_03825A4E4E519FA5EA663AB050F35747; // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OutlineEdgeWith_Mobile_14_43AF929C46F327C0EF7A15BC95D1EDFB; // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_OutlineStyleSelector) == 0x000008, "Wrong alignment on FF_OutlineStyleSelector");
static_assert(sizeof(FF_OutlineStyleSelector) == 0x000040, "Wrong size on FF_OutlineStyleSelector");
static_assert(offsetof(FF_OutlineStyleSelector, ActivationRequiredTags_3_1777A1734B0A1D25533435B910A9BC37) == 0x000000, "Member 'FF_OutlineStyleSelector::ActivationRequiredTags_3_1777A1734B0A1D25533435B910A9BC37' has a wrong offset!");
static_assert(offsetof(FF_OutlineStyleSelector, OutlineColor_6_D208B0124179E21D9F67BF8CBFDD4217) == 0x000020, "Member 'FF_OutlineStyleSelector::OutlineColor_6_D208B0124179E21D9F67BF8CBFDD4217' has a wrong offset!");
static_assert(offsetof(FF_OutlineStyleSelector, OutlineEdgeWith_PC_12_03825A4E4E519FA5EA663AB050F35747) == 0x000030, "Member 'FF_OutlineStyleSelector::OutlineEdgeWith_PC_12_03825A4E4E519FA5EA663AB050F35747' has a wrong offset!");
static_assert(offsetof(FF_OutlineStyleSelector, OutlineEdgeWith_Mobile_14_43AF929C46F327C0EF7A15BC95D1EDFB) == 0x000038, "Member 'FF_OutlineStyleSelector::OutlineEdgeWith_Mobile_14_43AF929C46F327C0EF7A15BC95D1EDFB' has a wrong offset!");

}

