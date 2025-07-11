﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractiveWhitePointWidgetComponent

#include "Basic.hpp"

#include "E_InteractiveActorType_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_InteractiveWhitePointWidgetComponent.BP_InteractiveWhitePointWidgetComponent_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_InteractiveWhitePointWidgetComponent_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteractiveWhitePointWidgetComponent_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_InteractiveWhitePointWidgetComponent_C_ReceiveTick");
static_assert(sizeof(BP_InteractiveWhitePointWidgetComponent_C_ReceiveTick) == 0x000004, "Wrong size on BP_InteractiveWhitePointWidgetComponent_C_ReceiveTick");
static_assert(offsetof(BP_InteractiveWhitePointWidgetComponent_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_InteractiveWhitePointWidgetComponent_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_InteractiveWhitePointWidgetComponent.BP_InteractiveWhitePointWidgetComponent_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct BP_InteractiveWhitePointWidgetComponent_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteractiveWhitePointWidgetComponent_C_ReceiveEndPlay) == 0x000001, "Wrong alignment on BP_InteractiveWhitePointWidgetComponent_C_ReceiveEndPlay");
static_assert(sizeof(BP_InteractiveWhitePointWidgetComponent_C_ReceiveEndPlay) == 0x000001, "Wrong size on BP_InteractiveWhitePointWidgetComponent_C_ReceiveEndPlay");
static_assert(offsetof(BP_InteractiveWhitePointWidgetComponent_C_ReceiveEndPlay, EndPlayReason) == 0x000000, "Member 'BP_InteractiveWhitePointWidgetComponent_C_ReceiveEndPlay::EndPlayReason' has a wrong offset!");

// Function BP_InteractiveWhitePointWidgetComponent.BP_InteractiveWhitePointWidgetComponent_C.ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent
// 0x0038 (0x0038 - 0x0000)
struct BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CatchingInsects_Mark_C*            K2Node_DynamicCast_AsWBP_Catching_Insects_Mark;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetWidget_ReturnValue;                    // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	E_InteractiveActorType                        K2Node_CustomEvent_Type;                           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetWidget_ReturnValue_1;                  // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent) == 0x000008, "Wrong alignment on BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent");
static_assert(sizeof(BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent) == 0x000038, "Wrong size on BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent");
static_assert(offsetof(BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent, EntryPoint) == 0x000000, "Member 'BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent, K2Node_DynamicCast_AsWBP_Catching_Insects_Mark) == 0x000008, "Member 'BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent::K2Node_DynamicCast_AsWBP_Catching_Insects_Mark' has a wrong offset!");
static_assert(offsetof(BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent, K2Node_Event_DeltaSeconds) == 0x000014, "Member 'BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent, K2Node_Event_EndPlayReason) == 0x000018, "Member 'BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent::K2Node_Event_EndPlayReason' has a wrong offset!");
static_assert(offsetof(BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent, CallFunc_GetWidget_ReturnValue) == 0x000020, "Member 'BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent::CallFunc_GetWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent, K2Node_CustomEvent_Type) == 0x000028, "Member 'BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000029, "Member 'BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent, CallFunc_GetWidget_ReturnValue_1) == 0x000030, "Member 'BP_InteractiveWhitePointWidgetComponent_C_ExecuteUbergraph_BP_InteractiveWhitePointWidgetComponent::CallFunc_GetWidget_ReturnValue_1' has a wrong offset!");

// Function BP_InteractiveWhitePointWidgetComponent.BP_InteractiveWhitePointWidgetComponent_C.BP_Init
// 0x0001 (0x0001 - 0x0000)
struct BP_InteractiveWhitePointWidgetComponent_C_BP_Init final
{
public:
	E_InteractiveActorType                        Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteractiveWhitePointWidgetComponent_C_BP_Init) == 0x000001, "Wrong alignment on BP_InteractiveWhitePointWidgetComponent_C_BP_Init");
static_assert(sizeof(BP_InteractiveWhitePointWidgetComponent_C_BP_Init) == 0x000001, "Wrong size on BP_InteractiveWhitePointWidgetComponent_C_BP_Init");
static_assert(offsetof(BP_InteractiveWhitePointWidgetComponent_C_BP_Init, Type) == 0x000000, "Member 'BP_InteractiveWhitePointWidgetComponent_C_BP_Init::Type' has a wrong offset!");

// Function BP_InteractiveWhitePointWidgetComponent.BP_InteractiveWhitePointWidgetComponent_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct BP_InteractiveWhitePointWidgetComponent_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_InteractiveWhitePointWidgetComponent_C_GetModuleName) == 0x000008, "Wrong alignment on BP_InteractiveWhitePointWidgetComponent_C_GetModuleName");
static_assert(sizeof(BP_InteractiveWhitePointWidgetComponent_C_GetModuleName) == 0x000010, "Wrong size on BP_InteractiveWhitePointWidgetComponent_C_GetModuleName");
static_assert(offsetof(BP_InteractiveWhitePointWidgetComponent_C_GetModuleName, ReturnValue) == 0x000000, "Member 'BP_InteractiveWhitePointWidgetComponent_C_GetModuleName::ReturnValue' has a wrong offset!");

}

