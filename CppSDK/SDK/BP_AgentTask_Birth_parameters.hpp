﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AgentTask_Birth

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_AgentTask_Birth.BP_AgentTask_Birth_C.ExecuteUbergraph_BP_AgentTask_Birth
// 0x0030 (0x0030 - 0x0000)
struct BP_AgentTask_Birth_C_ExecuteUbergraph_BP_AgentTask_Birth final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_AgentPawn;                            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_AbortFlag;                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_AgentPawn_2;                          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_AgentPawn_1;                          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Event_DeltaSeconds;                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AgentTask_Birth_C_ExecuteUbergraph_BP_AgentTask_Birth) == 0x000008, "Wrong alignment on BP_AgentTask_Birth_C_ExecuteUbergraph_BP_AgentTask_Birth");
static_assert(sizeof(BP_AgentTask_Birth_C_ExecuteUbergraph_BP_AgentTask_Birth) == 0x000030, "Wrong size on BP_AgentTask_Birth_C_ExecuteUbergraph_BP_AgentTask_Birth");
static_assert(offsetof(BP_AgentTask_Birth_C_ExecuteUbergraph_BP_AgentTask_Birth, EntryPoint) == 0x000000, "Member 'BP_AgentTask_Birth_C_ExecuteUbergraph_BP_AgentTask_Birth::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AgentTask_Birth_C_ExecuteUbergraph_BP_AgentTask_Birth, K2Node_Event_AgentPawn) == 0x000008, "Member 'BP_AgentTask_Birth_C_ExecuteUbergraph_BP_AgentTask_Birth::K2Node_Event_AgentPawn' has a wrong offset!");
static_assert(offsetof(BP_AgentTask_Birth_C_ExecuteUbergraph_BP_AgentTask_Birth, K2Node_Event_AbortFlag) == 0x000010, "Member 'BP_AgentTask_Birth_C_ExecuteUbergraph_BP_AgentTask_Birth::K2Node_Event_AbortFlag' has a wrong offset!");
static_assert(offsetof(BP_AgentTask_Birth_C_ExecuteUbergraph_BP_AgentTask_Birth, K2Node_Event_AgentPawn_2) == 0x000018, "Member 'BP_AgentTask_Birth_C_ExecuteUbergraph_BP_AgentTask_Birth::K2Node_Event_AgentPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AgentTask_Birth_C_ExecuteUbergraph_BP_AgentTask_Birth, K2Node_Event_AgentPawn_1) == 0x000020, "Member 'BP_AgentTask_Birth_C_ExecuteUbergraph_BP_AgentTask_Birth::K2Node_Event_AgentPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AgentTask_Birth_C_ExecuteUbergraph_BP_AgentTask_Birth, K2Node_Event_DeltaSeconds) == 0x000028, "Member 'BP_AgentTask_Birth_C_ExecuteUbergraph_BP_AgentTask_Birth::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_AgentTask_Birth.BP_AgentTask_Birth_C.ReceiveAbort
// 0x0010 (0x0010 - 0x0000)
struct BP_AgentTask_Birth_C_ReceiveAbort final
{
public:
	class APawn*                                  AgentPawn;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         AbortFlag;                                         // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AgentTask_Birth_C_ReceiveAbort) == 0x000008, "Wrong alignment on BP_AgentTask_Birth_C_ReceiveAbort");
static_assert(sizeof(BP_AgentTask_Birth_C_ReceiveAbort) == 0x000010, "Wrong size on BP_AgentTask_Birth_C_ReceiveAbort");
static_assert(offsetof(BP_AgentTask_Birth_C_ReceiveAbort, AgentPawn) == 0x000000, "Member 'BP_AgentTask_Birth_C_ReceiveAbort::AgentPawn' has a wrong offset!");
static_assert(offsetof(BP_AgentTask_Birth_C_ReceiveAbort, AbortFlag) == 0x000008, "Member 'BP_AgentTask_Birth_C_ReceiveAbort::AbortFlag' has a wrong offset!");

// Function BP_AgentTask_Birth.BP_AgentTask_Birth_C.ReceiveExecute
// 0x0008 (0x0008 - 0x0000)
struct BP_AgentTask_Birth_C_ReceiveExecute final
{
public:
	class APawn*                                  AgentPawn;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AgentTask_Birth_C_ReceiveExecute) == 0x000008, "Wrong alignment on BP_AgentTask_Birth_C_ReceiveExecute");
static_assert(sizeof(BP_AgentTask_Birth_C_ReceiveExecute) == 0x000008, "Wrong size on BP_AgentTask_Birth_C_ReceiveExecute");
static_assert(offsetof(BP_AgentTask_Birth_C_ReceiveExecute, AgentPawn) == 0x000000, "Member 'BP_AgentTask_Birth_C_ReceiveExecute::AgentPawn' has a wrong offset!");

// Function BP_AgentTask_Birth.BP_AgentTask_Birth_C.ReceiveTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AgentTask_Birth_C_ReceiveTick final
{
public:
	class APawn*                                  AgentPawn;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        DeltaSeconds;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AgentTask_Birth_C_ReceiveTick) == 0x000008, "Wrong alignment on BP_AgentTask_Birth_C_ReceiveTick");
static_assert(sizeof(BP_AgentTask_Birth_C_ReceiveTick) == 0x000010, "Wrong size on BP_AgentTask_Birth_C_ReceiveTick");
static_assert(offsetof(BP_AgentTask_Birth_C_ReceiveTick, AgentPawn) == 0x000000, "Member 'BP_AgentTask_Birth_C_ReceiveTick::AgentPawn' has a wrong offset!");
static_assert(offsetof(BP_AgentTask_Birth_C_ReceiveTick, DeltaSeconds) == 0x000008, "Member 'BP_AgentTask_Birth_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_AgentTask_Birth.BP_AgentTask_Birth_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct BP_AgentTask_Birth_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_AgentTask_Birth_C_GetModuleName) == 0x000008, "Wrong alignment on BP_AgentTask_Birth_C_GetModuleName");
static_assert(sizeof(BP_AgentTask_Birth_C_GetModuleName) == 0x000010, "Wrong size on BP_AgentTask_Birth_C_GetModuleName");
static_assert(offsetof(BP_AgentTask_Birth_C_GetModuleName, ReturnValue) == 0x000000, "Member 'BP_AgentTask_Birth_C_GetModuleName::ReturnValue' has a wrong offset!");

}

