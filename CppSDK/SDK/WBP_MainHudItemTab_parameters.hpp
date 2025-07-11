﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainHudItemTab

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_MainHudItemTab.WBP_MainHudItemTab_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_MainHudItemTab_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainHudItemTab_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on WBP_MainHudItemTab_C_BP_OnItemExpansionChanged");
static_assert(sizeof(WBP_MainHudItemTab_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on WBP_MainHudItemTab_C_BP_OnItemExpansionChanged");
static_assert(offsetof(WBP_MainHudItemTab_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'WBP_MainHudItemTab_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function WBP_MainHudItemTab.WBP_MainHudItemTab_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_MainHudItemTab_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainHudItemTab_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on WBP_MainHudItemTab_C_BP_OnItemSelectionChanged");
static_assert(sizeof(WBP_MainHudItemTab_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on WBP_MainHudItemTab_C_BP_OnItemSelectionChanged");
static_assert(offsetof(WBP_MainHudItemTab_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'WBP_MainHudItemTab_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function WBP_MainHudItemTab.WBP_MainHudItemTab_C.ExecuteUbergraph_WBP_MainHudItemTab
// 0x0028 (0x0028 - 0x0000)
struct WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_unlockStyle;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab) == 0x000008, "Wrong alignment on WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab");
static_assert(sizeof(WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab) == 0x000028, "Wrong size on WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab");
static_assert(offsetof(WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab, EntryPoint) == 0x000000, "Member 'WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab, K2Node_Event_bIsExpanded) == 0x000004, "Member 'WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab, K2Node_Event_bIsSelected) == 0x000005, "Member 'WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab, K2Node_Event_ListItemObject) == 0x000008, "Member 'WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab, K2Node_CustomEvent_unlockStyle) == 0x000010, "Member 'WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab::K2Node_CustomEvent_unlockStyle' has a wrong offset!");
static_assert(offsetof(WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000014, "Member 'WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab, CallFunc_Delay_Duration_ImplicitCast) == 0x000020, "Member 'WBP_MainHudItemTab_C_ExecuteUbergraph_WBP_MainHudItemTab::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function WBP_MainHudItemTab.WBP_MainHudItemTab_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct WBP_MainHudItemTab_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainHudItemTab_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on WBP_MainHudItemTab_C_OnListItemObjectSet");
static_assert(sizeof(WBP_MainHudItemTab_C_OnListItemObjectSet) == 0x000008, "Wrong size on WBP_MainHudItemTab_C_OnListItemObjectSet");
static_assert(offsetof(WBP_MainHudItemTab_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'WBP_MainHudItemTab_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function WBP_MainHudItemTab.WBP_MainHudItemTab_C.PlayUnlock
// 0x0004 (0x0004 - 0x0000)
struct WBP_MainHudItemTab_C_PlayUnlock final
{
public:
	int32                                         unlockStyle;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainHudItemTab_C_PlayUnlock) == 0x000004, "Wrong alignment on WBP_MainHudItemTab_C_PlayUnlock");
static_assert(sizeof(WBP_MainHudItemTab_C_PlayUnlock) == 0x000004, "Wrong size on WBP_MainHudItemTab_C_PlayUnlock");
static_assert(offsetof(WBP_MainHudItemTab_C_PlayUnlock, unlockStyle) == 0x000000, "Member 'WBP_MainHudItemTab_C_PlayUnlock::unlockStyle' has a wrong offset!");

// Function WBP_MainHudItemTab.WBP_MainHudItemTab_C.UpdateUnlockState
// 0x000C (0x000C - 0x0000)
struct WBP_MainHudItemTab_C_UpdateUnlockState final
{
public:
	bool                                          isUnlocked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         unlockStyle;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainHudItemTab_C_UpdateUnlockState) == 0x000004, "Wrong alignment on WBP_MainHudItemTab_C_UpdateUnlockState");
static_assert(sizeof(WBP_MainHudItemTab_C_UpdateUnlockState) == 0x00000C, "Wrong size on WBP_MainHudItemTab_C_UpdateUnlockState");
static_assert(offsetof(WBP_MainHudItemTab_C_UpdateUnlockState, isUnlocked) == 0x000000, "Member 'WBP_MainHudItemTab_C_UpdateUnlockState::isUnlocked' has a wrong offset!");
static_assert(offsetof(WBP_MainHudItemTab_C_UpdateUnlockState, unlockStyle) == 0x000004, "Member 'WBP_MainHudItemTab_C_UpdateUnlockState::unlockStyle' has a wrong offset!");
static_assert(offsetof(WBP_MainHudItemTab_C_UpdateUnlockState, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000008, "Member 'WBP_MainHudItemTab_C_UpdateUnlockState::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_MainHudItemTab.WBP_MainHudItemTab_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct WBP_MainHudItemTab_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainHudItemTab_C_GetModuleName) == 0x000008, "Wrong alignment on WBP_MainHudItemTab_C_GetModuleName");
static_assert(sizeof(WBP_MainHudItemTab_C_GetModuleName) == 0x000010, "Wrong size on WBP_MainHudItemTab_C_GetModuleName");
static_assert(offsetof(WBP_MainHudItemTab_C_GetModuleName, ReturnValue) == 0x000000, "Member 'WBP_MainHudItemTab_C_GetModuleName::ReturnValue' has a wrong offset!");

}

