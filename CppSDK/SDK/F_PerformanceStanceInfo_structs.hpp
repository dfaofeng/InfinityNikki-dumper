﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_PerformanceStanceInfo

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "F_PerformanceAnimInfo_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_PerformanceStanceInfo.F_PerformanceStanceInfo
// 0x0058 (0x0058 - 0x0000)
struct FF_PerformanceStanceInfo final
{
public:
	TSoftObjectPtr<class UAnimSequence>           StanceAnim_2_EB468D684A59F36205F474B4308BB2CD;     // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FGameplayTag                           GroupTag_6_7626EB9241A6CFD8821720B8D20DE3F8;       // 0x0028(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                          bOnlyUseAOHead_15_1E89AA4944CCBFD03C0159AB1DE8D0F3; // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HandIKOffsetPosition_18_DD63ED8E4EEE181C7051849F3E856E93; // 0x0038(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_PerformanceAnimInfo                 PoseInfo_23_0750483943B664459E4889A5765D2E35;      // 0x0050(0x0002)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_PerformanceStanceInfo) == 0x000008, "Wrong alignment on FF_PerformanceStanceInfo");
static_assert(sizeof(FF_PerformanceStanceInfo) == 0x000058, "Wrong size on FF_PerformanceStanceInfo");
static_assert(offsetof(FF_PerformanceStanceInfo, StanceAnim_2_EB468D684A59F36205F474B4308BB2CD) == 0x000000, "Member 'FF_PerformanceStanceInfo::StanceAnim_2_EB468D684A59F36205F474B4308BB2CD' has a wrong offset!");
static_assert(offsetof(FF_PerformanceStanceInfo, GroupTag_6_7626EB9241A6CFD8821720B8D20DE3F8) == 0x000028, "Member 'FF_PerformanceStanceInfo::GroupTag_6_7626EB9241A6CFD8821720B8D20DE3F8' has a wrong offset!");
static_assert(offsetof(FF_PerformanceStanceInfo, bOnlyUseAOHead_15_1E89AA4944CCBFD03C0159AB1DE8D0F3) == 0x000030, "Member 'FF_PerformanceStanceInfo::bOnlyUseAOHead_15_1E89AA4944CCBFD03C0159AB1DE8D0F3' has a wrong offset!");
static_assert(offsetof(FF_PerformanceStanceInfo, HandIKOffsetPosition_18_DD63ED8E4EEE181C7051849F3E856E93) == 0x000038, "Member 'FF_PerformanceStanceInfo::HandIKOffsetPosition_18_DD63ED8E4EEE181C7051849F3E856E93' has a wrong offset!");
static_assert(offsetof(FF_PerformanceStanceInfo, PoseInfo_23_0750483943B664459E4889A5765D2E35) == 0x000050, "Member 'FF_PerformanceStanceInfo::PoseInfo_23_0750483943B664459E4889A5765D2E35' has a wrong offset!");

}

