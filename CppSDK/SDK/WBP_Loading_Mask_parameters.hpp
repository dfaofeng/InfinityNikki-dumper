﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Loading_Mask

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_Loading_Mask.WBP_Loading_Mask_C.Remove
// 0x0018 (0x0018 - 0x0000)
struct WBP_Loading_Mask_C_Remove final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Loading_Mask_C_Remove) == 0x000008, "Wrong alignment on WBP_Loading_Mask_C_Remove");
static_assert(sizeof(WBP_Loading_Mask_C_Remove) == 0x000018, "Wrong size on WBP_Loading_Mask_C_Remove");
static_assert(offsetof(WBP_Loading_Mask_C_Remove, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_Loading_Mask_C_Remove::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Loading_Mask_C_Remove, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_Loading_Mask_C_Remove::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

