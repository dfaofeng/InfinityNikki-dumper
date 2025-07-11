﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_StylizedLoopAnimConfig

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct F_StylizedLoopAnimConfig.F_StylizedLoopAnimConfig
// 0x0078 (0x0078 - 0x0000)
struct FF_StylizedLoopAnimConfig final
{
public:
	TSoftObjectPtr<class UAnimSequence>           Loop_Animation_2_A9C6EEB94C511172BDF39D96C00638E8; // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UBlendSpace>             SlopeWithHeading_8_E2F96BA14C8BC08325ABF6AC6519CA98; // 0x0028(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UBlendSpace>             Heading_10_7F3B9D7F4BEF29E1AA4307BFD0A09B54;       // 0x0050(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FF_StylizedLoopAnimConfig) == 0x000008, "Wrong alignment on FF_StylizedLoopAnimConfig");
static_assert(sizeof(FF_StylizedLoopAnimConfig) == 0x000078, "Wrong size on FF_StylizedLoopAnimConfig");
static_assert(offsetof(FF_StylizedLoopAnimConfig, Loop_Animation_2_A9C6EEB94C511172BDF39D96C00638E8) == 0x000000, "Member 'FF_StylizedLoopAnimConfig::Loop_Animation_2_A9C6EEB94C511172BDF39D96C00638E8' has a wrong offset!");
static_assert(offsetof(FF_StylizedLoopAnimConfig, SlopeWithHeading_8_E2F96BA14C8BC08325ABF6AC6519CA98) == 0x000028, "Member 'FF_StylizedLoopAnimConfig::SlopeWithHeading_8_E2F96BA14C8BC08325ABF6AC6519CA98' has a wrong offset!");
static_assert(offsetof(FF_StylizedLoopAnimConfig, Heading_10_7F3B9D7F4BEF29E1AA4307BFD0A09B54) == 0x000050, "Member 'FF_StylizedLoopAnimConfig::Heading_10_7F3B9D7F4BEF29E1AA4307BFD0A09B54' has a wrong offset!");

}

