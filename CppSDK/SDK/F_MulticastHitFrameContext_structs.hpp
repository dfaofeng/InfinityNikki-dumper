﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MulticastHitFrameContext

#include "Basic.hpp"

#include "ESkillFlag_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_MulticastHitFrameContext.F_MulticastHitFrameContext
// 0x0170 (0x0170 - 0x0000)
struct FF_MulticastHitFrameContext final
{
public:
	int64                                         hitTargetId_20_0DAF40994DCE26A33B1F249C11813167;   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                hitDirection_5_C99AAA694339F4CB48172DB20936F6AC;   // 0x0008(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                hitLocation_7_17FA7205461CD1BE8255A695CCBD3D62;    // 0x0020(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillFlag                                    SkillFlags_10_0D4F1ABE4C8DAACF4D838584AE646D35;    // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  AbilityTags_13_A875B2BA40EC0796E4684480DB27C49D;   // 0x0040(0x0020)(Edit, BlueprintVisible)
	class FString                                 hitComponentPropName_16_BC6249504C77E8675A94A09AF1065967; // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FHitResult                             hitResult_19_528783FF435916C5588F1596F60F75C8;     // 0x0070(0x00F8)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         DamageValue_23_7AC5FC464E94B15DF7EAE3BBA2A3FC4C;   // 0x0168(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FF_MulticastHitFrameContext) == 0x000008, "Wrong alignment on FF_MulticastHitFrameContext");
static_assert(sizeof(FF_MulticastHitFrameContext) == 0x000170, "Wrong size on FF_MulticastHitFrameContext");
static_assert(offsetof(FF_MulticastHitFrameContext, hitTargetId_20_0DAF40994DCE26A33B1F249C11813167) == 0x000000, "Member 'FF_MulticastHitFrameContext::hitTargetId_20_0DAF40994DCE26A33B1F249C11813167' has a wrong offset!");
static_assert(offsetof(FF_MulticastHitFrameContext, hitDirection_5_C99AAA694339F4CB48172DB20936F6AC) == 0x000008, "Member 'FF_MulticastHitFrameContext::hitDirection_5_C99AAA694339F4CB48172DB20936F6AC' has a wrong offset!");
static_assert(offsetof(FF_MulticastHitFrameContext, hitLocation_7_17FA7205461CD1BE8255A695CCBD3D62) == 0x000020, "Member 'FF_MulticastHitFrameContext::hitLocation_7_17FA7205461CD1BE8255A695CCBD3D62' has a wrong offset!");
static_assert(offsetof(FF_MulticastHitFrameContext, SkillFlags_10_0D4F1ABE4C8DAACF4D838584AE646D35) == 0x000038, "Member 'FF_MulticastHitFrameContext::SkillFlags_10_0D4F1ABE4C8DAACF4D838584AE646D35' has a wrong offset!");
static_assert(offsetof(FF_MulticastHitFrameContext, AbilityTags_13_A875B2BA40EC0796E4684480DB27C49D) == 0x000040, "Member 'FF_MulticastHitFrameContext::AbilityTags_13_A875B2BA40EC0796E4684480DB27C49D' has a wrong offset!");
static_assert(offsetof(FF_MulticastHitFrameContext, hitComponentPropName_16_BC6249504C77E8675A94A09AF1065967) == 0x000060, "Member 'FF_MulticastHitFrameContext::hitComponentPropName_16_BC6249504C77E8675A94A09AF1065967' has a wrong offset!");
static_assert(offsetof(FF_MulticastHitFrameContext, hitResult_19_528783FF435916C5588F1596F60F75C8) == 0x000070, "Member 'FF_MulticastHitFrameContext::hitResult_19_528783FF435916C5588F1596F60F75C8' has a wrong offset!");
static_assert(offsetof(FF_MulticastHitFrameContext, DamageValue_23_7AC5FC464E94B15DF7EAE3BBA2A3FC4C) == 0x000168, "Member 'FF_MulticastHitFrameContext::DamageValue_23_7AC5FC464E94B15DF7EAE3BBA2A3FC4C' has a wrong offset!");

}

