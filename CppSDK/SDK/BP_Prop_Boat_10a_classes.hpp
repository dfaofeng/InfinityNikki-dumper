﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Prop_Boat_10a

#include "Basic.hpp"

#include "F_FootstepSurfaceTypeSoundStruct_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_Buoyancy_Boat_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Prop_Boat_10a.BP_Prop_Boat_10a_C
// 0x0140 (0x05D0 - 0x0490)
class ABP_Prop_Boat_10a_C final : public ABP_Buoyancy_Boat_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Prop_Boat_10a_C;                 // 0x0490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          ClothSound;                                        // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeshGrassStaticMeshComponent*          MeshGrassStaticMesh6;                              // 0x04A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeshGrassStaticMeshComponent*          MeshGrassStaticMesh4;                              // 0x04A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   INT_Prop_Boat_10a1;                                // 0x04B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   INT_Prop_Boat_10a;                                 // 0x04B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Nature_Shrub_457;                                // 0x04C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Nature_Shrub_458;                                // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Nature_Shrub_453;                                // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Nature_Shrub_454;                                // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeshGrassStaticMeshComponent*          MeshGrassStaticMesh;                               // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeshGrassStaticMeshComponent*          MeshGrassStaticMesh1;                              // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeshGrassStaticMeshComponent*          MeshGrassStaticMesh7;                              // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Nature_Shrub_460;                                // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Nature_Shrub_455;                                // 0x0500(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeshGrassStaticMeshComponent*          MeshGrassStaticMesh5;                              // 0x0508(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Nature_Shrub_464;                                // 0x0510(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Nature_Ivy_46;                                   // 0x0518(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeshGrassStaticMeshComponent*          MeshGrassStaticMesh8;                              // 0x0520(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Nature_Shrub_462;                                // 0x0528(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Nature_Shrub_459;                                // 0x0530(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Nature_Shrub_456;                                // 0x0538(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Nature_Shrub_463;                                // 0x0540(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeshGrassStaticMeshComponent*          MeshGrassStaticMesh2;                              // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Nature_Shrub_465;                                // 0x0550(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Nature_Shrub_466;                                // 0x0558(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Nature_Shrub_467;                                // 0x0560(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   S_Nature_Shrub_461;                                // 0x0568(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMeshGrassStaticMeshComponent*          MeshGrassStaticMesh3;                              // 0x0570(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_SailingShip_Burst;                              // 0x0578(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_SailingShip_Loop;                               // 0x0580(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        NS_VelocityZ;                                      // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NS_AngularVel;                                     // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FF_FootstepSurfaceTypeSoundStruct      SurfaceTypeOverrideValue;                          // 0x0598(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)

