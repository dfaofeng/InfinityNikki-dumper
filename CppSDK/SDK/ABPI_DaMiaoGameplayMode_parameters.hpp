﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABPI_DaMiaoGameplayMode

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ABPI_DaMiaoGameplayMode.ABPI_DaMiaoGameplayMode_C.AnimLayer_BehaviorExtraMode
// 0x0020 (0x0020 - 0x0000)
struct ABPI_DaMiaoGameplayMode_C_AnimLayer_BehaviorExtraMode final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              AnimLayer_BehaviorExtraMode_0;                     // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ABPI_DaMiaoGameplayMode_C_AnimLayer_BehaviorExtraMode) == 0x000008, "Wrong alignment on ABPI_DaMiaoGameplayMode_C_AnimLayer_BehaviorExtraMode");
static_assert(sizeof(ABPI_DaMiaoGameplayMode_C_AnimLayer_BehaviorExtraMode) == 0x000020, "Wrong size on ABPI_DaMiaoGameplayMode_C_AnimLayer_BehaviorExtraMode");
static_assert(offsetof(ABPI_DaMiaoGameplayMode_C_AnimLayer_BehaviorExtraMode, InPose) == 0x000000, "Member 'ABPI_DaMiaoGameplayMode_C_AnimLayer_BehaviorExtraMode::InPose' has a wrong offset!");
static_assert(offsetof(ABPI_DaMiaoGameplayMode_C_AnimLayer_BehaviorExtraMode, AnimLayer_BehaviorExtraMode_0) == 0x000010, "Member 'ABPI_DaMiaoGameplayMode_C_AnimLayer_BehaviorExtraMode::AnimLayer_BehaviorExtraMode_0' has a wrong offset!");

}

