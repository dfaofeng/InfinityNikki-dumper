﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NikkiPlayerState_BP

#include "Basic.hpp"


namespace SDK::Params
{

// Function NikkiPlayerState_BP.NikkiPlayerState_BP_C.ExecuteUbergraph_NikkiPlayerState_BP
// 0x0018 (0x0018 - 0x0000)
struct NikkiPlayerState_BP_C_ExecuteUbergraph_NikkiPlayerState_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_X6FadingWidget_C*                  CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NikkiPlayerState_BP_C_ExecuteUbergraph_NikkiPlayerState_BP) == 0x000008, "Wrong alignment on NikkiPlayerState_BP_C_ExecuteUbergraph_NikkiPlayerState_BP");
static_assert(sizeof(NikkiPlayerState_BP_C_ExecuteUbergraph_NikkiPlayerState_BP) == 0x000018, "Wrong size on NikkiPlayerState_BP_C_ExecuteUbergraph_NikkiPlayerState_BP");
static_assert(offsetof(NikkiPlayerState_BP_C_ExecuteUbergraph_NikkiPlayerState_BP, EntryPoint) == 0x000000, "Member 'NikkiPlayerState_BP_C_ExecuteUbergraph_NikkiPlayerState_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(NikkiPlayerState_BP_C_ExecuteUbergraph_NikkiPlayerState_BP, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'NikkiPlayerState_BP_C_ExecuteUbergraph_NikkiPlayerState_BP::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(NikkiPlayerState_BP_C_ExecuteUbergraph_NikkiPlayerState_BP, CallFunc_Create_ReturnValue) == 0x000010, "Member 'NikkiPlayerState_BP_C_ExecuteUbergraph_NikkiPlayerState_BP::CallFunc_Create_ReturnValue' has a wrong offset!");

}

