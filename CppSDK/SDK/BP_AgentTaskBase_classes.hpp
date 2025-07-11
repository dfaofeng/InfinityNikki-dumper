﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AgentTaskBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "X6Game_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AgentTaskBase.BP_AgentTaskBase_C
// 0x0010 (0x0038 - 0x0028)
class UBP_AgentTaskBase_C : public UX6Object
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bAllocateFromObjectPool;                           // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_AgentTaskBase(int32 EntryPoint);
	void OnPop();
	void OnPreCreated();
	void OnPush();
	void ReceiveTickUncheck(class APawn* AgentPawn, double DeltaTime);
	bool RejectRecycle();

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AgentTaskBase_C">();
	}
	static class UBP_AgentTaskBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AgentTaskBase_C>();
	}
};
static_assert(alignof(UBP_AgentTaskBase_C) == 0x000008, "Wrong alignment on UBP_AgentTaskBase_C");
static_assert(sizeof(UBP_AgentTaskBase_C) == 0x000038, "Wrong size on UBP_AgentTaskBase_C");
static_assert(offsetof(UBP_AgentTaskBase_C, UberGraphFrame) == 0x000028, "Member 'UBP_AgentTaskBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AgentTaskBase_C, bAllocateFromObjectPool) == 0x000030, "Member 'UBP_AgentTaskBase_C::bAllocateFromObjectPool' has a wrong offset!");

}

