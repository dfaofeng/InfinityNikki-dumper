﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WoolenHeart_LSeq

#include "Basic.hpp"

#include "BP_WoolenHeart_LSeq_classes.hpp"
#include "BP_WoolenHeart_LSeq_parameters.hpp"


namespace SDK
{

// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.AsyncLoadRewardLS
// (BlueprintCallable, BlueprintEvent)

void ABP_WoolenHeart_LSeq_C::AsyncLoadRewardLS()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "AsyncLoadRewardLS");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.BP_AddInvincibleBuff
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WoolenHeart_LSeq_C::BP_AddInvincibleBuff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "BP_AddInvincibleBuff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.BP_CanAdjustPlayerYaw
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   bCanAdjust                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoolenHeart_LSeq_C::BP_CanAdjustPlayerYaw(bool* bCanAdjust)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "BP_CanAdjustPlayerYaw");

	Params::BP_WoolenHeart_LSeq_C_BP_CanAdjustPlayerYaw Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bCanAdjust != nullptr)
		*bCanAdjust = Parms.bCanAdjust;
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.BP_CreateTimeStopZone
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>&                  WhiteListActorArray                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FVector&                   Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Range                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoolenHeart_LSeq_C::BP_CreateTimeStopZone(TArray<class AActor*>& WhiteListActorArray, const struct FVector& Position, double Range)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "BP_CreateTimeStopZone");

	Params::BP_WoolenHeart_LSeq_C_BP_CreateTimeStopZone Parms{};

	Parms.WhiteListActorArray = std::move(WhiteListActorArray);
	Parms.Position = std::move(Position);
	Parms.Range = Range;

	UObject::ProcessEvent(Func, &Parms);

	WhiteListActorArray = std::move(Parms.WhiteListActorArray);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.BP_DestroyTimeStopZone
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WoolenHeart_LSeq_C::BP_DestroyTimeStopZone()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "BP_DestroyTimeStopZone");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.BP_DisableRootMotion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoolenHeart_LSeq_C::BP_DisableRootMotion(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "BP_DisableRootMotion");

	Params::BP_WoolenHeart_LSeq_C_BP_DisableRootMotion Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.BP_FireEventStartRewardUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      Reward_Text                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WoolenHeart_LSeq_C::BP_FireEventStartRewardUI(const class FText& Reward_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "BP_FireEventStartRewardUI");

	Params::BP_WoolenHeart_LSeq_C_BP_FireEventStartRewardUI Parms{};

	Parms.Reward_Text = std::move(Reward_Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.BP_GetHandHoldingPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                          HandHoldingPlayer                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_WoolenHeart_LSeq_C::BP_GetHandHoldingPlayer(class AActor** HandHoldingPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "BP_GetHandHoldingPlayer");

	Params::BP_WoolenHeart_LSeq_C_BP_GetHandHoldingPlayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HandHoldingPlayer != nullptr)
		*HandHoldingPlayer = Parms.HandHoldingPlayer;
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.BP_GetSpawnWoolenHeartSKMeshTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform*                      Transform                                              (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoolenHeart_LSeq_C::BP_GetSpawnWoolenHeartSKMeshTransform(struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "BP_GetSpawnWoolenHeartSKMeshTransform");

	Params::BP_WoolenHeart_LSeq_C_BP_GetSpawnWoolenHeartSKMeshTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.BP_IsPlayingGetWoolenHeartPerformance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int64                                   WoolenHeartEntiyID                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                                   bPlaying                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoolenHeart_LSeq_C::BP_IsPlayingGetWoolenHeartPerformance(int64 WoolenHeartEntiyID, bool* bPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "BP_IsPlayingGetWoolenHeartPerformance");

	Params::BP_WoolenHeart_LSeq_C_BP_IsPlayingGetWoolenHeartPerformance Parms{};

	Parms.WoolenHeartEntiyID = WoolenHeartEntiyID;

	UObject::ProcessEvent(Func, &Parms);

	if (bPlaying != nullptr)
		*bPlaying = Parms.bPlaying;
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.BP_PlayFeatureSequence
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*                   LevelSequenceAsset                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    HideHUD                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TransformActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ALevelSequenceActor**             SequenceActor_0                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer**            SequencePlayer_0                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_WoolenHeart_LSeq_C::BP_PlayFeatureSequence(class ULevelSequence* LevelSequenceAsset, bool HideHUD, class AActor* TransformActor, class ALevelSequenceActor** SequenceActor_0, class ULevelSequencePlayer** SequencePlayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "BP_PlayFeatureSequence");

	Params::BP_WoolenHeart_LSeq_C_BP_PlayFeatureSequence Parms{};

	Parms.LevelSequenceAsset = LevelSequenceAsset;
	Parms.HideHUD = HideHUD;
	Parms.TransformActor = TransformActor;

	UObject::ProcessEvent(Func, &Parms);

	if (SequenceActor_0 != nullptr)
		*SequenceActor_0 = Parms.SequenceActor_0;

	if (SequencePlayer_0 != nullptr)
		*SequencePlayer_0 = Parms.SequencePlayer_0;
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.BP_RemoveInvincibleBuff
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WoolenHeart_LSeq_C::BP_RemoveInvincibleBuff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "BP_RemoveInvincibleBuff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.BP_RestoreRootMotionMode
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WoolenHeart_LSeq_C::BP_RestoreRootMotionMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "BP_RestoreRootMotionMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.BP_SetPlayingGetWoolenHeartPerformance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                                   WoolenHeartEntiyID                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bPlaying                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoolenHeart_LSeq_C::BP_SetPlayingGetWoolenHeartPerformance(int64 WoolenHeartEntiyID, bool bPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "BP_SetPlayingGetWoolenHeartPerformance");

	Params::BP_WoolenHeart_LSeq_C_BP_SetPlayingGetWoolenHeartPerformance Parms{};

	Parms.WoolenHeartEntiyID = WoolenHeartEntiyID;
	Parms.bPlaying = bPlaying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.BP_UpdateWoolenHeartRewardLS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bStartPlay                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoolenHeart_LSeq_C::BP_UpdateWoolenHeartRewardLS(bool bStartPlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "BP_UpdateWoolenHeartRewardLS");

	Params::BP_WoolenHeart_LSeq_C_BP_UpdateWoolenHeartRewardLS Parms{};

	Parms.bStartPlay = bStartPlay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.ExecuteUbergraph_BP_WoolenHeart_LSeq
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoolenHeart_LSeq_C::ExecuteUbergraph_BP_WoolenHeart_LSeq(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "ExecuteUbergraph_BP_WoolenHeart_LSeq");

	Params::BP_WoolenHeart_LSeq_C_ExecuteUbergraph_BP_WoolenHeart_LSeq Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.OnLSBegainPlayNotInHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WoolenHeart_LSeq_C::OnLSBegainPlayNotInHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "OnLSBegainPlayNotInHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.OnLSBeginPlay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WoolenHeart_LSeq_C::OnLSBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "OnLSBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.OnLSFinishPlay
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WoolenHeart_LSeq_C::OnLSFinishPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "OnLSFinishPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.OnLSObjectSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_WoolenHeart_LSeq_C::OnLSObjectSpawned(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "OnLSObjectSpawned");

	Params::BP_WoolenHeart_LSeq_C_OnLSObjectSpawned Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.PushTips
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WoolenHeart_LSeq_C::PushTips()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "PushTips");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WoolenHeart_LSeq_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "ReceiveEndPlay");

	Params::BP_WoolenHeart_LSeq_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.SetPerformacneInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FF_GetWoolenHeartPerformanceInfo&PerformanceInfo_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_WoolenHeart_LSeq_C::SetPerformacneInfo(const struct FF_GetWoolenHeartPerformanceInfo& PerformanceInfo_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "SetPerformacneInfo");

	Params::BP_WoolenHeart_LSeq_C_SetPerformacneInfo Parms{};

	Parms.PerformanceInfo_0 = std::move(PerformanceInfo_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.SetPlayLevelSeq
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*                   PlayLS                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// const TMap<class FName, class AActor*>& AdditionalBindingTag2Actor_0                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WoolenHeart_LSeq_C::SetPlayLevelSeq(class ULevelSequence* PlayLS, const TMap<class FName, class AActor*>& AdditionalBindingTag2Actor_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "SetPlayLevelSeq");

	Params::BP_WoolenHeart_LSeq_C_SetPlayLevelSeq Parms{};

	Parms.PlayLS = PlayLS;
	Parms.AdditionalBindingTag2Actor_0 = std::move(AdditionalBindingTag2Actor_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.SetPlayUIText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FText&                      UIText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WoolenHeart_LSeq_C::SetPlayUIText(const class FText& UIText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "SetPlayUIText");

	Params::BP_WoolenHeart_LSeq_C_SetPlayUIText Parms{};

	Parms.UIText = std::move(UIText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.SetPossessedPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       PossessedPlayer                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_WoolenHeart_LSeq_C::SetPossessedPlayer(class ACharacter* PossessedPlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "SetPossessedPlayer");

	Params::BP_WoolenHeart_LSeq_C_SetPossessedPlayer Parms{};

	Parms.PossessedPlayer = PossessedPlayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WoolenHeart_LSeq.BP_WoolenHeart_LSeq_C.GetModuleName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString ABP_WoolenHeart_LSeq_C::GetModuleName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WoolenHeart_LSeq_C", "GetModuleName");

	Params::BP_WoolenHeart_LSeq_C_GetModuleName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

