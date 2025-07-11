﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MiniGame

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_MiniGameRoleType_structs.hpp"
#include "X6ExportRuntime_structs.hpp"
#include "X6Game_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MiniGame.BP_MiniGame_C
// 0x0118 (0x0550 - 0x0438)
class ABP_MiniGame_C final : public AX6Actor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0438(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractiveActorComponent_C*        BP_InteractiveActorComponent;                      // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMulticastInlineDelegate<void()>              PostCreated;                                       // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              PostInit;                                          // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              PostStart;                                         // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void(bool IsSuccess)> PostEnd;                                          // 0x0488(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMulticastInlineDelegate<void()>              PostDeinit;                                        // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsInRestart;                                       // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseSpecialPlayerOutBoundary;                      // 0x04A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_MiniGameRoleType                         MiniGameRoleType;                                  // 0x04AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AB[0x5];                                      // 0x04AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FX6SpawnerIDRef                        UnnecessarySpawnerGroupIDRef;                      // 0x04B0(0x0010)(Edit, BlueprintVisible, NoDestructor)
	bool                                          bUseSpecialPlayerOutBoundaryTopDown;               // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C1[0x7];                                      // 0x04C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         BP_UnnecessarySpawnerActors;                       // 0x04C8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          BP_NeedSuitAbillity;                               // 0x04D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4D9[0x7];                                      // 0x04D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULevelSequence*                         BP_MiniGameLevelSequence;                          // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 PlayerStartTag;                                    // 0x04E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 PlayerFinishTag;                                   // 0x04F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          isHideDamiao;                                      // 0x0508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRotateCamera;                                     // 0x0509(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50A[0x6];                                      // 0x050A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LastSyncTime;                                      // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStart;                                           // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BP_bSyncPosition;                                  // 0x0519(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51A[0x6];                                      // 0x051A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMulticastInlineDelegate<void()>              PostInitUnnecessaryGroup;                          // 0x0520(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           ReturnValue;                                       // 0x0530(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bInGroup;                                          // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_539[0x7];                                      // 0x0539(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         GroupID;                                           // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSuccessDeactiveSelf;                             // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SyncLocation();
	void SpawnUnnecessary();
	void SetInRestart(bool State);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void PrintFail();
	void OnStart();
	void OnSpawnFinished_A54188144860CD3130B1879F6F97432E(TArray<class AActor*>& ReturnActor, int64 SpawnerGroupID);
	void OnResume();
	void OnRestart();
	void OnPause();
	void OnInitUnnecessarySpawnerGroup();
	void OnInit();
	void OnEnd();
	void OnDestroy();
	void OnDeInit();
	void OnDeactiveSpawnerGroup_FB03D3184DD49DD6237125A20B652FE2(bool IsSuccess, int64 SpawnerGroupID);
	void OnDeactiveSpawnerGroup_33B6663B49CC633B7D787981678F6280(bool IsSuccess, int64 SpawnerGroupID);
	void OnDeactiveSpawner_79F168B54B47C7613B7F1A80A40E52F7(bool IsSuccess);
	void OnCreate();
	void IsComplete(bool* IsComplete_0);
	void InitGroupInfo(int64 GroupID_0);
	void GetInRestart(bool* State);
	void ExecuteUbergraph_BP_MiniGame(int32 EntryPoint);
	void DestroyUnnecessary();
	void DestorySelf();
	void Complete();
	void CanStartGame(bool* CanStart);
	void BP_PopTip(int32 Type, const class FString& customStr, bool autoHide, int32 Time);
	void BP_OnPlayerOutBoundaryTopDown();
	void BP_OnPlayerOutBoundary();
	void BP_MiniGameChangeScore(int32 ChangeScore);
	void BP_MiniGameChangeGameTime(int32 ChangeGameTime);
	void BP_GetGameCostTime(double* CostTime);
	void BP_GetBuriedData(int32* OutNumber);
	void BP_EnableMarkerWhiteList(TArray<class UBP_Marker_C*>& markerCfgIDArray);
	void BP_DisableMarkerWhiteList();

	class FString GetModuleName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MiniGame_C">();
	}
	static class ABP_MiniGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MiniGame_C>();
	}
};
static_assert(alignof(ABP_MiniGame_C) == 0x000008, "Wrong alignment on ABP_MiniGame_C");
static_assert(sizeof(ABP_MiniGame_C) == 0x000550, "Wrong size on ABP_MiniGame_C");
static_assert(offsetof(ABP_MiniGame_C, UberGraphFrame) == 0x000438, "Member 'ABP_MiniGame_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, Billboard) == 0x000440, "Member 'ABP_MiniGame_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, BP_InteractiveActorComponent) == 0x000448, "Member 'ABP_MiniGame_C::BP_InteractiveActorComponent' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, DefaultSceneRoot) == 0x000450, "Member 'ABP_MiniGame_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, PostCreated) == 0x000458, "Member 'ABP_MiniGame_C::PostCreated' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, PostInit) == 0x000468, "Member 'ABP_MiniGame_C::PostInit' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, PostStart) == 0x000478, "Member 'ABP_MiniGame_C::PostStart' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, PostEnd) == 0x000488, "Member 'ABP_MiniGame_C::PostEnd' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, PostDeinit) == 0x000498, "Member 'ABP_MiniGame_C::PostDeinit' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, IsInRestart) == 0x0004A8, "Member 'ABP_MiniGame_C::IsInRestart' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, bUseSpecialPlayerOutBoundary) == 0x0004A9, "Member 'ABP_MiniGame_C::bUseSpecialPlayerOutBoundary' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, MiniGameRoleType) == 0x0004AA, "Member 'ABP_MiniGame_C::MiniGameRoleType' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, UnnecessarySpawnerGroupIDRef) == 0x0004B0, "Member 'ABP_MiniGame_C::UnnecessarySpawnerGroupIDRef' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, bUseSpecialPlayerOutBoundaryTopDown) == 0x0004C0, "Member 'ABP_MiniGame_C::bUseSpecialPlayerOutBoundaryTopDown' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, BP_UnnecessarySpawnerActors) == 0x0004C8, "Member 'ABP_MiniGame_C::BP_UnnecessarySpawnerActors' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, BP_NeedSuitAbillity) == 0x0004D8, "Member 'ABP_MiniGame_C::BP_NeedSuitAbillity' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, BP_MiniGameLevelSequence) == 0x0004E0, "Member 'ABP_MiniGame_C::BP_MiniGameLevelSequence' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, PlayerStartTag) == 0x0004E8, "Member 'ABP_MiniGame_C::PlayerStartTag' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, PlayerFinishTag) == 0x0004F8, "Member 'ABP_MiniGame_C::PlayerFinishTag' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, isHideDamiao) == 0x000508, "Member 'ABP_MiniGame_C::isHideDamiao' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, bRotateCamera) == 0x000509, "Member 'ABP_MiniGame_C::bRotateCamera' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, LastSyncTime) == 0x000510, "Member 'ABP_MiniGame_C::LastSyncTime' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, IsStart) == 0x000518, "Member 'ABP_MiniGame_C::IsStart' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, BP_bSyncPosition) == 0x000519, "Member 'ABP_MiniGame_C::BP_bSyncPosition' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, PostInitUnnecessaryGroup) == 0x000520, "Member 'ABP_MiniGame_C::PostInitUnnecessaryGroup' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, ReturnValue) == 0x000530, "Member 'ABP_MiniGame_C::ReturnValue' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, bInGroup) == 0x000538, "Member 'ABP_MiniGame_C::bInGroup' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, GroupID) == 0x000540, "Member 'ABP_MiniGame_C::GroupID' has a wrong offset!");
static_assert(offsetof(ABP_MiniGame_C, IsSuccessDeactiveSelf) == 0x000548, "Member 'ABP_MiniGame_C::IsSuccessDeactiveSelf' has a wrong offset!");

}

