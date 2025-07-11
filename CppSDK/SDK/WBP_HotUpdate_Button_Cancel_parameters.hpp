﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_HotUpdate_Button_Cancel

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_HotUpdate_Button_Cancel.WBP_HotUpdate_Button_Cancel_C.ExecuteUbergraph_WBP_HotUpdate_Button_Cancel
// 0x0028 (0x0028 - 0x0000)
struct WBP_HotUpdate_Button_Cancel_C_ExecuteUbergraph_WBP_HotUpdate_Button_Cancel final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HotUpdate_Button_Cancel_C_ExecuteUbergraph_WBP_HotUpdate_Button_Cancel) == 0x000008, "Wrong alignment on WBP_HotUpdate_Button_Cancel_C_ExecuteUbergraph_WBP_HotUpdate_Button_Cancel");
static_assert(sizeof(WBP_HotUpdate_Button_Cancel_C_ExecuteUbergraph_WBP_HotUpdate_Button_Cancel) == 0x000028, "Wrong size on WBP_HotUpdate_Button_Cancel_C_ExecuteUbergraph_WBP_HotUpdate_Button_Cancel");
static_assert(offsetof(WBP_HotUpdate_Button_Cancel_C_ExecuteUbergraph_WBP_HotUpdate_Button_Cancel, EntryPoint) == 0x000000, "Member 'WBP_HotUpdate_Button_Cancel_C_ExecuteUbergraph_WBP_HotUpdate_Button_Cancel::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_HotUpdate_Button_Cancel_C_ExecuteUbergraph_WBP_HotUpdate_Button_Cancel, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_HotUpdate_Button_Cancel_C_ExecuteUbergraph_WBP_HotUpdate_Button_Cancel::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_HotUpdate_Button_Cancel_C_ExecuteUbergraph_WBP_HotUpdate_Button_Cancel, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'WBP_HotUpdate_Button_Cancel_C_ExecuteUbergraph_WBP_HotUpdate_Button_Cancel::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HotUpdate_Button_Cancel_C_ExecuteUbergraph_WBP_HotUpdate_Button_Cancel, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_HotUpdate_Button_Cancel_C_ExecuteUbergraph_WBP_HotUpdate_Button_Cancel::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_HotUpdate_Button_Cancel_C_ExecuteUbergraph_WBP_HotUpdate_Button_Cancel, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000018, "Member 'WBP_HotUpdate_Button_Cancel_C_ExecuteUbergraph_WBP_HotUpdate_Button_Cancel::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_HotUpdate_Button_Cancel_C_ExecuteUbergraph_WBP_HotUpdate_Button_Cancel, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'WBP_HotUpdate_Button_Cancel_C_ExecuteUbergraph_WBP_HotUpdate_Button_Cancel::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function WBP_HotUpdate_Button_Cancel.WBP_HotUpdate_Button_Cancel_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_HotUpdate_Button_Cancel_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_HotUpdate_Button_Cancel_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_HotUpdate_Button_Cancel_C_PreConstruct");
static_assert(sizeof(WBP_HotUpdate_Button_Cancel_C_PreConstruct) == 0x000001, "Wrong size on WBP_HotUpdate_Button_Cancel_C_PreConstruct");
static_assert(offsetof(WBP_HotUpdate_Button_Cancel_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_HotUpdate_Button_Cancel_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_HotUpdate_Button_Cancel.WBP_HotUpdate_Button_Cancel_C.SetTitle
// 0x0010 (0x0010 - 0x0000)
struct WBP_HotUpdate_Button_Cancel_C_SetTitle final
{
public:
	class FText                                   NewTitle;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_HotUpdate_Button_Cancel_C_SetTitle) == 0x000008, "Wrong alignment on WBP_HotUpdate_Button_Cancel_C_SetTitle");
static_assert(sizeof(WBP_HotUpdate_Button_Cancel_C_SetTitle) == 0x000010, "Wrong size on WBP_HotUpdate_Button_Cancel_C_SetTitle");
static_assert(offsetof(WBP_HotUpdate_Button_Cancel_C_SetTitle, NewTitle) == 0x000000, "Member 'WBP_HotUpdate_Button_Cancel_C_SetTitle::NewTitle' has a wrong offset!");

}

