﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_RecoveryMontageSet

#include "Basic.hpp"

#include "F_RecoveryMontage_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_RecoveryMontageSet.F_RecoveryMontageSet
// 0x0010 (0x0010 - 0x0000)
struct FF_RecoveryMontageSet final
{
public:
	TArray<struct FF_RecoveryMontage>             Configs_6_D63F35E541A138CDAA7866BB1983EA1A;        // 0x0000(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FF_RecoveryMontageSet) == 0x000008, "Wrong alignment on FF_RecoveryMontageSet");
static_assert(sizeof(FF_RecoveryMontageSet) == 0x000010, "Wrong size on FF_RecoveryMontageSet");
static_assert(offsetof(FF_RecoveryMontageSet, Configs_6_D63F35E541A138CDAA7866BB1983EA1A) == 0x000000, "Member 'FF_RecoveryMontageSet::Configs_6_D63F35E541A138CDAA7866BB1983EA1A' has a wrong offset!");

}

