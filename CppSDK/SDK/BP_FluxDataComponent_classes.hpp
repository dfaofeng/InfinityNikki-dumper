﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluxDataComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Niagara_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FluxDataComponent.BP_FluxDataComponent_C
// 0x00D8 (0x0180 - 0x00A8)
class UBP_FluxDataComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FVector>                        ReadbackLocations;                                 // 0x00B0(0x0010)(Edit, BlueprintVisible)
	double                                        ReadbackEventInterval;                             // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         CustomReadbackSystem;                              // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          FindWorldSurface;                                  // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAfterReadback;                                   // 0x00D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D2[0x6];                                       // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FluxFluidHeight;                                   // 0x00D8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FluxSurfaceLocation;                               // 0x00E0(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FluxFluidVelocity;                                 // 0x00F8(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void(const TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem)> OnReceiveParticleData; // 0x0110(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          UseGroundMap;                                      // 0x0120(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseWave;                                           // 0x0121(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_122[0x2];                                      // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   OwnerComponentTag;                                 // 0x0124(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OwnerSocketName;                                   // 0x012C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_134[0x4];                                      // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                FluxFluidNormal;                                   // 0x0138(0x0018)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      ExportDataInstance;                                // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 SurfaceActor;                                      // 0x0158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          DrawDebug;                                         // 0x0160(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_161[0x7];                                      // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FBasicParticleData>             ReadbackData;                                      // 0x0168(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        SampleTime;                                        // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Activation(class UActorComponent* Component, bool bReset);
	void ApplyNiagaraParameters();
	void Deactivation(class UActorComponent* Component);
	void ExecuteUbergraph_BP_FluxDataComponent(int32 EntryPoint);
	void Get_Readback_Indexed_Position(int32 Index_0, struct FVector* Location, struct FVector* Velocity, double* Height);
	void InitEventListener();
	void ReadParticleData(const TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveParticleData(const TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const struct FVector& SimulationPositionOffset);
	void ReceiveReadData(const TArray<struct FBasicParticleData>& Data);
	void RemoveEventListener();
	void SetPointData(struct FBasicParticleData& ParticleDataStructure);
	void SetQuadData(TArray<struct FBasicParticleData>& ParticleDataStructure);
	void SetRelativeSamplePoints(TArray<struct FVector>& Points);
	void SetSurfaceActor(const class AActor*& Interface);

	void GetOwnerComponent(class USceneComponent** SceneComponent) const;
	void GetWorldSurface(class AActor** Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FluxDataComponent_C">();
	}
	static class UBP_FluxDataComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FluxDataComponent_C>();
	}
};
static_assert(alignof(UBP_FluxDataComponent_C) == 0x000008, "Wrong alignment on UBP_FluxDataComponent_C");
static_assert(sizeof(UBP_FluxDataComponent_C) == 0x000180, "Wrong size on UBP_FluxDataComponent_C");
static_assert(offsetof(UBP_FluxDataComponent_C, UberGraphFrame) == 0x0000A8, "Member 'UBP_FluxDataComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, ReadbackLocations) == 0x0000B0, "Member 'UBP_FluxDataComponent_C::ReadbackLocations' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, ReadbackEventInterval) == 0x0000C0, "Member 'UBP_FluxDataComponent_C::ReadbackEventInterval' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, CustomReadbackSystem) == 0x0000C8, "Member 'UBP_FluxDataComponent_C::CustomReadbackSystem' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, FindWorldSurface) == 0x0000D0, "Member 'UBP_FluxDataComponent_C::FindWorldSurface' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, IsAfterReadback) == 0x0000D1, "Member 'UBP_FluxDataComponent_C::IsAfterReadback' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, FluxFluidHeight) == 0x0000D8, "Member 'UBP_FluxDataComponent_C::FluxFluidHeight' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, FluxSurfaceLocation) == 0x0000E0, "Member 'UBP_FluxDataComponent_C::FluxSurfaceLocation' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, FluxFluidVelocity) == 0x0000F8, "Member 'UBP_FluxDataComponent_C::FluxFluidVelocity' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, OnReceiveParticleData) == 0x000110, "Member 'UBP_FluxDataComponent_C::OnReceiveParticleData' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, UseGroundMap) == 0x000120, "Member 'UBP_FluxDataComponent_C::UseGroundMap' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, UseWave) == 0x000121, "Member 'UBP_FluxDataComponent_C::UseWave' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, OwnerComponentTag) == 0x000124, "Member 'UBP_FluxDataComponent_C::OwnerComponentTag' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, OwnerSocketName) == 0x00012C, "Member 'UBP_FluxDataComponent_C::OwnerSocketName' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, FluxFluidNormal) == 0x000138, "Member 'UBP_FluxDataComponent_C::FluxFluidNormal' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, ExportDataInstance) == 0x000150, "Member 'UBP_FluxDataComponent_C::ExportDataInstance' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, SurfaceActor) == 0x000158, "Member 'UBP_FluxDataComponent_C::SurfaceActor' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, DrawDebug) == 0x000160, "Member 'UBP_FluxDataComponent_C::DrawDebug' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, ReadbackData) == 0x000168, "Member 'UBP_FluxDataComponent_C::ReadbackData' has a wrong offset!");
static_assert(offsetof(UBP_FluxDataComponent_C, SampleTime) == 0x000178, "Member 'UBP_FluxDataComponent_C::SampleTime' has a wrong offset!");

}

