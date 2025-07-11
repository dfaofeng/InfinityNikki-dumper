﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_JoystickCustomConfig

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_JoystickCustomConfig.F_JoystickCustomConfig
// 0x0068 (0x0068 - 0x0000)
struct FF_JoystickCustomConfig final
{
public:
	struct FVector2D                              CenterPos_12_88AD9F4141C0EA75F76767BF4C73BDB8;     // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              VisualSize_13_82CC6B4D47ECD0C34C44B99491D5BFEA;    // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ThumbSize_14_DC5B9E6E43BD8C07B13181973101AC8A;     // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InteractionOrigin_15_94DB2EB24EF2699D535C09841E5D0F84; // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InteractionSize_16_262D0CFA47467A52BA8BA29E52ED379E; // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LockPos_18_0F4E390D4EC3FEC72D3FB686109DE876;       // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseFloat_20_ED17E5C44FC2C8BF383B7EB360F49892;      // 0x0051(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              EdgeGapSize_25_BFE8EFF0489BF0DCDF5E38B51A4F06B5;   // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_JoystickCustomConfig) == 0x000008, "Wrong alignment on FF_JoystickCustomConfig");
static_assert(sizeof(FF_JoystickCustomConfig) == 0x000068, "Wrong size on FF_JoystickCustomConfig");
static_assert(offsetof(FF_JoystickCustomConfig, CenterPos_12_88AD9F4141C0EA75F76767BF4C73BDB8) == 0x000000, "Member 'FF_JoystickCustomConfig::CenterPos_12_88AD9F4141C0EA75F76767BF4C73BDB8' has a wrong offset!");
static_assert(offsetof(FF_JoystickCustomConfig, VisualSize_13_82CC6B4D47ECD0C34C44B99491D5BFEA) == 0x000010, "Member 'FF_JoystickCustomConfig::VisualSize_13_82CC6B4D47ECD0C34C44B99491D5BFEA' has a wrong offset!");
static_assert(offsetof(FF_JoystickCustomConfig, ThumbSize_14_DC5B9E6E43BD8C07B13181973101AC8A) == 0x000020, "Member 'FF_JoystickCustomConfig::ThumbSize_14_DC5B9E6E43BD8C07B13181973101AC8A' has a wrong offset!");
static_assert(offsetof(FF_JoystickCustomConfig, InteractionOrigin_15_94DB2EB24EF2699D535C09841E5D0F84) == 0x000030, "Member 'FF_JoystickCustomConfig::InteractionOrigin_15_94DB2EB24EF2699D535C09841E5D0F84' has a wrong offset!");
static_assert(offsetof(FF_JoystickCustomConfig, InteractionSize_16_262D0CFA47467A52BA8BA29E52ED379E) == 0x000040, "Member 'FF_JoystickCustomConfig::InteractionSize_16_262D0CFA47467A52BA8BA29E52ED379E' has a wrong offset!");
static_assert(offsetof(FF_JoystickCustomConfig, LockPos_18_0F4E390D4EC3FEC72D3FB686109DE876) == 0x000050, "Member 'FF_JoystickCustomConfig::LockPos_18_0F4E390D4EC3FEC72D3FB686109DE876' has a wrong offset!");
static_assert(offsetof(FF_JoystickCustomConfig, UseFloat_20_ED17E5C44FC2C8BF383B7EB360F49892) == 0x000051, "Member 'FF_JoystickCustomConfig::UseFloat_20_ED17E5C44FC2C8BF383B7EB360F49892' has a wrong offset!");
static_assert(offsetof(FF_JoystickCustomConfig, EdgeGapSize_25_BFE8EFF0489BF0DCDF5E38B51A4F06B5) == 0x000058, "Member 'FF_JoystickCustomConfig::EdgeGapSize_25_BFE8EFF0489BF0DCDF5E38B51A4F06B5' has a wrong offset!");

}

