﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FocusOnTargetAdvancedCamera

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "X6Camera_structs.hpp"
#include "X6Camera_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FocusOnTargetAdvancedCamera.BP_FocusOnTargetAdvancedCamera_C
// 0x0170 (0x2E80 - 0x2D10)
class UBP_FocusOnTargetAdvancedCamera_C final : public UAdvancedCamera
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2D10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FCameraBaseParamsDefine                DefaultCameraConfigDefine;                         // 0x2D18(0x0160)(Edit, BlueprintVisible, NoDestructor)

public:
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_FocusOnTargetAdvancedCamera(int32 EntryPoint);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FocusOnTargetAdvancedCamera_C">();
	}
	static class UBP_FocusOnTargetAdvancedCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_FocusOnTargetAdvancedCamera_C>();
	}
};
static_assert(alignof(UBP_FocusOnTargetAdvancedCamera_C) == 0x000010, "Wrong alignment on UBP_FocusOnTargetAdvancedCamera_C");
static_assert(sizeof(UBP_FocusOnTargetAdvancedCamera_C) == 0x002E80, "Wrong size on UBP_FocusOnTargetAdvancedCamera_C");
static_assert(offsetof(UBP_FocusOnTargetAdvancedCamera_C, UberGraphFrame) == 0x002D10, "Member 'UBP_FocusOnTargetAdvancedCamera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_FocusOnTargetAdvancedCamera_C, DefaultCameraConfigDefine) == 0x002D18, "Member 'UBP_FocusOnTargetAdvancedCamera_C::DefaultCameraConfigDefine' has a wrong offset!");

}

