﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DissolveFoliageActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "MeshandIndex_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DissolveFoliageActor.BP_DissolveFoliageActor_C
// 0x0078 (0x0420 - 0x03A8)
class ABP_DissolveFoliageActor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_translucent_NewTrack_0_7F6BDC1240D4666F88C517A627895982; // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_translucent__Direction_7F6BDC1240D4666F88C517A627895982; // 0x03C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C5[0x3];                                      // 0x03C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_translucent;                              // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             Materials;                                         // 0x03D0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          Complite;                                          // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsInstancedStaticMesh;                            // 0x03E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3E2[0x6];                                      // 0x03E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UInstancedStaticMeshComponent*          ISM;                                               // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UActorComponent*                        SM;                                                // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FMeshAndIndex                          MeshAndIndex;                                      // 0x03F8(0x0020)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ContainsInstancedReference, ExposeOnSpawn, HasGetValueTypeHash)
	class ABP_PaperDissolveManager_C*             TraceToObjects;                                    // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DissolveFoliageActor(int32 EntryPoint);
	void Opacity(bool On);
	void ReturnFolliage();
	void SetCollision(class UStaticMeshComponent* Old, class UStaticMeshComponent* New);
	void Timeline_translucent__FinishedFunc();
	void Timeline_translucent__UpdateFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DissolveFoliageActor_C">();
	}
	static class ABP_DissolveFoliageActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DissolveFoliageActor_C>();
	}
};
static_assert(alignof(ABP_DissolveFoliageActor_C) == 0x000008, "Wrong alignment on ABP_DissolveFoliageActor_C");
static_assert(sizeof(ABP_DissolveFoliageActor_C) == 0x000420, "Wrong size on ABP_DissolveFoliageActor_C");
static_assert(offsetof(ABP_DissolveFoliageActor_C, UberGraphFrame) == 0x0003A8, "Member 'ABP_DissolveFoliageActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DissolveFoliageActor_C, StaticMesh) == 0x0003B0, "Member 'ABP_DissolveFoliageActor_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_DissolveFoliageActor_C, DefaultSceneRoot) == 0x0003B8, "Member 'ABP_DissolveFoliageActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DissolveFoliageActor_C, Timeline_translucent_NewTrack_0_7F6BDC1240D4666F88C517A627895982) == 0x0003C0, "Member 'ABP_DissolveFoliageActor_C::Timeline_translucent_NewTrack_0_7F6BDC1240D4666F88C517A627895982' has a wrong offset!");
static_assert(offsetof(ABP_DissolveFoliageActor_C, Timeline_translucent__Direction_7F6BDC1240D4666F88C517A627895982) == 0x0003C4, "Member 'ABP_DissolveFoliageActor_C::Timeline_translucent__Direction_7F6BDC1240D4666F88C517A627895982' has a wrong offset!");
static_assert(offsetof(ABP_DissolveFoliageActor_C, Timeline_translucent) == 0x0003C8, "Member 'ABP_DissolveFoliageActor_C::Timeline_translucent' has a wrong offset!");
static_assert(offsetof(ABP_DissolveFoliageActor_C, Materials) == 0x0003D0, "Member 'ABP_DissolveFoliageActor_C::Materials' has a wrong offset!");
static_assert(offsetof(ABP_DissolveFoliageActor_C, Complite) == 0x0003E0, "Member 'ABP_DissolveFoliageActor_C::Complite' has a wrong offset!");
static_assert(offsetof(ABP_DissolveFoliageActor_C, bIsInstancedStaticMesh) == 0x0003E1, "Member 'ABP_DissolveFoliageActor_C::bIsInstancedStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_DissolveFoliageActor_C, ISM) == 0x0003E8, "Member 'ABP_DissolveFoliageActor_C::ISM' has a wrong offset!");
static_assert(offsetof(ABP_DissolveFoliageActor_C, SM) == 0x0003F0, "Member 'ABP_DissolveFoliageActor_C::SM' has a wrong offset!");
static_assert(offsetof(ABP_DissolveFoliageActor_C, MeshAndIndex) == 0x0003F8, "Member 'ABP_DissolveFoliageActor_C::MeshAndIndex' has a wrong offset!");
static_assert(offsetof(ABP_DissolveFoliageActor_C, TraceToObjects) == 0x000418, "Member 'ABP_DissolveFoliageActor_C::TraceToObjects' has a wrong offset!");

}

