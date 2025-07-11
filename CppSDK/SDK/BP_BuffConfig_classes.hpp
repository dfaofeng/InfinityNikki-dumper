﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BuffConfig

#include "Basic.hpp"

#include "X6Game_structs.hpp"
#include "X6Game_classes.hpp"
#include "EBuffMulticastType_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "F_ModifyAttrSet_structs.hpp"
#include "F_AddStateSet_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BuffConfig.BP_BuffConfig_C
// 0x0110 (0x0150 - 0x0040)
class UBP_BuffConfig_C final : public UX6BuffDataAsset
{
public:
	class FString                                 Desc;                                              // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	EBuffDurationType                             DurationPolicy;                                    // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Duration;                                          // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBuffMulticastType                            MulticastType;                                     // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           TriggerGA;                                         // 0x0064(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GrantedAbility;                                    // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  GrantedTags;                                       // 0x0078(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FF_AddStateSet>                 GrantedStates;                                     // 0x0098(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FF_ModifyAttrSet>               ModifyAttrs;                                       // 0x00A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  BuffTags;                                          // 0x00B8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  ActivationBlockedTags;                             // 0x00D8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          TriggerBuffInStart;                                // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UBP_BuffConfig_C*>               TriggerBuffs;                                      // 0x0100(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bPlayShakeOnlyFirst;                               // 0x0110(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UBP_CameraAndForceShakeConfigTemplate_C> ShakeConfig;                       // 0x0118(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UBP_BuffConfig_C*>               RemoveBuffs;                                       // 0x0140(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuffConfig_C">();
	}
	static class UBP_BuffConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_BuffConfig_C>();
	}
};
static_assert(alignof(UBP_BuffConfig_C) == 0x000008, "Wrong alignment on UBP_BuffConfig_C");
static_assert(sizeof(UBP_BuffConfig_C) == 0x000150, "Wrong size on UBP_BuffConfig_C");
static_assert(offsetof(UBP_BuffConfig_C, Desc) == 0x000040, "Member 'UBP_BuffConfig_C::Desc' has a wrong offset!");
static_assert(offsetof(UBP_BuffConfig_C, DurationPolicy) == 0x000050, "Member 'UBP_BuffConfig_C::DurationPolicy' has a wrong offset!");
static_assert(offsetof(UBP_BuffConfig_C, Duration) == 0x000058, "Member 'UBP_BuffConfig_C::Duration' has a wrong offset!");
static_assert(offsetof(UBP_BuffConfig_C, MulticastType) == 0x000060, "Member 'UBP_BuffConfig_C::MulticastType' has a wrong offset!");
static_assert(offsetof(UBP_BuffConfig_C, TriggerGA) == 0x000064, "Member 'UBP_BuffConfig_C::TriggerGA' has a wrong offset!");
static_assert(offsetof(UBP_BuffConfig_C, GrantedAbility) == 0x000070, "Member 'UBP_BuffConfig_C::GrantedAbility' has a wrong offset!");
static_assert(offsetof(UBP_BuffConfig_C, GrantedTags) == 0x000078, "Member 'UBP_BuffConfig_C::GrantedTags' has a wrong offset!");
static_assert(offsetof(UBP_BuffConfig_C, GrantedStates) == 0x000098, "Member 'UBP_BuffConfig_C::GrantedStates' has a wrong offset!");
static_assert(offsetof(UBP_BuffConfig_C, ModifyAttrs) == 0x0000A8, "Member 'UBP_BuffConfig_C::ModifyAttrs' has a wrong offset!");
static_assert(offsetof(UBP_BuffConfig_C, BuffTags) == 0x0000B8, "Member 'UBP_BuffConfig_C::BuffTags' has a wrong offset!");
static_assert(offsetof(UBP_BuffConfig_C, ActivationBlockedTags) == 0x0000D8, "Member 'UBP_BuffConfig_C::ActivationBlockedTags' has a wrong offset!");
static_assert(offsetof(UBP_BuffConfig_C, TriggerBuffInStart) == 0x0000F8, "Member 'UBP_BuffConfig_C::TriggerBuffInStart' has a wrong offset!");
static_assert(offsetof(UBP_BuffConfig_C, TriggerBuffs) == 0x000100, "Member 'UBP_BuffConfig_C::TriggerBuffs' has a wrong offset!");
static_assert(offsetof(UBP_BuffConfig_C, bPlayShakeOnlyFirst) == 0x000110, "Member 'UBP_BuffConfig_C::bPlayShakeOnlyFirst' has a wrong offset!");
static_assert(offsetof(UBP_BuffConfig_C, ShakeConfig) == 0x000118, "Member 'UBP_BuffConfig_C::ShakeConfig' has a wrong offset!");
static_assert(offsetof(UBP_BuffConfig_C, RemoveBuffs) == 0x000140, "Member 'UBP_BuffConfig_C::RemoveBuffs' has a wrong offset!");

}

