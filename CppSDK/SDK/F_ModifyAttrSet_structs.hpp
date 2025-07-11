﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_ModifyAttrSet

#include "Basic.hpp"

#include "EAttributeType_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_ModifyAttrSet.F_ModifyAttrSet
// 0x0008 (0x0008 - 0x0000)
struct FF_ModifyAttrSet final
{
public:
	EAttributeType                                AttrType_10_205BB95C47671727B8866998D9859D1E;      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ChangedNumber_9_EE6421CF4B79D2585412689F2F765324;  // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_ModifyAttrSet) == 0x000004, "Wrong alignment on FF_ModifyAttrSet");
static_assert(sizeof(FF_ModifyAttrSet) == 0x000008, "Wrong size on FF_ModifyAttrSet");
static_assert(offsetof(FF_ModifyAttrSet, AttrType_10_205BB95C47671727B8866998D9859D1E) == 0x000000, "Member 'FF_ModifyAttrSet::AttrType_10_205BB95C47671727B8866998D9859D1E' has a wrong offset!");
static_assert(offsetof(FF_ModifyAttrSet, ChangedNumber_9_EE6421CF4B79D2585412689F2F765324) == 0x000004, "Member 'FF_ModifyAttrSet::ChangedNumber_9_EE6421CF4B79D2585412689F2F765324' has a wrong offset!");

}

