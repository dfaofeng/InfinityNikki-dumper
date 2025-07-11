﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CheckPointActorBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "X6Game_classes.hpp"
#include "EnumCheckpointStateType_structs.hpp"
#include "X6StateMachine_structs.hpp"
#include "ECombatStimulateType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CheckPointActorBase.BP_CheckPointActorBase_C
// 0x0088 (0x04C0 - 0x0438)
class ABP_CheckPointActorBase_C : public AX6Actor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0438(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        TeleportDirectionArrow;                            // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TeleportComponent_C*                BP_TeleportComponent;                              // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCheckpointStateMachine_C*              CheckpointStateMachine;                            // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        MarkerComponent;                                   // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_HandleInteractionLogic_C*           BP_HandleInteractionLogic;                         // 0x0460(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractiveActorComponent_C*        BP_InteractiveActorComponent;                      // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        ForwardVectorArrow;                                // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          InteractCollisionBox;                              // 0x0478(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         CheckPointID;                                      // 0x0488(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_48C[0x4];                                      // 0x048C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrentPose;                                       // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsActivate;                                        // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLastActivate;                                    // 0x04A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A2[0x6];                                      // 0x04A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TeleportTag;                                       // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          BP_bWorld;                                         // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BP_bInner;                                         // 0x04B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetIsLastActivate(bool opt);
	void SetIsActivate(bool opt);
	void SetCurrentAnim(const class FString& Pose);
	void ServerInit(bool bServer);
	void ExecuteUbergraph_BP_CheckPointActorBase(int32 EntryPoint);
	void BP_SetStateMachine(EnumCheckpointStateType StateType);
	void BP_SetCanTeleport(bool CanTeleport);
	void BP_OnSkillDetection(ECombatStimulateType Selection);
	void BP_OnServerInit(bool Server);
	void BP_ActiveSkMesh(bool bForce);
	void BndEvt__BP_CheckPointActorBase_CheckpointStateMachine_K2Node_ComponentBoundEvent_1_SM_BP_BeginState__DelegateSignature(class UX6StateMachineComponent* TriggerComponent, uint8 StateID, uint8 PreviousStateID, class FName StateName, EFSM_Transition Transition);

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CheckPointActorBase_C">();
	}
	static class ABP_CheckPointActorBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CheckPointActorBase_C>();
	}
};
static_assert(alignof(ABP_CheckPointActorBase_C) == 0x000008, "Wrong alignment on ABP_CheckPointActorBase_C");
static_assert(sizeof(ABP_CheckPointActorBase_C) == 0x0004C0, "Wrong size on ABP_CheckPointActorBase_C");
static_assert(offsetof(ABP_CheckPointActorBase_C, UberGraphFrame) == 0x000438, "Member 'ABP_CheckPointActorBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_CheckPointActorBase_C, TeleportDirectionArrow) == 0x000440, "Member 'ABP_CheckPointActorBase_C::TeleportDirectionArrow' has a wrong offset!");
static_assert(offsetof(ABP_CheckPointActorBase_C, BP_TeleportComponent) == 0x000448, "Member 'ABP_CheckPointActorBase_C::BP_TeleportComponent' has a wrong offset!");
static_assert(offsetof(ABP_CheckPointActorBase_C, CheckpointStateMachine) == 0x000450, "Member 'ABP_CheckPointActorBase_C::CheckpointStateMachine' has a wrong offset!");
static_assert(offsetof(ABP_CheckPointActorBase_C, MarkerComponent) == 0x000458, "Member 'ABP_CheckPointActorBase_C::MarkerComponent' has a wrong offset!");
static_assert(offsetof(ABP_CheckPointActorBase_C, BP_HandleInteractionLogic) == 0x000460, "Member 'ABP_CheckPointActorBase_C::BP_HandleInteractionLogic' has a wrong offset!");
static_assert(offsetof(ABP_CheckPointActorBase_C, BP_InteractiveActorComponent) == 0x000468, "Member 'ABP_CheckPointActorBase_C::BP_InteractiveActorComponent' has a wrong offset!");
static_assert(offsetof(ABP_CheckPointActorBase_C, ForwardVectorArrow) == 0x000470, "Member 'ABP_CheckPointActorBase_C::ForwardVectorArrow' has a wrong offset!");
static_assert(offsetof(ABP_CheckPointActorBase_C, InteractCollisionBox) == 0x000478, "Member 'ABP_CheckPointActorBase_C::InteractCollisionBox' has a wrong offset!");
static_assert(offsetof(ABP_CheckPointActorBase_C, DefaultSceneRoot) == 0x000480, "Member 'ABP_CheckPointActorBase_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_CheckPointActorBase_C, CheckPointID) == 0x000488, "Member 'ABP_CheckPointActorBase_C::CheckPointID' has a wrong offset!");
static_assert(offsetof(ABP_CheckPointActorBase_C, CurrentPose) == 0x000490, "Member 'ABP_CheckPointActorBase_C::CurrentPose' has a wrong offset!");
static_assert(offsetof(ABP_CheckPointActorBase_C, IsActivate) == 0x0004A0, "Member 'ABP_CheckPointActorBase_C::IsActivate' has a wrong offset!");
static_assert(offsetof(ABP_CheckPointActorBase_C, IsLastActivate) == 0x0004A1, "Member 'ABP_CheckPointActorBase_C::IsLastActivate' has a wrong offset!");
static_assert(offsetof(ABP_CheckPointActorBase_C, TeleportTag) == 0x0004A8, "Member 'ABP_CheckPointActorBase_C::TeleportTag' has a wrong offset!");
static_assert(offsetof(ABP_CheckPointActorBase_C, BP_bWorld) == 0x0004B8, "Member 'ABP_CheckPointActorBase_C::BP_bWorld' has a wrong offset!");
static_assert(offsetof(ABP_CheckPointActorBase_C, BP_bInner) == 0x0004B9, "Member 'ABP_CheckPointActorBase_C::BP_bInner' has a wrong offset!");

}

