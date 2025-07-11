﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_FootstepSurfaceTypeSoundStruct

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_FootstepSurfaceTypeSoundStruct.F_FootstepSurfaceTypeSoundStruct
// 0x0030 (0x0030 - 0x0000)
struct FF_FootstepSurfaceTypeSoundStruct final
{
public:
	EPhysicalSurface                              SurfaceType_24_41B137E8483D9E391EDE8A963DC299A3;   // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UAkSwitchValue>          AkSwich_29_A66E8D844ACB7612DADC7C896F84836C;       // 0x0008(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FF_FootstepSurfaceTypeSoundStruct) == 0x000008, "Wrong alignment on FF_FootstepSurfaceTypeSoundStruct");
static_assert(sizeof(FF_FootstepSurfaceTypeSoundStruct) == 0x000030, "Wrong size on FF_FootstepSurfaceTypeSoundStruct");
static_assert(offsetof(FF_FootstepSurfaceTypeSoundStruct, SurfaceType_24_41B137E8483D9E391EDE8A963DC299A3) == 0x000000, "Member 'FF_FootstepSurfaceTypeSoundStruct::SurfaceType_24_41B137E8483D9E391EDE8A963DC299A3' has a wrong offset!");
static_assert(offsetof(FF_FootstepSurfaceTypeSoundStruct, AkSwich_29_A66E8D844ACB7612DADC7C896F84836C) == 0x000008, "Member 'FF_FootstepSurfaceTypeSoundStruct::AkSwich_29_A66E8D844ACB7612DADC7C896F84836C' has a wrong offset!");

}

