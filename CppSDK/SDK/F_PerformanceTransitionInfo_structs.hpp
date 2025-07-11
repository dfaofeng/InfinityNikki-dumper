﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_PerformanceTransitionInfo

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct F_PerformanceTransitionInfo.F_PerformanceTransitionInfo
// 0x0030 (0x0030 - 0x0000)
struct FF_PerformanceTransitionInfo final
{
public:
	TSoftObjectPtr<class UAnimSequenceBase>       Anim_7_195DE5114CE30BE26AD1D2A5F458A2D7;           // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          bHiddenWeapon_6_3E1513FC4C07746385FD72A300DDEEED;  // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_PerformanceTransitionInfo) == 0x000008, "Wrong alignment on FF_PerformanceTransitionInfo");
static_assert(sizeof(FF_PerformanceTransitionInfo) == 0x000030, "Wrong size on FF_PerformanceTransitionInfo");
static_assert(offsetof(FF_PerformanceTransitionInfo, Anim_7_195DE5114CE30BE26AD1D2A5F458A2D7) == 0x000000, "Member 'FF_PerformanceTransitionInfo::Anim_7_195DE5114CE30BE26AD1D2A5F458A2D7' has a wrong offset!");
static_assert(offsetof(FF_PerformanceTransitionInfo, bHiddenWeapon_6_3E1513FC4C07746385FD72A300DDEEED) == 0x000028, "Member 'FF_PerformanceTransitionInfo::bHiddenWeapon_6_3E1513FC4C07746385FD72A300DDEEED' has a wrong offset!");

}

