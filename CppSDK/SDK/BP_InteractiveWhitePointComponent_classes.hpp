﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_InteractiveWhitePointComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "X6Game_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_InteractiveWhitePointComponent.BP_InteractiveWhitePointComponent_C
// 0x0010 (0x00B8 - 0x00A8)
class UBP_InteractiveWhitePointComponent_C final : public UX6ActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                           BP_CheckTimerHandle;                               // 0x00B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_InteractiveWhitePointComponent(int32 EntryPoint);
	void BP_TimerCheck();
	void BP_StopCheckTimer();
	void BP_StartCheckTimer();
	void BP_LineTrace(const struct FVector& End, class AActor* WhitePointActor, class AActor* PlayerActor, bool* bHit);
	void BP_CheckTimerIsValid(bool* NewParam);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_InteractiveWhitePointComponent_C">();
	}
	static class UBP_InteractiveWhitePointComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_InteractiveWhitePointComponent_C>();
	}
};
static_assert(alignof(UBP_InteractiveWhitePointComponent_C) == 0x000008, "Wrong alignment on UBP_InteractiveWhitePointComponent_C");
static_assert(sizeof(UBP_InteractiveWhitePointComponent_C) == 0x0000B8, "Wrong size on UBP_InteractiveWhitePointComponent_C");
static_assert(offsetof(UBP_InteractiveWhitePointComponent_C, UberGraphFrame) == 0x0000A8, "Member 'UBP_InteractiveWhitePointComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_InteractiveWhitePointComponent_C, BP_CheckTimerHandle) == 0x0000B0, "Member 'UBP_InteractiveWhitePointComponent_C::BP_CheckTimerHandle' has a wrong offset!");

}

