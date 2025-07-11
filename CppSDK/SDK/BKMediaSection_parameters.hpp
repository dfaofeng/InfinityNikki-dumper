﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BKMediaSection

#include "Basic.hpp"


namespace SDK::Params
{

// Function BKMediaSection.BKMediaSection_C.StartLoad
// 0x0010 (0x0010 - 0x0000)
struct BKMediaSection_C_StartLoad final
{
public:
	class FString                                 LevelSequenceName;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BKMediaSection_C_StartLoad) == 0x000008, "Wrong alignment on BKMediaSection_C_StartLoad");
static_assert(sizeof(BKMediaSection_C_StartLoad) == 0x000010, "Wrong size on BKMediaSection_C_StartLoad");
static_assert(offsetof(BKMediaSection_C_StartLoad, LevelSequenceName) == 0x000000, "Member 'BKMediaSection_C_StartLoad::LevelSequenceName' has a wrong offset!");

// Function BKMediaSection.BKMediaSection_C.ExecuteUbergraph_BKMediaSection
// 0x0018 (0x0018 - 0x0000)
struct BKMediaSection_C_ExecuteUbergraph_BKMediaSection final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Event_LevelSequenceName;                    // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BKMediaSection_C_ExecuteUbergraph_BKMediaSection) == 0x000008, "Wrong alignment on BKMediaSection_C_ExecuteUbergraph_BKMediaSection");
static_assert(sizeof(BKMediaSection_C_ExecuteUbergraph_BKMediaSection) == 0x000018, "Wrong size on BKMediaSection_C_ExecuteUbergraph_BKMediaSection");
static_assert(offsetof(BKMediaSection_C_ExecuteUbergraph_BKMediaSection, EntryPoint) == 0x000000, "Member 'BKMediaSection_C_ExecuteUbergraph_BKMediaSection::EntryPoint' has a wrong offset!");
static_assert(offsetof(BKMediaSection_C_ExecuteUbergraph_BKMediaSection, K2Node_Event_LevelSequenceName) == 0x000008, "Member 'BKMediaSection_C_ExecuteUbergraph_BKMediaSection::K2Node_Event_LevelSequenceName' has a wrong offset!");

// Function BKMediaSection.BKMediaSection_C.GetModuleName
// 0x0010 (0x0010 - 0x0000)
struct BKMediaSection_C_GetModuleName final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(BKMediaSection_C_GetModuleName) == 0x000008, "Wrong alignment on BKMediaSection_C_GetModuleName");
static_assert(sizeof(BKMediaSection_C_GetModuleName) == 0x000010, "Wrong size on BKMediaSection_C_GetModuleName");
static_assert(offsetof(BKMediaSection_C_GetModuleName, ReturnValue) == 0x000000, "Member 'BKMediaSection_C_GetModuleName::ReturnValue' has a wrong offset!");

}

