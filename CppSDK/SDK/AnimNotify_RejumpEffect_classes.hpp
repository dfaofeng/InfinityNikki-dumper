﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_RejumpEffect

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_RejumpEffect.AnimNotify_RejumpEffect_C
// 0x0060 (0x0098 - 0x0038)
class UAnimNotify_RejumpEffect_C final : public UAnimNotify
{
public:
	struct FGameplayTag                           CharacterEffectTag;                                // 0x0038(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationOffset;                                    // 0x0040(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RotationOffset;                                    // 0x0058(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                Scale;                                             // 0x0070(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAbsoluteScale;                                    // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAttached;                                         // 0x0089(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A[0x2];                                       // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SocketName;                                        // 0x008C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	class FString GetNotifyName() const;
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_RejumpEffect_C">();
	}
	static class UAnimNotify_RejumpEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_RejumpEffect_C>();
	}
};
static_assert(alignof(UAnimNotify_RejumpEffect_C) == 0x000008, "Wrong alignment on UAnimNotify_RejumpEffect_C");
static_assert(sizeof(UAnimNotify_RejumpEffect_C) == 0x000098, "Wrong size on UAnimNotify_RejumpEffect_C");
static_assert(offsetof(UAnimNotify_RejumpEffect_C, CharacterEffectTag) == 0x000038, "Member 'UAnimNotify_RejumpEffect_C::CharacterEffectTag' has a wrong offset!");
static_assert(offsetof(UAnimNotify_RejumpEffect_C, LocationOffset) == 0x000040, "Member 'UAnimNotify_RejumpEffect_C::LocationOffset' has a wrong offset!");
static_assert(offsetof(UAnimNotify_RejumpEffect_C, RotationOffset) == 0x000058, "Member 'UAnimNotify_RejumpEffect_C::RotationOffset' has a wrong offset!");
static_assert(offsetof(UAnimNotify_RejumpEffect_C, Scale) == 0x000070, "Member 'UAnimNotify_RejumpEffect_C::Scale' has a wrong offset!");
static_assert(offsetof(UAnimNotify_RejumpEffect_C, bAbsoluteScale) == 0x000088, "Member 'UAnimNotify_RejumpEffect_C::bAbsoluteScale' has a wrong offset!");
static_assert(offsetof(UAnimNotify_RejumpEffect_C, bAttached) == 0x000089, "Member 'UAnimNotify_RejumpEffect_C::bAttached' has a wrong offset!");
static_assert(offsetof(UAnimNotify_RejumpEffect_C, SocketName) == 0x00008C, "Member 'UAnimNotify_RejumpEffect_C::SocketName' has a wrong offset!");

}

