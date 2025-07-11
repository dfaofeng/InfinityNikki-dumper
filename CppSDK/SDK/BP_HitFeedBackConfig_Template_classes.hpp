﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HitFeedBackConfig_Template

#include "Basic.hpp"

#include "F_PlayerHitFeedBackConfig_Template_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HitFeedBackConfig_Template.BP_HitFeedBackConfig_Template_C
// 0x00A0 (0x00D0 - 0x0030)
class UBP_HitFeedBackConfig_Template_C final : public UPrimaryDataAsset
{
public:
	struct FF_PlayerHitFeedBackConfig_Template    InAir;                                             // 0x0030(0x0050)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FF_PlayerHitFeedBackConfig_Template    OnGround;                                          // 0x0080(0x0050)(Edit, BlueprintVisible, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HitFeedBackConfig_Template_C">();
	}
	static class UBP_HitFeedBackConfig_Template_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HitFeedBackConfig_Template_C>();
	}
};
static_assert(alignof(UBP_HitFeedBackConfig_Template_C) == 0x000008, "Wrong alignment on UBP_HitFeedBackConfig_Template_C");
static_assert(sizeof(UBP_HitFeedBackConfig_Template_C) == 0x0000D0, "Wrong size on UBP_HitFeedBackConfig_Template_C");
static_assert(offsetof(UBP_HitFeedBackConfig_Template_C, InAir) == 0x000030, "Member 'UBP_HitFeedBackConfig_Template_C::InAir' has a wrong offset!");
static_assert(offsetof(UBP_HitFeedBackConfig_Template_C, OnGround) == 0x000080, "Member 'UBP_HitFeedBackConfig_Template_C::OnGround' has a wrong offset!");

}