public:
	void BndEvt__BP_Prop_Boat_10a_ClothSound_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BP_Prop_Boat_10a_ClothSound_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ExecuteUbergraph_BP_Prop_Boat_10a(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Prop_Boat_10a_C">();
	}
	static class ABP_Prop_Boat_10a_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Prop_Boat_10a_C>();
	}
};
static_assert(alignof(ABP_Prop_Boat_10a_C) == 0x000010, "Wrong alignment on ABP_Prop_Boat_10a_C");
static_assert(sizeof(ABP_Prop_Boat_10a_C) == 0x0005D0, "Wrong size on ABP_Prop_Boat_10a_C");
static_assert(offsetof(ABP_Prop_Boat_10a_C, UberGraphFrame_BP_Prop_Boat_10a_C) == 0x000490, "Member 'ABP_Prop_Boat_10a_C::UberGraphFrame_BP_Prop_Boat_10a_C' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, ClothSound) == 0x000498, "Member 'ABP_Prop_Boat_10a_C::ClothSound' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, MeshGrassStaticMesh6) == 0x0004A0, "Member 'ABP_Prop_Boat_10a_C::MeshGrassStaticMesh6' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, MeshGrassStaticMesh4) == 0x0004A8, "Member 'ABP_Prop_Boat_10a_C::MeshGrassStaticMesh4' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, INT_Prop_Boat_10a1) == 0x0004B0, "Member 'ABP_Prop_Boat_10a_C::INT_Prop_Boat_10a1' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, INT_Prop_Boat_10a) == 0x0004B8, "Member 'ABP_Prop_Boat_10a_C::INT_Prop_Boat_10a' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, S_Nature_Shrub_457) == 0x0004C0, "Member 'ABP_Prop_Boat_10a_C::S_Nature_Shrub_457' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, S_Nature_Shrub_458) == 0x0004C8, "Member 'ABP_Prop_Boat_10a_C::S_Nature_Shrub_458' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, S_Nature_Shrub_453) == 0x0004D0, "Member 'ABP_Prop_Boat_10a_C::S_Nature_Shrub_453' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, S_Nature_Shrub_454) == 0x0004D8, "Member 'ABP_Prop_Boat_10a_C::S_Nature_Shrub_454' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, MeshGrassStaticMesh) == 0x0004E0, "Member 'ABP_Prop_Boat_10a_C::MeshGrassStaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, MeshGrassStaticMesh1) == 0x0004E8, "Member 'ABP_Prop_Boat_10a_C::MeshGrassStaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, MeshGrassStaticMesh7) == 0x0004F0, "Member 'ABP_Prop_Boat_10a_C::MeshGrassStaticMesh7' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, S_Nature_Shrub_460) == 0x0004F8, "Member 'ABP_Prop_Boat_10a_C::S_Nature_Shrub_460' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, S_Nature_Shrub_455) == 0x000500, "Member 'ABP_Prop_Boat_10a_C::S_Nature_Shrub_455' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, MeshGrassStaticMesh5) == 0x000508, "Member 'ABP_Prop_Boat_10a_C::MeshGrassStaticMesh5' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, S_Nature_Shrub_464) == 0x000510, "Member 'ABP_Prop_Boat_10a_C::S_Nature_Shrub_464' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, S_Nature_Ivy_46) == 0x000518, "Member 'ABP_Prop_Boat_10a_C::S_Nature_Ivy_46' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, MeshGrassStaticMesh8) == 0x000520, "Member 'ABP_Prop_Boat_10a_C::MeshGrassStaticMesh8' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, S_Nature_Shrub_462) == 0x000528, "Member 'ABP_Prop_Boat_10a_C::S_Nature_Shrub_462' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, S_Nature_Shrub_459) == 0x000530, "Member 'ABP_Prop_Boat_10a_C::S_Nature_Shrub_459' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, S_Nature_Shrub_456) == 0x000538, "Member 'ABP_Prop_Boat_10a_C::S_Nature_Shrub_456' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, S_Nature_Shrub_463) == 0x000540, "Member 'ABP_Prop_Boat_10a_C::S_Nature_Shrub_463' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, MeshGrassStaticMesh2) == 0x000548, "Member 'ABP_Prop_Boat_10a_C::MeshGrassStaticMesh2' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, S_Nature_Shrub_465) == 0x000550, "Member 'ABP_Prop_Boat_10a_C::S_Nature_Shrub_465' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, S_Nature_Shrub_466) == 0x000558, "Member 'ABP_Prop_Boat_10a_C::S_Nature_Shrub_466' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, S_Nature_Shrub_467) == 0x000560, "Member 'ABP_Prop_Boat_10a_C::S_Nature_Shrub_467' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, S_Nature_Shrub_461) == 0x000568, "Member 'ABP_Prop_Boat_10a_C::S_Nature_Shrub_461' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, MeshGrassStaticMesh3) == 0x000570, "Member 'ABP_Prop_Boat_10a_C::MeshGrassStaticMesh3' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, NS_SailingShip_Burst) == 0x000578, "Member 'ABP_Prop_Boat_10a_C::NS_SailingShip_Burst' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, NS_SailingShip_Loop) == 0x000580, "Member 'ABP_Prop_Boat_10a_C::NS_SailingShip_Loop' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, NS_VelocityZ) == 0x000588, "Member 'ABP_Prop_Boat_10a_C::NS_VelocityZ' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, NS_AngularVel) == 0x000590, "Member 'ABP_Prop_Boat_10a_C::NS_AngularVel' has a wrong offset!");
static_assert(offsetof(ABP_Prop_Boat_10a_C, SurfaceTypeOverrideValue) == 0x000598, "Member 'ABP_Prop_Boat_10a_C::SurfaceTypeOverrideValue' has a wrong offset!");

}

