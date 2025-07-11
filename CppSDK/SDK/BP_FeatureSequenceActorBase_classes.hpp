﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FeatureSequenceActorBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "X6Game_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FeatureSequenceActorBase.BP_FeatureSequenceActorBase_C
// 0x0040 (0x03F0 - 0x03B0)
class ABP_FeatureSequenceActorBase_C : public AX6CustomLevelSequenceActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ParentActor;                                       // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(class AActor* ParentActor)> OnGetParentActor;                      // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          HasParent;                                         // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D9[0x7];                                      // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              OnLoseParentActor;                                 // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_BP_FeatureSequenceActorBase(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FeatureSequenceActorBase_C">();
	}
	static class ABP_FeatureSequenceActorBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FeatureSequenceActorBase_C>();
	}
};
static_assert(alignof(ABP_FeatureSequenceActorBase_C) == 0x000008, "Wrong alignment on ABP_FeatureSequenceActorBase_C");
static_assert(sizeof(ABP_FeatureSequenceActorBase_C) == 0x0003F0, "Wrong size on ABP_FeatureSequenceActorBase_C");
static_assert(offsetof(ABP_FeatureSequenceActorBase_C, UberGraphFrame) == 0x0003B0, "Member 'ABP_FeatureSequenceActorBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FeatureSequenceActorBase_C, DefaultSceneRoot) == 0x0003B8, "Member 'ABP_FeatureSequenceActorBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_FeatureSequenceActorBase_C, ParentActor) == 0x0003C0, "Member 'ABP_FeatureSequenceActorBase_C::ParentActor' has a wrong offset!");
static_assert(offsetof(ABP_FeatureSequenceActorBase_C, OnGetParentActor) == 0x0003C8, "Member 'ABP_FeatureSequenceActorBase_C::OnGetParentActor' has a wrong offset!");
static_assert(offsetof(ABP_FeatureSequenceActorBase_C, HasParent) == 0x0003D8, "Member 'ABP_FeatureSequenceActorBase_C::HasParent' has a wrong offset!");
static_assert(offsetof(ABP_FeatureSequenceActorBase_C, OnLoseParentActor) == 0x0003E0, "Member 'ABP_FeatureSequenceActorBase_C::OnLoseParentActor' has a wrong offset!");

}

