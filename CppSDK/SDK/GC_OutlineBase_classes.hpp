﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_OutlineBase

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"
#include "F_OutlineStyleSelector_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_OutlineBase.GC_OutlineBase_C
// 0x0018 (0x0430 - 0x0418)
class AGC_OutlineBase_C : public AGameplayCueNotify_Actor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FF_OutlineStyleSelector>        OutlineStyleSelector;                              // 0x0420(0x0010)(Edit, BlueprintVisible)

public:
	void BP_AddMeshEffect(class UMeshComponent* EffectMesh);
	void BP_RemoveEffect(class UMeshComponent* EffectMesh);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_OutlineBase_C">();
	}
	static class AGC_OutlineBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_OutlineBase_C>();
	}
};
static_assert(alignof(AGC_OutlineBase_C) == 0x000008, "Wrong alignment on AGC_OutlineBase_C");
static_assert(sizeof(AGC_OutlineBase_C) == 0x000430, "Wrong size on AGC_OutlineBase_C");
static_assert(offsetof(AGC_OutlineBase_C, DefaultSceneRoot) == 0x000418, "Member 'AGC_OutlineBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGC_OutlineBase_C, OutlineStyleSelector) == 0x000420, "Member 'AGC_OutlineBase_C::OutlineStyleSelector' has a wrong offset!");

}

