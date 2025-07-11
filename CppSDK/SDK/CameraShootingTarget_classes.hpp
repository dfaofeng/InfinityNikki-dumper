﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CameraShootingTarget

#include "Basic.hpp"

#include "EShootingTargetType_structs.hpp"
#include "X6Game_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CameraShootingTarget.CameraShootingTarget_C
// 0x0060 (0x0498 - 0x0438)
class ACameraShootingTarget_C final : public AX6Actor
{
public:
	class UBoxComponent*                          CameraShootingTargetCollisiong;                    // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractiveActorComponent_C*        BP_InteractiveActorComponent;                      // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	EShootingTargetType                           ShootTargetType;                                   // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_451[0x7];                                      // 0x0451(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   StageOneText;                                      // 0x0458(0x0010)(Edit, BlueprintVisible)
	class FString                                 Tag;                                               // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 IgnoreCollisionActorsLayerID;                      // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<int64>                                 SpawnerID;                                         // 0x0488(0x0010)(Edit, BlueprintVisible)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CameraShootingTarget_C">();
	}
	static class ACameraShootingTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraShootingTarget_C>();
	}
};
static_assert(alignof(ACameraShootingTarget_C) == 0x000008, "Wrong alignment on ACameraShootingTarget_C");
static_assert(sizeof(ACameraShootingTarget_C) == 0x000498, "Wrong size on ACameraShootingTarget_C");
static_assert(offsetof(ACameraShootingTarget_C, CameraShootingTargetCollisiong) == 0x000438, "Member 'ACameraShootingTarget_C::CameraShootingTargetCollisiong' has a wrong offset!");
static_assert(offsetof(ACameraShootingTarget_C, BP_InteractiveActorComponent) == 0x000440, "Member 'ACameraShootingTarget_C::BP_InteractiveActorComponent' has a wrong offset!");
static_assert(offsetof(ACameraShootingTarget_C, DefaultSceneRoot) == 0x000448, "Member 'ACameraShootingTarget_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ACameraShootingTarget_C, ShootTargetType) == 0x000450, "Member 'ACameraShootingTarget_C::ShootTargetType' has a wrong offset!");
static_assert(offsetof(ACameraShootingTarget_C, StageOneText) == 0x000458, "Member 'ACameraShootingTarget_C::StageOneText' has a wrong offset!");
static_assert(offsetof(ACameraShootingTarget_C, Tag) == 0x000468, "Member 'ACameraShootingTarget_C::Tag' has a wrong offset!");
static_assert(offsetof(ACameraShootingTarget_C, IgnoreCollisionActorsLayerID) == 0x000478, "Member 'ACameraShootingTarget_C::IgnoreCollisionActorsLayerID' has a wrong offset!");
static_assert(offsetof(ACameraShootingTarget_C, SpawnerID) == 0x000488, "Member 'ACameraShootingTarget_C::SpawnerID' has a wrong offset!");

}

