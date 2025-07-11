﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NikkiActionGroup_PC_V2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_NikkiActionGroup_PC_V2.WBP_NikkiActionGroup_PC_V2_C
// 0x02A8 (0x0598 - 0x02F0)
class UWBP_NikkiActionGroup_PC_V2_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_Finished;                                      // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover_anim_4;                                      // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover_anim_3;                                      // 0x0308(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover_anim_2;                                      // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover_anim_1;                                      // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       switch_suit;                                       // 0x0320(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       selectAnim_4;                                      // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       selectAnim_3;                                      // 0x0330(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       selectAnim_2;                                      // 0x0338(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       selectAnim_1;                                      // 0x0340(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                Button_OpenCamera;                                 // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_OpenSwitch;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_AttachSkill;                           // 0x0358(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Cloth;                                 // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Rattle;                                // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ChangeEffect;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Common_KeyTips_Entry_C*         ClothButtonKeyTip;                                 // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomShapeButton*                     CustomShapeButton_1;                               // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomShapeButton*                     CustomShapeButton_2;                               // 0x0388(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomShapeButton*                     CustomShapeButton_3;                               // 0x0390(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomShapeButton*                     CustomShapeButton_4;                               // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UX6SoftRefWidget*                       Firework_Main;                                     // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 icon_Suit;                                         // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 icon_Suit_1;                                       // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_7;                                           // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_8;                                           // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_9;                                           // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_10;                                          // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_11;                                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_12;                                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_312;                                         // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_676;                                         // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Mask;                                        // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                       InvalidationBox_1;                                 // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Left;                                              // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Left_V2;                                           // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NoSuit;                                            // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NoSuit_1;                                          // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NoSuit_2;                                          // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Photo;                                             // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Common_KeyTips_Entry_C*         RattleButtonKeyTip;                                // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Right;                                             // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_Chat;                                     // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Cloth;                                     // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Rattle;                                    // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Skill;                                     // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Skill_01;                                          // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Skill_02;                                          // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Skill_03;                                          // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Skill_04;                                          // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Skill_05;                                          // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SkillButton;                                       // 0x04D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SkillButton_1;                                     // 0x04D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SkillButton_2;                                     // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Common_KeyTips_Entry_C*         SkillButtonKeyTip;                                 // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActionSlotWidget_PC_C*             Slot_1;                                            // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActionSlotWidget_PC_C*             Slot_2;                                            // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActionSlotWidget_PC_C*             Slot_3;                                            // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActionSlotWidget_PC_C*             Slot_4;                                            // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActionSlotWidget_PC_C*             Slot_5;                                            // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActionSlotKeyTip_PC_C*             SlotTip_1;                                         // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActionSlotKeyTip_PC_C*             SlotTip_2;                                         // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActionSlotKeyTip_PC_C*             SlotTip_3;                                         // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActionSlotKeyTip_PC_C*             SlotTip_4;                                         // 0x0530(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ActionSlotKeyTip_PC_C*             SlotTip_5;                                         // 0x0538(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SuitBg;                                            // 0x0540(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   UI_NS_Change;                                      // 0x0548(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNiagaraSystemWidget*                   UI_NS_Finish;                                      // 0x0550(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Hud_AbilitySuit_Item_C*            WBP_Hud_AbilitySuit_Item;                          // 0x0558(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Hud_Action_Clothes_PCPS_C*         WBP_Hud_Action_Clothes_PCPS;                       // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Left_Chat_Item_C*                  WBP_Left_Chat_Item;                                // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UI_Common_KeyTips_WithDescribe_PC_C* WBP_UI_Common_KeyTips_WithDescribe_PC_Default;   // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDynamicEntryBox*                       WBP_UI_Common_KeyTips_WithDescribe_PC_List;        // 0x0578(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0580(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_1;                                  // 0x0588(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Suit;                               // 0x0590(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_NikkiActionGroup_PC_V2(int32 EntryPoint);
	void NotifyRefreshSuitIcon();
	void SequenceEvent__ENTRYPOINTWBP_NikkiActionGroup_PC_V2();
	void SetDefaultActionIcon();

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_NikkiActionGroup_PC_V2_C">();
	}
	static class UWBP_NikkiActionGroup_PC_V2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_NikkiActionGroup_PC_V2_C>();
	}
};
static_assert(alignof(UWBP_NikkiActionGroup_PC_V2_C) == 0x000008, "Wrong alignment on UWBP_NikkiActionGroup_PC_V2_C");
static_assert(sizeof(UWBP_NikkiActionGroup_PC_V2_C) == 0x000598, "Wrong size on UWBP_NikkiActionGroup_PC_V2_C");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, UberGraphFrame) == 0x0002F0, "Member 'UWBP_NikkiActionGroup_PC_V2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Ani_Finished) == 0x0002F8, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Ani_Finished' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Hover_anim_4) == 0x000300, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Hover_anim_4' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Hover_anim_3) == 0x000308, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Hover_anim_3' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Hover_anim_2) == 0x000310, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Hover_anim_2' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Hover_anim_1) == 0x000318, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Hover_anim_1' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, switch_suit) == 0x000320, "Member 'UWBP_NikkiActionGroup_PC_V2_C::switch_suit' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, selectAnim_4) == 0x000328, "Member 'UWBP_NikkiActionGroup_PC_V2_C::selectAnim_4' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, selectAnim_3) == 0x000330, "Member 'UWBP_NikkiActionGroup_PC_V2_C::selectAnim_3' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, selectAnim_2) == 0x000338, "Member 'UWBP_NikkiActionGroup_PC_V2_C::selectAnim_2' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, selectAnim_1) == 0x000340, "Member 'UWBP_NikkiActionGroup_PC_V2_C::selectAnim_1' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Button_OpenCamera) == 0x000348, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Button_OpenCamera' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Button_OpenSwitch) == 0x000350, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Button_OpenSwitch' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, CanvasPanel_AttachSkill) == 0x000358, "Member 'UWBP_NikkiActionGroup_PC_V2_C::CanvasPanel_AttachSkill' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, CanvasPanel_Cloth) == 0x000360, "Member 'UWBP_NikkiActionGroup_PC_V2_C::CanvasPanel_Cloth' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, CanvasPanel_Rattle) == 0x000368, "Member 'UWBP_NikkiActionGroup_PC_V2_C::CanvasPanel_Rattle' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, ChangeEffect) == 0x000370, "Member 'UWBP_NikkiActionGroup_PC_V2_C::ChangeEffect' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, ClothButtonKeyTip) == 0x000378, "Member 'UWBP_NikkiActionGroup_PC_V2_C::ClothButtonKeyTip' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, CustomShapeButton_1) == 0x000380, "Member 'UWBP_NikkiActionGroup_PC_V2_C::CustomShapeButton_1' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, CustomShapeButton_2) == 0x000388, "Member 'UWBP_NikkiActionGroup_PC_V2_C::CustomShapeButton_2' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, CustomShapeButton_3) == 0x000390, "Member 'UWBP_NikkiActionGroup_PC_V2_C::CustomShapeButton_3' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, CustomShapeButton_4) == 0x000398, "Member 'UWBP_NikkiActionGroup_PC_V2_C::CustomShapeButton_4' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Firework_Main) == 0x0003A0, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Firework_Main' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, icon_Suit) == 0x0003A8, "Member 'UWBP_NikkiActionGroup_PC_V2_C::icon_Suit' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, icon_Suit_1) == 0x0003B0, "Member 'UWBP_NikkiActionGroup_PC_V2_C::icon_Suit_1' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Image) == 0x0003B8, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Image_1) == 0x0003C0, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Image_2) == 0x0003C8, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Image_3) == 0x0003D0, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Image_3' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Image_4) == 0x0003D8, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Image_4' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Image_5) == 0x0003E0, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Image_5' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Image_6) == 0x0003E8, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Image_6' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Image_7) == 0x0003F0, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Image_7' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Image_8) == 0x0003F8, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Image_8' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Image_9) == 0x000400, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Image_9' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Image_10) == 0x000408, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Image_10' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Image_11) == 0x000410, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Image_11' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Image_12) == 0x000418, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Image_12' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Image_312) == 0x000420, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Image_312' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Image_676) == 0x000428, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Image_676' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Image_Mask) == 0x000430, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Image_Mask' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, InvalidationBox_0) == 0x000438, "Member 'UWBP_NikkiActionGroup_PC_V2_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, InvalidationBox_1) == 0x000440, "Member 'UWBP_NikkiActionGroup_PC_V2_C::InvalidationBox_1' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Left) == 0x000448, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Left' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Left_V2) == 0x000450, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Left_V2' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, NoSuit) == 0x000458, "Member 'UWBP_NikkiActionGroup_PC_V2_C::NoSuit' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, NoSuit_1) == 0x000460, "Member 'UWBP_NikkiActionGroup_PC_V2_C::NoSuit_1' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, NoSuit_2) == 0x000468, "Member 'UWBP_NikkiActionGroup_PC_V2_C::NoSuit_2' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Photo) == 0x000470, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Photo' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, RattleButtonKeyTip) == 0x000478, "Member 'UWBP_NikkiActionGroup_PC_V2_C::RattleButtonKeyTip' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Right) == 0x000480, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Right' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, ScaleBox_Chat) == 0x000488, "Member 'UWBP_NikkiActionGroup_PC_V2_C::ScaleBox_Chat' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, SizeBox_Cloth) == 0x000490, "Member 'UWBP_NikkiActionGroup_PC_V2_C::SizeBox_Cloth' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, SizeBox_Rattle) == 0x000498, "Member 'UWBP_NikkiActionGroup_PC_V2_C::SizeBox_Rattle' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, SizeBox_Skill) == 0x0004A0, "Member 'UWBP_NikkiActionGroup_PC_V2_C::SizeBox_Skill' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Skill_01) == 0x0004A8, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Skill_01' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Skill_02) == 0x0004B0, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Skill_02' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Skill_03) == 0x0004B8, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Skill_03' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Skill_04) == 0x0004C0, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Skill_04' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Skill_05) == 0x0004C8, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Skill_05' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, SkillButton) == 0x0004D0, "Member 'UWBP_NikkiActionGroup_PC_V2_C::SkillButton' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, SkillButton_1) == 0x0004D8, "Member 'UWBP_NikkiActionGroup_PC_V2_C::SkillButton_1' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, SkillButton_2) == 0x0004E0, "Member 'UWBP_NikkiActionGroup_PC_V2_C::SkillButton_2' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, SkillButtonKeyTip) == 0x0004E8, "Member 'UWBP_NikkiActionGroup_PC_V2_C::SkillButtonKeyTip' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Slot_1) == 0x0004F0, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Slot_1' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Slot_2) == 0x0004F8, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Slot_2' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Slot_3) == 0x000500, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Slot_3' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Slot_4) == 0x000508, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Slot_4' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, Slot_5) == 0x000510, "Member 'UWBP_NikkiActionGroup_PC_V2_C::Slot_5' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, SlotTip_1) == 0x000518, "Member 'UWBP_NikkiActionGroup_PC_V2_C::SlotTip_1' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, SlotTip_2) == 0x000520, "Member 'UWBP_NikkiActionGroup_PC_V2_C::SlotTip_2' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, SlotTip_3) == 0x000528, "Member 'UWBP_NikkiActionGroup_PC_V2_C::SlotTip_3' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, SlotTip_4) == 0x000530, "Member 'UWBP_NikkiActionGroup_PC_V2_C::SlotTip_4' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, SlotTip_5) == 0x000538, "Member 'UWBP_NikkiActionGroup_PC_V2_C::SlotTip_5' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, SuitBg) == 0x000540, "Member 'UWBP_NikkiActionGroup_PC_V2_C::SuitBg' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, UI_NS_Change) == 0x000548, "Member 'UWBP_NikkiActionGroup_PC_V2_C::UI_NS_Change' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, UI_NS_Finish) == 0x000550, "Member 'UWBP_NikkiActionGroup_PC_V2_C::UI_NS_Finish' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, WBP_Hud_AbilitySuit_Item) == 0x000558, "Member 'UWBP_NikkiActionGroup_PC_V2_C::WBP_Hud_AbilitySuit_Item' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, WBP_Hud_Action_Clothes_PCPS) == 0x000560, "Member 'UWBP_NikkiActionGroup_PC_V2_C::WBP_Hud_Action_Clothes_PCPS' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, WBP_Left_Chat_Item) == 0x000568, "Member 'UWBP_NikkiActionGroup_PC_V2_C::WBP_Left_Chat_Item' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, WBP_UI_Common_KeyTips_WithDescribe_PC_Default) == 0x000570, "Member 'UWBP_NikkiActionGroup_PC_V2_C::WBP_UI_Common_KeyTips_WithDescribe_PC_Default' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, WBP_UI_Common_KeyTips_WithDescribe_PC_List) == 0x000578, "Member 'UWBP_NikkiActionGroup_PC_V2_C::WBP_UI_Common_KeyTips_WithDescribe_PC_List' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, WidgetSwitcher_0) == 0x000580, "Member 'UWBP_NikkiActionGroup_PC_V2_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, WidgetSwitcher_1) == 0x000588, "Member 'UWBP_NikkiActionGroup_PC_V2_C::WidgetSwitcher_1' has a wrong offset!");
static_assert(offsetof(UWBP_NikkiActionGroup_PC_V2_C, WidgetSwitcher_Suit) == 0x000590, "Member 'UWBP_NikkiActionGroup_PC_V2_C::WidgetSwitcher_Suit' has a wrong offset!");

}

