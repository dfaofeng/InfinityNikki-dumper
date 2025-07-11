﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CursorHide_Trigger

#include "Basic.hpp"

#include "X6EnhancedInput_structs.hpp"


namespace SDK::Params
{

// Function UI_CursorHide_Trigger.UI_CursorHide_Trigger_C.UpdateState
// 0x0048 (0x0048 - 0x0000)
struct UI_CursorHide_Trigger_C_UpdateState final
{
public:
	const class UX6EnhancedPlayerInput*           PlayerInput;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FX6InputActionValue                    ModifiedValue;                                     // 0x0008(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         DeltaTime;                                         // 0x0028(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EX6TriggerState                               ReturnValue;                                       // 0x002C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;            // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_CursorHide_Trigger_C_UpdateState) == 0x000008, "Wrong alignment on UI_CursorHide_Trigger_C_UpdateState");
static_assert(sizeof(UI_CursorHide_Trigger_C_UpdateState) == 0x000048, "Wrong size on UI_CursorHide_Trigger_C_UpdateState");
static_assert(offsetof(UI_CursorHide_Trigger_C_UpdateState, PlayerInput) == 0x000000, "Member 'UI_CursorHide_Trigger_C_UpdateState::PlayerInput' has a wrong offset!");
static_assert(offsetof(UI_CursorHide_Trigger_C_UpdateState, ModifiedValue) == 0x000008, "Member 'UI_CursorHide_Trigger_C_UpdateState::ModifiedValue' has a wrong offset!");
static_assert(offsetof(UI_CursorHide_Trigger_C_UpdateState, DeltaTime) == 0x000028, "Member 'UI_CursorHide_Trigger_C_UpdateState::DeltaTime' has a wrong offset!");
static_assert(offsetof(UI_CursorHide_Trigger_C_UpdateState, ReturnValue) == 0x00002C, "Member 'UI_CursorHide_Trigger_C_UpdateState::ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CursorHide_Trigger_C_UpdateState, CallFunc_GetOuterObject_ReturnValue) == 0x000030, "Member 'UI_CursorHide_Trigger_C_UpdateState::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CursorHide_Trigger_C_UpdateState, K2Node_DynamicCast_AsPlayer_Controller) == 0x000038, "Member 'UI_CursorHide_Trigger_C_UpdateState::K2Node_DynamicCast_AsPlayer_Controller' has a wrong offset!");
static_assert(offsetof(UI_CursorHide_Trigger_C_UpdateState, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'UI_CursorHide_Trigger_C_UpdateState::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function UI_CursorHide_Trigger.UI_CursorHide_Trigger_C.GetTriggerType
// 0x0001 (0x0001 - 0x0000)
struct UI_CursorHide_Trigger_C_GetTriggerType final
{
public:
	EX6TriggerType                                ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_CursorHide_Trigger_C_GetTriggerType) == 0x000001, "Wrong alignment on UI_CursorHide_Trigger_C_GetTriggerType");
static_assert(sizeof(UI_CursorHide_Trigger_C_GetTriggerType) == 0x000001, "Wrong size on UI_CursorHide_Trigger_C_GetTriggerType");
static_assert(offsetof(UI_CursorHide_Trigger_C_GetTriggerType, ReturnValue) == 0x000000, "Member 'UI_CursorHide_Trigger_C_GetTriggerType::ReturnValue' has a wrong offset!");

}

