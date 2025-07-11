﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UI_SceneMarker_Fireworks

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UI_SceneMarker_Fireworks.WBP_UI_SceneMarker_Fireworks_C
// 0x0050 (0x0340 - 0x02F0)
class UWBP_UI_SceneMarker_Fireworks_C final : public UUserWidget
{
public:
	class UTextBlock*                             Distance;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Down;                                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_107;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Arrow;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Bg;                                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Normal;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_48;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SmallArrow;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   UI_NS_Marker;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Up;                                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UI_SceneMarker_Fireworks_C">();
	}
	static class UWBP_UI_SceneMarker_Fireworks_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UI_SceneMarker_Fireworks_C>();
	}
};
static_assert(alignof(UWBP_UI_SceneMarker_Fireworks_C) == 0x000008, "Wrong alignment on UWBP_UI_SceneMarker_Fireworks_C");
static_assert(sizeof(UWBP_UI_SceneMarker_Fireworks_C) == 0x000340, "Wrong size on UWBP_UI_SceneMarker_Fireworks_C");
static_assert(offsetof(UWBP_UI_SceneMarker_Fireworks_C, Distance) == 0x0002F0, "Member 'UWBP_UI_SceneMarker_Fireworks_C::Distance' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SceneMarker_Fireworks_C, Down) == 0x0002F8, "Member 'UWBP_UI_SceneMarker_Fireworks_C::Down' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SceneMarker_Fireworks_C, Image_107) == 0x000300, "Member 'UWBP_UI_SceneMarker_Fireworks_C::Image_107' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SceneMarker_Fireworks_C, Img_Arrow) == 0x000308, "Member 'UWBP_UI_SceneMarker_Fireworks_C::Img_Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SceneMarker_Fireworks_C, Img_Bg) == 0x000310, "Member 'UWBP_UI_SceneMarker_Fireworks_C::Img_Bg' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SceneMarker_Fireworks_C, Normal) == 0x000318, "Member 'UWBP_UI_SceneMarker_Fireworks_C::Normal' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SceneMarker_Fireworks_C, SizeBox_48) == 0x000320, "Member 'UWBP_UI_SceneMarker_Fireworks_C::SizeBox_48' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SceneMarker_Fireworks_C, SmallArrow) == 0x000328, "Member 'UWBP_UI_SceneMarker_Fireworks_C::SmallArrow' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SceneMarker_Fireworks_C, UI_NS_Marker) == 0x000330, "Member 'UWBP_UI_SceneMarker_Fireworks_C::UI_NS_Marker' has a wrong offset!");
static_assert(offsetof(UWBP_UI_SceneMarker_Fireworks_C, Up) == 0x000338, "Member 'UWBP_UI_SceneMarker_Fireworks_C::Up' has a wrong offset!");

}

