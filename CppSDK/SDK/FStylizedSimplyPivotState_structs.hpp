﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FStylizedSimplyPivotState

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct FStylizedSimplyPivotState.FStylizedSimplyPivotState
// 0x0018 (0x0018 - 0x0000)
struct FFStylizedSimplyPivotState final
{
public:
	bool                                          bUseSimplifiedPivot_17_13EDAB7C45DF3709ED0FCA997B51ED40; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          PivotAnim_20_EB5BCCAD4A878313AD35E3A44F350A1C;     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          PivotWalkAnim_23_D4E118B043112A1BA575D9AB23AACE32; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFStylizedSimplyPivotState) == 0x000008, "Wrong alignment on FFStylizedSimplyPivotState");
static_assert(sizeof(FFStylizedSimplyPivotState) == 0x000018, "Wrong size on FFStylizedSimplyPivotState");
static_assert(offsetof(FFStylizedSimplyPivotState, bUseSimplifiedPivot_17_13EDAB7C45DF3709ED0FCA997B51ED40) == 0x000000, "Member 'FFStylizedSimplyPivotState::bUseSimplifiedPivot_17_13EDAB7C45DF3709ED0FCA997B51ED40' has a wrong offset!");
static_assert(offsetof(FFStylizedSimplyPivotState, PivotAnim_20_EB5BCCAD4A878313AD35E3A44F350A1C) == 0x000008, "Member 'FFStylizedSimplyPivotState::PivotAnim_20_EB5BCCAD4A878313AD35E3A44F350A1C' has a wrong offset!");
static_assert(offsetof(FFStylizedSimplyPivotState, PivotWalkAnim_23_D4E118B043112A1BA575D9AB23AACE32) == 0x000010, "Member 'FFStylizedSimplyPivotState::PivotWalkAnim_23_D4E118B043112A1BA575D9AB23AACE32' has a wrong offset!");

}

