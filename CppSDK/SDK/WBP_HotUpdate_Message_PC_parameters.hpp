﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HotUpdate_Message_PC

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_HotUpdate_Message_PC.WBP_HotUpdate_Message_PC_C.ExecuteUbergraph_WBP_HotUpdate_Message_PC
// 0x0018 (0x0018 - 0x0000)
struct WBP_HotUpdate_Message_PC_C_ExecuteUbergraph_WBP_HotUpdate_Message_PC final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HotUpdate_Message_PC_C_ExecuteUbergraph_WBP_HotUpdate_Message_PC) == 0x000008, "Wrong alignment on WBP_HotUpdate_Message_PC_C_ExecuteUbergraph_WBP_HotUpdate_Message_PC");
static_assert(sizeof(WBP_HotUpdate_Message_PC_C_ExecuteUbergraph_WBP_HotUpdate_Message_PC) == 0x000018, "Wrong size on WBP_HotUpdate_Message_PC_C_ExecuteUbergraph_WBP_HotUpdate_Message_PC");
static_assert(offsetof(WBP_HotUpdate_Message_PC_C_ExecuteUbergraph_WBP_HotUpdate_Message_PC, EntryPoint) == 0x000000, "Member 'WBP_HotUpdate_Message_PC_C_ExecuteUbergraph_WBP_HotUpdate_Message_PC::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_HotUpdate_Message_PC_C_ExecuteUbergraph_WBP_HotUpdate_Message_PC, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_HotUpdate_Message_PC_C_ExecuteUbergraph_WBP_HotUpdate_Message_PC::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HotUpdate_Message_PC_C_ExecuteUbergraph_WBP_HotUpdate_Message_PC, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'WBP_HotUpdate_Message_PC_C_ExecuteUbergraph_WBP_HotUpdate_Message_PC::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function WBP_HotUpdate_Message_PC.WBP_HotUpdate_Message_PC_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct WBP_HotUpdate_Message_PC_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HotUpdate_Message_PC_C_GetModuleName) == 0x000008, "Wrong alignment on WBP_HotUpdate_Message_PC_C_GetModuleName");
static_assert(sizeof(WBP_HotUpdate_Message_PC_C_GetModuleName) == 0x000010, "Wrong size on WBP_HotUpdate_Message_PC_C_GetModuleName");
static_assert(offsetof(WBP_HotUpdate_Message_PC_C_GetModuleName, ReturnValue) == 0x000000, "Member 'WBP_HotUpdate_Message_PC_C_GetModuleName::ReturnValue' has a wrong offset!");

}

