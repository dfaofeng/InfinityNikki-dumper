﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Hud_DaMiaoTip

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Hud_DaMiaoTip.WBP_Hud_DaMiaoTip_C
// 0x0018 (0x0308 - 0x02F0)
class UWBP_Hud_DaMiaoTip_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       FadeOut;                                           // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Text_Tips;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Hud_DaMiaoTip_C">();
	}
	static class UWBP_Hud_DaMiaoTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Hud_DaMiaoTip_C>();
	}
};
static_assert(alignof(UWBP_Hud_DaMiaoTip_C) == 0x000008, "Wrong alignment on UWBP_Hud_DaMiaoTip_C");
static_assert(sizeof(UWBP_Hud_DaMiaoTip_C) == 0x000308, "Wrong size on UWBP_Hud_DaMiaoTip_C");
static_assert(offsetof(UWBP_Hud_DaMiaoTip_C, FadeOut) == 0x0002F0, "Member 'UWBP_Hud_DaMiaoTip_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_DaMiaoTip_C, FadeIn) == 0x0002F8, "Member 'UWBP_Hud_DaMiaoTip_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UWBP_Hud_DaMiaoTip_C, Text_Tips) == 0x000300, "Member 'UWBP_Hud_DaMiaoTip_C::Text_Tips' has a wrong offset!");

}

