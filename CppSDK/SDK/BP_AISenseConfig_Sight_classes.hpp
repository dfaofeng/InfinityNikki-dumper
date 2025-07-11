﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AISenseConfig_Sight

#include "Basic.hpp"

#include "X6Game_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AISenseConfig_Sight.BP_AISenseConfig_Sight_C
// 0x0008 (0x0080 - 0x0078)
class UBP_AISenseConfig_Sight_C final : public UX6AISenseConfig_Sight
{
public:
	bool                                          bNeedLineTrace;                                    // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool NeedLineTrace();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AISenseConfig_Sight_C">();
	}
	static class UBP_AISenseConfig_Sight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AISenseConfig_Sight_C>();
	}
};
static_assert(alignof(UBP_AISenseConfig_Sight_C) == 0x000008, "Wrong alignment on UBP_AISenseConfig_Sight_C");
static_assert(sizeof(UBP_AISenseConfig_Sight_C) == 0x000080, "Wrong size on UBP_AISenseConfig_Sight_C");
static_assert(offsetof(UBP_AISenseConfig_Sight_C, bNeedLineTrace) == 0x000078, "Member 'UBP_AISenseConfig_Sight_C::bNeedLineTrace' has a wrong offset!");

}

