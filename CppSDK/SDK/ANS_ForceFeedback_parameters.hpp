﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANS_ForceFeedback

#include "Basic.hpp"


namespace SDK::Params
{

// Function ANS_ForceFeedback.ANS_ForceFeedback_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct ANS_ForceFeedback_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(ANS_ForceFeedback_C_GetModuleName) == 0x000008, "Wrong alignment on ANS_ForceFeedback_C_GetModuleName");
static_assert(sizeof(ANS_ForceFeedback_C_GetModuleName) == 0x000010, "Wrong size on ANS_ForceFeedback_C_GetModuleName");
static_assert(offsetof(ANS_ForceFeedback_C_GetModuleName, ReturnValue) == 0x000000, "Member 'ANS_ForceFeedback_C_GetModuleName::ReturnValue' has a wrong offset!");

// Function ANS_ForceFeedback.ANS_ForceFeedback_C.GetNotifyName
// 0x0010 (0x0010 - 0x0000)
struct ANS_ForceFeedback_C_GetNotifyName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(ANS_ForceFeedback_C_GetNotifyName) == 0x000008, "Wrong alignment on ANS_ForceFeedback_C_GetNotifyName");
static_assert(sizeof(ANS_ForceFeedback_C_GetNotifyName) == 0x000010, "Wrong size on ANS_ForceFeedback_C_GetNotifyName");
static_assert(offsetof(ANS_ForceFeedback_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'ANS_ForceFeedback_C_GetNotifyName::ReturnValue' has a wrong offset!");

}

