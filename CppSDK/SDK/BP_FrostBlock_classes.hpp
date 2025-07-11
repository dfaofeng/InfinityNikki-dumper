﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrostBlock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FrostBlock.BP_FrostBlock_C
// 0x0078 (0x0420 - 0x03A8)
class ABP_FrostBlock_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   BlockCollisionMesh;                                // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 BlockOwner;                                        // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        CreateTime;                                        // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D1[0x7];                                      // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LifeTime;                                          // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         BP_StandActors;                                    // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	double                                        WaterDepth;                                        // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                    BlockStaticMeshs;                                  // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        MeshCollisionScaleRate;                            // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ShrinkDuration;                                    // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TickInterval;                                      // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_FrostBlock(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FrostBlock_C">();
	}
	static class ABP_FrostBlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FrostBlock_C>();
	}
};
static_assert(alignof(ABP_FrostBlock_C) == 0x000008, "Wrong alignment on ABP_FrostBlock_C");
static_assert(sizeof(ABP_FrostBlock_C) == 0x000420, "Wrong size on ABP_FrostBlock_C");
static_assert(offsetof(ABP_FrostBlock_C, UberGraphFrame) == 0x0003A8, "Member 'ABP_FrostBlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FrostBlock_C, BlockCollisionMesh) == 0x0003B0, "Member 'ABP_FrostBlock_C::BlockCollisionMesh' has a wrong offset!");
static_assert(offsetof(ABP_FrostBlock_C, DefaultSceneRoot) == 0x0003B8, "Member 'ABP_FrostBlock_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_FrostBlock_C, BlockOwner) == 0x0003C0, "Member 'ABP_FrostBlock_C::BlockOwner' has a wrong offset!");
static_assert(offsetof(ABP_FrostBlock_C, CreateTime) == 0x0003C8, "Member 'ABP_FrostBlock_C::CreateTime' has a wrong offset!");
static_assert(offsetof(ABP_FrostBlock_C, IsActive) == 0x0003D0, "Member 'ABP_FrostBlock_C::IsActive' has a wrong offset!");
static_assert(offsetof(ABP_FrostBlock_C, LifeTime) == 0x0003D8, "Member 'ABP_FrostBlock_C::LifeTime' has a wrong offset!");
static_assert(offsetof(ABP_FrostBlock_C, BP_StandActors) == 0x0003E0, "Member 'ABP_FrostBlock_C::BP_StandActors' has a wrong offset!");
static_assert(offsetof(ABP_FrostBlock_C, WaterDepth) == 0x0003F0, "Member 'ABP_FrostBlock_C::WaterDepth' has a wrong offset!");
static_assert(offsetof(ABP_FrostBlock_C, BlockStaticMeshs) == 0x0003F8, "Member 'ABP_FrostBlock_C::BlockStaticMeshs' has a wrong offset!");
static_assert(offsetof(ABP_FrostBlock_C, MeshCollisionScaleRate) == 0x000408, "Member 'ABP_FrostBlock_C::MeshCollisionScaleRate' has a wrong offset!");
static_assert(offsetof(ABP_FrostBlock_C, ShrinkDuration) == 0x000410, "Member 'ABP_FrostBlock_C::ShrinkDuration' has a wrong offset!");
static_assert(offsetof(ABP_FrostBlock_C, TickInterval) == 0x000418, "Member 'ABP_FrostBlock_C::TickInterval' has a wrong offset!");

}

