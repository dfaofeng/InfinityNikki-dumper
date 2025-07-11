﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_PI_TransitionAnimInfo

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "F_PerformanceAnimInfo_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_PI_TransitionAnimInfo.F_PI_TransitionAnimInfo
// 0x0038 (0x0038 - 0x0000)
struct FF_PI_TransitionAnimInfo final
{
public:
	struct FGameplayTag                           TransitionTag_2_380FB0AE4002AA48D7923BB26966B012;  // 0x0000(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimSequence>           TransitionAnim_6_0D1FA9AF4C8F150E1E2AE194A87B5CB8; // 0x0008(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FF_PerformanceAnimInfo                 PoseInfo_12_FCDD3E1A4CD665009BD66782D28C3694;      // 0x0030(0x0002)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_PI_TransitionAnimInfo) == 0x000008, "Wrong alignment on FF_PI_TransitionAnimInfo");
static_assert(sizeof(FF_PI_TransitionAnimInfo) == 0x000038, "Wrong size on FF_PI_TransitionAnimInfo");
static_assert(offsetof(FF_PI_TransitionAnimInfo, TransitionTag_2_380FB0AE4002AA48D7923BB26966B012) == 0x000000, "Member 'FF_PI_TransitionAnimInfo::TransitionTag_2_380FB0AE4002AA48D7923BB26966B012' has a wrong offset!");
static_assert(offsetof(FF_PI_TransitionAnimInfo, TransitionAnim_6_0D1FA9AF4C8F150E1E2AE194A87B5CB8) == 0x000008, "Member 'FF_PI_TransitionAnimInfo::TransitionAnim_6_0D1FA9AF4C8F150E1E2AE194A87B5CB8' has a wrong offset!");
static_assert(offsetof(FF_PI_TransitionAnimInfo, PoseInfo_12_FCDD3E1A4CD665009BD66782D28C3694) == 0x000030, "Member 'FF_PI_TransitionAnimInfo::PoseInfo_12_FCDD3E1A4CD665009BD66782D28C3694' has a wrong offset!");

}

