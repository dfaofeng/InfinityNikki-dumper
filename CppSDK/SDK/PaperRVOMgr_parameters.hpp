﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PaperRVOMgr

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function PaperRVOMgr.RVOAgentComponent.SetAvoidanceEnabled
// 0x0001 (0x0001 - 0x0000)
struct RVOAgentComponent_SetAvoidanceEnabled final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RVOAgentComponent_SetAvoidanceEnabled) == 0x000001, "Wrong alignment on RVOAgentComponent_SetAvoidanceEnabled");
static_assert(sizeof(RVOAgentComponent_SetAvoidanceEnabled) == 0x000001, "Wrong size on RVOAgentComponent_SetAvoidanceEnabled");
static_assert(offsetof(RVOAgentComponent_SetAvoidanceEnabled, bEnable) == 0x000000, "Member 'RVOAgentComponent_SetAvoidanceEnabled::bEnable' has a wrong offset!");

// Function PaperRVOMgr.RVOAgentComponent.GetAvoidanceVelocity
// 0x0018 (0x0018 - 0x0000)
struct RVOAgentComponent_GetAvoidanceVelocity final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RVOAgentComponent_GetAvoidanceVelocity) == 0x000008, "Wrong alignment on RVOAgentComponent_GetAvoidanceVelocity");
static_assert(sizeof(RVOAgentComponent_GetAvoidanceVelocity) == 0x000018, "Wrong size on RVOAgentComponent_GetAvoidanceVelocity");
static_assert(offsetof(RVOAgentComponent_GetAvoidanceVelocity, ReturnValue) == 0x000000, "Member 'RVOAgentComponent_GetAvoidanceVelocity::ReturnValue' has a wrong offset!");

}

