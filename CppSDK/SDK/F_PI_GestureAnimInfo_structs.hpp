﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_PI_GestureAnimInfo

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "F_PerformanceAnimInfo_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_PI_GestureAnimInfo.F_PI_GestureAnimInfo
// 0x0038 (0x0038 - 0x0000)
struct FF_PI_GestureAnimInfo final
{
public:
	struct FGameplayTag                           GestureTag_2_28DE82D44CDE0B019AF2D79B4876B9CB;     // 0x0000(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimSequence>           GestureAnim_8_BD6913584457351C0DDC33851FF66D9C;    // 0x0008(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          bFullBodyGesture_7_CC9D08224309C3A7C8560489DCF47BB8; // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_PerformanceAnimInfo                 PoseInfo_15_DC34A0C7416B5D710F3A79871445B020;      // 0x0031(0x0002)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_PI_GestureAnimInfo) == 0x000008, "Wrong alignment on FF_PI_GestureAnimInfo");
static_assert(sizeof(FF_PI_GestureAnimInfo) == 0x000038, "Wrong size on FF_PI_GestureAnimInfo");
static_assert(offsetof(FF_PI_GestureAnimInfo, GestureTag_2_28DE82D44CDE0B019AF2D79B4876B9CB) == 0x000000, "Member 'FF_PI_GestureAnimInfo::GestureTag_2_28DE82D44CDE0B019AF2D79B4876B9CB' has a wrong offset!");
static_assert(offsetof(FF_PI_GestureAnimInfo, GestureAnim_8_BD6913584457351C0DDC33851FF66D9C) == 0x000008, "Member 'FF_PI_GestureAnimInfo::GestureAnim_8_BD6913584457351C0DDC33851FF66D9C' has a wrong offset!");
static_assert(offsetof(FF_PI_GestureAnimInfo, bFullBodyGesture_7_CC9D08224309C3A7C8560489DCF47BB8) == 0x000030, "Member 'FF_PI_GestureAnimInfo::bFullBodyGesture_7_CC9D08224309C3A7C8560489DCF47BB8' has a wrong offset!");
static_assert(offsetof(FF_PI_GestureAnimInfo, PoseInfo_15_DC34A0C7416B5D710F3A79871445B020) == 0x000031, "Member 'FF_PI_GestureAnimInfo::PoseInfo_15_DC34A0C7416B5D710F3A79871445B020' has a wrong offset!");

}

