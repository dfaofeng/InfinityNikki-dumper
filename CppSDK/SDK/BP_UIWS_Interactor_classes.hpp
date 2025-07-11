﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UIWS_Interactor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UIWS_Interactor.BP_UIWS_Interactor_C
// 0x0160 (0x0390 - 0x0230)
class UBP_UIWS_Interactor_C final : public USceneComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          EnableInteractive;                                 // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_UIWS_Manager_C*                     UIWSManager;                                       // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        SpriteSize;                                        // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        IntensityMultiplier;                               // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseOverrideVelocity;                               // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                VelocityOverride;                                  // 0x0260(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ANiagaraActor*>                  Interactors;                                       // 0x0278(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FSoftObjectPath                        HeightRenderNiagara;                               // 0x0288(0x0020)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         Trail;                                             // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        StartPosOffset;                                    // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LinearFadeHeight;                                  // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WaterSpeed;                                        // 0x02C0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLocked;                                           // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D9[0x7];                                      // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           SkeletonSlots;                                     // 0x02E0(0x0010)(Edit, BlueprintVisible)
	class USkeletalMeshComponent*                 SKMeshComp;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        HeightOffset;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStaticInteractor;                                // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StaticInteractSpeed;                               // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DestroyDelay;                                      // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	double                                        MaxSpawnRate;                                      // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          IsFXInteractor;                                    // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_321[0x7];                                      // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                WaveOffset;                                        // 0x0328(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationOffset;                                    // 0x0340(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WaterSpeedEmitterOffsetScale;                      // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            PlayerInteractorScaleCurve;                        // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         InteractorType;                                    // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36C[0x4];                                      // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LastPos;                                           // 0x0370(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceInitEmitterOnCreate;                          // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ChangeInteractorType(int32 NewType);
	void CreateInteractor(class FName SocketName, class USkeletalMeshComponent* SkeletalComp, class AActor** Interactor);
	void CulcForceIntensity(double HeightOffset_0, const struct FVector& Position, double Multiplier, bool OcclutionDetection, double* Intensity, double* UnderWaterDistance, bool* Hit);
	void CulcForceIntensity_Sand(const struct FVector& Start, double* Distance);
	void DisableInteract();
	void ExecuteUbergraph_BP_UIWS_Interactor(int32 EntryPoint);
	void GetPosition(struct FVector* Position);
	void GetSize(double* Size);
	void GetUIWSManagerToRegister(class ABP_UIWS_Manager_C** manager);
	void GetVelocity(struct FVector* Velocity);
	void IsMobilePlatform(bool* Condition);
	void LoadNiagara(class UObject* Loaded);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ReloadInteractor();
	void SetInteractivity(bool NewValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UIWS_Interactor_C">();
	}
	static class UBP_UIWS_Interactor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UIWS_Interactor_C>();
	}
};
static_assert(alignof(UBP_UIWS_Interactor_C) == 0x000010, "Wrong alignment on UBP_UIWS_Interactor_C");
static_assert(sizeof(UBP_UIWS_Interactor_C) == 0x000390, "Wrong size on UBP_UIWS_Interactor_C");
static_assert(offsetof(UBP_UIWS_Interactor_C, UberGraphFrame) == 0x000230, "Member 'UBP_UIWS_Interactor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, EnableInteractive) == 0x000238, "Member 'UBP_UIWS_Interactor_C::EnableInteractive' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, UIWSManager) == 0x000240, "Member 'UBP_UIWS_Interactor_C::UIWSManager' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, SpriteSize) == 0x000248, "Member 'UBP_UIWS_Interactor_C::SpriteSize' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, IntensityMultiplier) == 0x000250, "Member 'UBP_UIWS_Interactor_C::IntensityMultiplier' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, UseOverrideVelocity) == 0x000258, "Member 'UBP_UIWS_Interactor_C::UseOverrideVelocity' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, VelocityOverride) == 0x000260, "Member 'UBP_UIWS_Interactor_C::VelocityOverride' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, Interactors) == 0x000278, "Member 'UBP_UIWS_Interactor_C::Interactors' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, HeightRenderNiagara) == 0x000288, "Member 'UBP_UIWS_Interactor_C::HeightRenderNiagara' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, Trail) == 0x0002A8, "Member 'UBP_UIWS_Interactor_C::Trail' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, StartPosOffset) == 0x0002B0, "Member 'UBP_UIWS_Interactor_C::StartPosOffset' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, LinearFadeHeight) == 0x0002B8, "Member 'UBP_UIWS_Interactor_C::LinearFadeHeight' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, WaterSpeed) == 0x0002C0, "Member 'UBP_UIWS_Interactor_C::WaterSpeed' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, bLocked) == 0x0002D8, "Member 'UBP_UIWS_Interactor_C::bLocked' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, SkeletonSlots) == 0x0002E0, "Member 'UBP_UIWS_Interactor_C::SkeletonSlots' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, SKMeshComp) == 0x0002F0, "Member 'UBP_UIWS_Interactor_C::SKMeshComp' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, HeightOffset) == 0x0002F8, "Member 'UBP_UIWS_Interactor_C::HeightOffset' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, IsStaticInteractor) == 0x000300, "Member 'UBP_UIWS_Interactor_C::IsStaticInteractor' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, StaticInteractSpeed) == 0x000308, "Member 'UBP_UIWS_Interactor_C::StaticInteractSpeed' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, DestroyDelay) == 0x000310, "Member 'UBP_UIWS_Interactor_C::DestroyDelay' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, MaxSpawnRate) == 0x000318, "Member 'UBP_UIWS_Interactor_C::MaxSpawnRate' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, IsFXInteractor) == 0x000320, "Member 'UBP_UIWS_Interactor_C::IsFXInteractor' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, WaveOffset) == 0x000328, "Member 'UBP_UIWS_Interactor_C::WaveOffset' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, LocationOffset) == 0x000340, "Member 'UBP_UIWS_Interactor_C::LocationOffset' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, WaterSpeedEmitterOffsetScale) == 0x000358, "Member 'UBP_UIWS_Interactor_C::WaterSpeedEmitterOffsetScale' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, PlayerInteractorScaleCurve) == 0x000360, "Member 'UBP_UIWS_Interactor_C::PlayerInteractorScaleCurve' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, InteractorType) == 0x000368, "Member 'UBP_UIWS_Interactor_C::InteractorType' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, LastPos) == 0x000370, "Member 'UBP_UIWS_Interactor_C::LastPos' has a wrong offset!");
static_assert(offsetof(UBP_UIWS_Interactor_C, ForceInitEmitterOnCreate) == 0x000388, "Member 'UBP_UIWS_Interactor_C::ForceInitEmitterOnCreate' has a wrong offset!");

}

