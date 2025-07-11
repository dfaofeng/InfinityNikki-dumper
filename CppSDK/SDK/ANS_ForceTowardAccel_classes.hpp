﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ANS_ForceTowardAccel

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ANS_ForceTowardAccel.ANS_ForceTowardAccel_C
// 0x0008 (0x0038 - 0x0030)
class UANS_ForceTowardAccel_C final : public UAnimNotifyState
{
public:
	bool                                          BP_DisableCameraRotationLag;                       // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	class FString GetModuleName() const;
	class FString GetNotifyName() const;
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, const struct FAnimNotifyEventReference& EventReference) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ANS_ForceTowardAccel_C">();
	}
	static class UANS_ForceTowardAccel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UANS_ForceTowardAccel_C>();
	}
};
static_assert(alignof(UANS_ForceTowardAccel_C) == 0x000008, "Wrong alignment on UANS_ForceTowardAccel_C");
static_assert(sizeof(UANS_ForceTowardAccel_C) == 0x000038, "Wrong size on UANS_ForceTowardAccel_C");
static_assert(offsetof(UANS_ForceTowardAccel_C, BP_DisableCameraRotationLag) == 0x000030, "Member 'UANS_ForceTowardAccel_C::BP_DisableCameraRotationLag' has a wrong offset!");

}

