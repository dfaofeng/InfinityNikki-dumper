﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_First_Login_PC

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_First_Login_PC.WBP_First_Login_PC_C.ExecuteUbergraph_WBP_First_Login_PC
// 0x0010 (0x0010 - 0x0000)
struct WBP_First_Login_PC_C_ExecuteUbergraph_WBP_First_Login_PC final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_First_Login_PC_C_ExecuteUbergraph_WBP_First_Login_PC) == 0x000008, "Wrong alignment on WBP_First_Login_PC_C_ExecuteUbergraph_WBP_First_Login_PC");
static_assert(sizeof(WBP_First_Login_PC_C_ExecuteUbergraph_WBP_First_Login_PC) == 0x000010, "Wrong size on WBP_First_Login_PC_C_ExecuteUbergraph_WBP_First_Login_PC");
static_assert(offsetof(WBP_First_Login_PC_C_ExecuteUbergraph_WBP_First_Login_PC, EntryPoint) == 0x000000, "Member 'WBP_First_Login_PC_C_ExecuteUbergraph_WBP_First_Login_PC::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_First_Login_PC_C_ExecuteUbergraph_WBP_First_Login_PC, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'WBP_First_Login_PC_C_ExecuteUbergraph_WBP_First_Login_PC::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");

// Function WBP_First_Login_PC.WBP_First_Login_PC_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct WBP_First_Login_PC_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_First_Login_PC_C_GetModuleName) == 0x000008, "Wrong alignment on WBP_First_Login_PC_C_GetModuleName");
static_assert(sizeof(WBP_First_Login_PC_C_GetModuleName) == 0x000010, "Wrong size on WBP_First_Login_PC_C_GetModuleName");
static_assert(offsetof(WBP_First_Login_PC_C_GetModuleName, ReturnValue) == 0x000000, "Member 'WBP_First_Login_PC_C_GetModuleName::ReturnValue' has a wrong offset!");

}

