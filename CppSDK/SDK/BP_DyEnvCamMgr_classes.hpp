﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DyEnvCamMgr

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DyEnvCamMgr.BP_DyEnvCamMgr_C
// 0x0030 (0x03D8 - 0x03A8)
class ABP_DyEnvCamMgr_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                    RimLight;                                          // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    CameraLight;                                       // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        ExtraLightIntensityMul;                            // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ExtraLightSpecularScale;                           // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void SyncCamMgrLocRot();
	void SoftShadowDecal();
	void SetPlayerRimLight(const struct FLinearColor& Color);
	void SetPlayerLigthtColor(const struct FLinearColor& Color);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DyEnvCamMgr(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DyEnvCamMgr_C">();
	}
	static class ABP_DyEnvCamMgr_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DyEnvCamMgr_C>();
	}
};
static_assert(alignof(ABP_DyEnvCamMgr_C) == 0x000008, "Wrong alignment on ABP_DyEnvCamMgr_C");
static_assert(sizeof(ABP_DyEnvCamMgr_C) == 0x0003D8, "Wrong size on ABP_DyEnvCamMgr_C");
static_assert(offsetof(ABP_DyEnvCamMgr_C, UberGraphFrame) == 0x0003A8, "Member 'ABP_DyEnvCamMgr_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DyEnvCamMgr_C, RimLight) == 0x0003B0, "Member 'ABP_DyEnvCamMgr_C::RimLight' has a wrong offset!");
static_assert(offsetof(ABP_DyEnvCamMgr_C, CameraLight) == 0x0003B8, "Member 'ABP_DyEnvCamMgr_C::CameraLight' has a wrong offset!");
static_assert(offsetof(ABP_DyEnvCamMgr_C, DefaultSceneRoot) == 0x0003C0, "Member 'ABP_DyEnvCamMgr_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_DyEnvCamMgr_C, ExtraLightIntensityMul) == 0x0003C8, "Member 'ABP_DyEnvCamMgr_C::ExtraLightIntensityMul' has a wrong offset!");
static_assert(offsetof(ABP_DyEnvCamMgr_C, ExtraLightSpecularScale) == 0x0003D0, "Member 'ABP_DyEnvCamMgr_C::ExtraLightSpecularScale' has a wrong offset!");

}

