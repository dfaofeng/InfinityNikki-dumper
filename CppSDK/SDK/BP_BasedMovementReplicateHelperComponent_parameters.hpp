﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BasedMovementReplicateHelperComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_BasedMovementReplicateHelperComponent.BP_BasedMovementReplicateHelperComponent_C.BP_SetForceReplicateBasedMovementEnabled
// 0x0018 (0x0018 - 0x0000)
struct BP_BasedMovementReplicateHelperComponent_C_BP_SetForceReplicateBasedMovementEnabled final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DisableReason;                                     // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BasedMovementReplicateHelperComponent_C_BP_SetForceReplicateBasedMovementEnabled) == 0x000008, "Wrong alignment on BP_BasedMovementReplicateHelperComponent_C_BP_SetForceReplicateBasedMovementEnabled");
static_assert(sizeof(BP_BasedMovementReplicateHelperComponent_C_BP_SetForceReplicateBasedMovementEnabled) == 0x000018, "Wrong size on BP_BasedMovementReplicateHelperComponent_C_BP_SetForceReplicateBasedMovementEnabled");
static_assert(offsetof(BP_BasedMovementReplicateHelperComponent_C_BP_SetForceReplicateBasedMovementEnabled, bEnabled) == 0x000000, "Member 'BP_BasedMovementReplicateHelperComponent_C_BP_SetForceReplicateBasedMovementEnabled::bEnabled' has a wrong offset!");
static_assert(offsetof(BP_BasedMovementReplicateHelperComponent_C_BP_SetForceReplicateBasedMovementEnabled, DisableReason) == 0x000008, "Member 'BP_BasedMovementReplicateHelperComponent_C_BP_SetForceReplicateBasedMovementEnabled::DisableReason' has a wrong offset!");

// Function BP_BasedMovementReplicateHelperComponent.BP_BasedMovementReplicateHelperComponent_C.ExecuteUbergraph_BP_BasedMovementReplicateHelperComponent
// 0x000C (0x000C - 0x0000)
struct BP_BasedMovementReplicateHelperComponent_C_ExecuteUbergraph_BP_BasedMovementReplicateHelperComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BasedMovementReplicateHelperComponent_C_ExecuteUbergraph_BP_BasedMovementReplicateHelperComponent) == 0x000004, "Wrong alignment on BP_BasedMovementReplicateHelperComponent_C_ExecuteUbergraph_BP_BasedMovementReplicateHelperComponent");
static_assert(sizeof(BP_BasedMovementReplicateHelperComponent_C_ExecuteUbergraph_BP_BasedMovementReplicateHelperComponent) == 0x00000C, "Wrong size on BP_BasedMovementReplicateHelperComponent_C_ExecuteUbergraph_BP_BasedMovementReplicateHelperComponent");
static_assert(offsetof(BP_BasedMovementReplicateHelperComponent_C_ExecuteUbergraph_BP_BasedMovementReplicateHelperComponent, EntryPoint) == 0x000000, "Member 'BP_BasedMovementReplicateHelperComponent_C_ExecuteUbergraph_BP_BasedMovementReplicateHelperComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BasedMovementReplicateHelperComponent_C_ExecuteUbergraph_BP_BasedMovementReplicateHelperComponent, K2Node_Event_EndPlayReason) == 0x000004, "Member 'BP_BasedMovementReplicateHelperComponent_C_ExecuteUbergraph_BP_BasedMovementReplicateHelperComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_BasedMovementReplicateHelperComponent_C_ExecuteUbergraph_BP_BasedMovementReplicateHelperComponent, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'BP_BasedMovementReplicateHelperComponent_C_ExecuteUbergraph_BP_BasedMovementReplicateHelperComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_BasedMovementReplicateHelperComponent.BP_BasedMovementReplicateHelperComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_BasedMovementReplicateHelperComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BasedMovementReplicateHelperComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_BasedMovementReplicateHelperComponent_C_ReceiveEndPlay");
static_assert(sizeof(BP_BasedMovementReplicateHelperComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_BasedMovementReplicateHelperComponent_C_ReceiveEndPlay");
static_assert(offsetof(BP_BasedMovementReplicateHelperComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_BasedMovementReplicateHelperComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_BasedMovementReplicateHelperComponent.BP_BasedMovementReplicateHelperComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_BasedMovementReplicateHelperComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BasedMovementReplicateHelperComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_BasedMovementReplicateHelperComponent_C_ReceiveTick");
static_assert(sizeof(BP_BasedMovementReplicateHelperComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_BasedMovementReplicateHelperComponent_C_ReceiveTick");
static_assert(offsetof(BP_BasedMovementReplicateHelperComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_BasedMovementReplicateHelperComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_BasedMovementReplicateHelperComponent.BP_BasedMovementReplicateHelperComponent_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct BP_BasedMovementReplicateHelperComponent_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_BasedMovementReplicateHelperComponent_C_GetModuleName) == 0x000008, "Wrong alignment on BP_BasedMovementReplicateHelperComponent_C_GetModuleName");
static_assert(sizeof(BP_BasedMovementReplicateHelperComponent_C_GetModuleName) == 0x000010, "Wrong size on BP_BasedMovementReplicateHelperComponent_C_GetModuleName");
static_assert(offsetof(BP_BasedMovementReplicateHelperComponent_C_GetModuleName, ReturnValue) == 0x000000, "Member 'BP_BasedMovementReplicateHelperComponent_C_GetModuleName::ReturnValue' has a wrong offset!");

}

