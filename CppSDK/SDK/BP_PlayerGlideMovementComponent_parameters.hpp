﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerGlideMovementComponent

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PlayerGlideMovementComponent.BP_PlayerGlideMovementComponent_C.ExecuteUbergraph_BP_PlayerGlideMovementComponent
// 0x0008 (0x0008 - 0x0000)
struct BP_PlayerGlideMovementComponent_C_ExecuteUbergraph_BP_PlayerGlideMovementComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerGlideMovementComponent_C_ExecuteUbergraph_BP_PlayerGlideMovementComponent) == 0x000004, "Wrong alignment on BP_PlayerGlideMovementComponent_C_ExecuteUbergraph_BP_PlayerGlideMovementComponent");
static_assert(sizeof(BP_PlayerGlideMovementComponent_C_ExecuteUbergraph_BP_PlayerGlideMovementComponent) == 0x000008, "Wrong size on BP_PlayerGlideMovementComponent_C_ExecuteUbergraph_BP_PlayerGlideMovementComponent");
static_assert(offsetof(BP_PlayerGlideMovementComponent_C_ExecuteUbergraph_BP_PlayerGlideMovementComponent, EntryPoint) == 0x000000, "Member 'BP_PlayerGlideMovementComponent_C_ExecuteUbergraph_BP_PlayerGlideMovementComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerGlideMovementComponent_C_ExecuteUbergraph_BP_PlayerGlideMovementComponent, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_PlayerGlideMovementComponent_C_ExecuteUbergraph_BP_PlayerGlideMovementComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_PlayerGlideMovementComponent.BP_PlayerGlideMovementComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerGlideMovementComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerGlideMovementComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_PlayerGlideMovementComponent_C_ReceiveTick");
static_assert(sizeof(BP_PlayerGlideMovementComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_PlayerGlideMovementComponent_C_ReceiveTick");
static_assert(offsetof(BP_PlayerGlideMovementComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_PlayerGlideMovementComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_PlayerGlideMovementComponent.BP_PlayerGlideMovementComponent_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct BP_PlayerGlideMovementComponent_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerGlideMovementComponent_C_GetModuleName) == 0x000008, "Wrong alignment on BP_PlayerGlideMovementComponent_C_GetModuleName");
static_assert(sizeof(BP_PlayerGlideMovementComponent_C_GetModuleName) == 0x000010, "Wrong size on BP_PlayerGlideMovementComponent_C_GetModuleName");
static_assert(offsetof(BP_PlayerGlideMovementComponent_C_GetModuleName, ReturnValue) == 0x000000, "Member 'BP_PlayerGlideMovementComponent_C_GetModuleName::ReturnValue' has a wrong offset!");

}

