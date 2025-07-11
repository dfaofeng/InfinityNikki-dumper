﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MapMask_Default

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MapMask_Default.WBP_MapMask_Default_C
// 0x0008 (0x02F8 - 0x02F0)
class UWBP_MapMask_Default_C final : public UUserWidget
{
public:
	class UImage*                                 Image_32;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MapMask_Default_C">();
	}
	static class UWBP_MapMask_Default_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MapMask_Default_C>();
	}
};
static_assert(alignof(UWBP_MapMask_Default_C) == 0x000008, "Wrong alignment on UWBP_MapMask_Default_C");
static_assert(sizeof(UWBP_MapMask_Default_C) == 0x0002F8, "Wrong size on UWBP_MapMask_Default_C");
static_assert(offsetof(UWBP_MapMask_Default_C, Image_32) == 0x0002F0, "Member 'UWBP_MapMask_Default_C::Image_32' has a wrong offset!");

}

