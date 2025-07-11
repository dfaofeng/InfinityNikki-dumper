﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PaperFXManager

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PaperFXManager.BP_PaperFXManager_C
// 0x0068 (0x0410 - 0x03A8)
class ABP_PaperFXManager_C final : public AActor
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<struct FSoftObjectPath, int32>           InteractPropsMeshes;                               // 0x03B0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<double>                                InteractPropsLifeTime;                             // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SetFXActive(class AActor* Actor, bool bActive);
	void NotifyFXVisibleChange(int64 ID, bool bVisible);
	void BP_SetInteractPropsLifeTime(class UNiagaraComponent* FXCom);
	void BP_GetInteractPropsMeshIndex(class UStaticMeshComponent* MeshCom, int32* Index_0);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PaperFXManager_C">();
	}
	static class ABP_PaperFXManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PaperFXManager_C>();
	}
};
static_assert(alignof(ABP_PaperFXManager_C) == 0x000008, "Wrong alignment on ABP_PaperFXManager_C");
static_assert(sizeof(ABP_PaperFXManager_C) == 0x000410, "Wrong size on ABP_PaperFXManager_C");
static_assert(offsetof(ABP_PaperFXManager_C, DefaultSceneRoot) == 0x0003A8, "Member 'ABP_PaperFXManager_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PaperFXManager_C, InteractPropsMeshes) == 0x0003B0, "Member 'ABP_PaperFXManager_C::InteractPropsMeshes' has a wrong offset!");
static_assert(offsetof(ABP_PaperFXManager_C, InteractPropsLifeTime) == 0x000400, "Member 'ABP_PaperFXManager_C::InteractPropsLifeTime' has a wrong offset!");

}

