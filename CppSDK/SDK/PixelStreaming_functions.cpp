﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PixelStreaming

#include "Basic.hpp"

#include "PixelStreaming_classes.hpp"
#include "PixelStreaming_parameters.hpp"


namespace SDK
{

// Function PixelStreaming.PixelStreamingAudioComponent.IsListeningToPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPixelStreamingAudioComponent::IsListeningToPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PixelStreamingAudioComponent", "IsListeningToPlayer");

	Params::PixelStreamingAudioComponent_IsListeningToPlayer Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PixelStreaming.PixelStreamingAudioComponent.ListenTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    PlayerToListenTo                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPixelStreamingAudioComponent::ListenTo(const class FString& PlayerToListenTo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PixelStreamingAudioComponent", "ListenTo");

	Params::PixelStreamingAudioComponent_ListenTo Parms{};

	Parms.PlayerToListenTo = std::move(PlayerToListenTo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PixelStreaming.PixelStreamingAudioComponent.Reset
// (Final, Native, Public, BlueprintCallable)

void UPixelStreamingAudioComponent::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PixelStreamingAudioComponent", "Reset");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PixelStreaming.PixelStreamingAudioComponent.StreamerListenTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    StreamerId                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    PlayerToListenTo                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPixelStreamingAudioComponent::StreamerListenTo(const class FString& StreamerId, const class FString& PlayerToListenTo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PixelStreamingAudioComponent", "StreamerListenTo");

	Params::PixelStreamingAudioComponent_StreamerListenTo Parms{};

	Parms.StreamerId = std::move(StreamerId);
	Parms.PlayerToListenTo = std::move(PlayerToListenTo);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PixelStreaming.PixelStreamingBlueprints.ForceKeyFrame
// (Final, Native, Static, Public, BlueprintCallable)

void UPixelStreamingBlueprints::ForceKeyFrame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PixelStreamingBlueprints", "ForceKeyFrame");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PixelStreaming.PixelStreamingBlueprints.FreezeFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                       Texture                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelStreamingBlueprints::FreezeFrame(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PixelStreamingBlueprints", "FreezeFrame");

	Params::PixelStreamingBlueprints_FreezeFrame Parms{};

	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PixelStreaming.PixelStreamingBlueprints.GetConnectedPlayers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UPixelStreamingBlueprints::GetConnectedPlayers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PixelStreamingBlueprints", "GetConnectedPlayers");

	Params::PixelStreamingBlueprints_GetConnectedPlayers Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PixelStreaming.PixelStreamingBlueprints.GetDefaultStreamerID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UPixelStreamingBlueprints::GetDefaultStreamerID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PixelStreamingBlueprints", "GetDefaultStreamerID");

	Params::PixelStreamingBlueprints_GetDefaultStreamerID Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PixelStreaming.PixelStreamingBlueprints.GetPixelStreamingDelegates
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPixelStreamingDelegates*         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPixelStreamingDelegates* UPixelStreamingBlueprints::GetPixelStreamingDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PixelStreamingBlueprints", "GetPixelStreamingDelegates");

	Params::PixelStreamingBlueprints_GetPixelStreamingDelegates Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PixelStreaming.PixelStreamingBlueprints.KickPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const class FString&                    playerId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelStreamingBlueprints::KickPlayer(const class FString& playerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PixelStreamingBlueprints", "KickPlayer");

	Params::PixelStreamingBlueprints_KickPlayer Parms{};

	Parms.playerId = std::move(playerId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PixelStreaming.PixelStreamingBlueprints.SendFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const class FString&                    FilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    MimeType                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    FileExtension                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelStreamingBlueprints::SendFile(const class FString& FilePath, const class FString& MimeType, const class FString& FileExtension)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PixelStreamingBlueprints", "SendFile");

	Params::PixelStreamingBlueprints_SendFile Parms{};

	Parms.FilePath = std::move(FilePath);
	Parms.MimeType = std::move(MimeType);
	Parms.FileExtension = std::move(FileExtension);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PixelStreaming.PixelStreamingBlueprints.SendFileAsByteArray
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const TArray<uint8>&                    ByteArray                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// const class FString&                    MimeType                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    FileExtension                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelStreamingBlueprints::SendFileAsByteArray(const TArray<uint8>& ByteArray, const class FString& MimeType, const class FString& FileExtension)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PixelStreamingBlueprints", "SendFileAsByteArray");

	Params::PixelStreamingBlueprints_SendFileAsByteArray Parms{};

	Parms.ByteArray = std::move(ByteArray);
	Parms.MimeType = std::move(MimeType);
	Parms.FileExtension = std::move(FileExtension);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PixelStreaming.PixelStreamingBlueprints.SetPlayerLayerPreference
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const class FString&                    playerId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   SpatialLayerId                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   TemporalLayerId                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelStreamingBlueprints::SetPlayerLayerPreference(const class FString& playerId, int32 SpatialLayerId, int32 TemporalLayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PixelStreamingBlueprints", "SetPlayerLayerPreference");

	Params::PixelStreamingBlueprints_SetPlayerLayerPreference Parms{};

	Parms.playerId = std::move(playerId);
	Parms.SpatialLayerId = SpatialLayerId;
	Parms.TemporalLayerId = TemporalLayerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PixelStreaming.PixelStreamingBlueprints.StreamerFreezeStream
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const class FString&                    StreamerId                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                       Texture                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelStreamingBlueprints::StreamerFreezeStream(const class FString& StreamerId, class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PixelStreamingBlueprints", "StreamerFreezeStream");

	Params::PixelStreamingBlueprints_StreamerFreezeStream Parms{};

	Parms.StreamerId = std::move(StreamerId);
	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PixelStreaming.PixelStreamingBlueprints.StreamerGetConnectedPlayers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const class FString&                    StreamerId                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UPixelStreamingBlueprints::StreamerGetConnectedPlayers(const class FString& StreamerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PixelStreamingBlueprints", "StreamerGetConnectedPlayers");

	Params::PixelStreamingBlueprints_StreamerGetConnectedPlayers Parms{};

	Parms.StreamerId = std::move(StreamerId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function PixelStreaming.PixelStreamingBlueprints.StreamerKickPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const class FString&                    StreamerId                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    playerId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelStreamingBlueprints::StreamerKickPlayer(const class FString& StreamerId, const class FString& playerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PixelStreamingBlueprints", "StreamerKickPlayer");

	Params::PixelStreamingBlueprints_StreamerKickPlayer Parms{};

	Parms.StreamerId = std::move(StreamerId);
	Parms.playerId = std::move(playerId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PixelStreaming.PixelStreamingBlueprints.StreamerSendFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const class FString&                    StreamerId                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    FilePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    MimeType                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    FileExtension                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelStreamingBlueprints::StreamerSendFile(const class FString& StreamerId, const class FString& FilePath, const class FString& MimeType, const class FString& FileExtension)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PixelStreamingBlueprints", "StreamerSendFile");

	Params::PixelStreamingBlueprints_StreamerSendFile Parms{};

	Parms.StreamerId = std::move(StreamerId);
	Parms.FilePath = std::move(FilePath);
	Parms.MimeType = std::move(MimeType);
	Parms.FileExtension = std::move(FileExtension);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PixelStreaming.PixelStreamingBlueprints.StreamerSendFileAsByteArray
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const class FString&                    StreamerId                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const TArray<uint8>&                    ByteArray                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// const class FString&                    MimeType                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    FileExtension                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelStreamingBlueprints::StreamerSendFileAsByteArray(const class FString& StreamerId, const TArray<uint8>& ByteArray, const class FString& MimeType, const class FString& FileExtension)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PixelStreamingBlueprints", "StreamerSendFileAsByteArray");

	Params::PixelStreamingBlueprints_StreamerSendFileAsByteArray Parms{};

	Parms.StreamerId = std::move(StreamerId);
	Parms.ByteArray = std::move(ByteArray);
	Parms.MimeType = std::move(MimeType);
	Parms.FileExtension = std::move(FileExtension);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PixelStreaming.PixelStreamingBlueprints.StreamerSetPlayerLayerPreference
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const class FString&                    StreamerId                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    playerId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   SpatialLayerId                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   TemporalLayerId                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelStreamingBlueprints::StreamerSetPlayerLayerPreference(const class FString& StreamerId, const class FString& playerId, int32 SpatialLayerId, int32 TemporalLayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PixelStreamingBlueprints", "StreamerSetPlayerLayerPreference");

	Params::PixelStreamingBlueprints_StreamerSetPlayerLayerPreference Parms{};

	Parms.StreamerId = std::move(StreamerId);
	Parms.playerId = std::move(playerId);
	Parms.SpatialLayerId = SpatialLayerId;
	Parms.TemporalLayerId = TemporalLayerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PixelStreaming.PixelStreamingBlueprints.StreamerUnfreezeStream
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// const class FString&                    StreamerId                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelStreamingBlueprints::StreamerUnfreezeStream(const class FString& StreamerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PixelStreamingBlueprints", "StreamerUnfreezeStream");

	Params::PixelStreamingBlueprints_StreamerUnfreezeStream Parms{};

	Parms.StreamerId = std::move(StreamerId);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function PixelStreaming.PixelStreamingBlueprints.UnfreezeFrame
// (Final, Native, Static, Public, BlueprintCallable)

void UPixelStreamingBlueprints::UnfreezeFrame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PixelStreamingBlueprints", "UnfreezeFrame");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function PixelStreaming.PixelStreamingInput.AddJsonStringValue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Descriptor                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    FieldName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    StringValue                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                          NewDescriptor                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool*                                   Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelStreamingInput::AddJsonStringValue(const class FString& Descriptor, const class FString& FieldName, const class FString& StringValue, class FString* NewDescriptor, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PixelStreamingInput", "AddJsonStringValue");

	Params::PixelStreamingInput_AddJsonStringValue Parms{};

	Parms.Descriptor = std::move(Descriptor);
	Parms.FieldName = std::move(FieldName);
	Parms.StringValue = std::move(StringValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (NewDescriptor != nullptr)
		*NewDescriptor = std::move(Parms.NewDescriptor);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function PixelStreaming.PixelStreamingInput.GetJsonStringValue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// const class FString&                    Descriptor                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// const class FString&                    FieldName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString*                          StringValue                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool*                                   Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelStreamingInput::GetJsonStringValue(const class FString& Descriptor, const class FString& FieldName, class FString* StringValue, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PixelStreamingInput", "GetJsonStringValue");

	Params::PixelStreamingInput_GetJsonStringValue Parms{};

	Parms.Descriptor = std::move(Descriptor);
	Parms.FieldName = std::move(FieldName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (StringValue != nullptr)
		*StringValue = std::move(Parms.StringValue);

	if (Success != nullptr)
		*Success = Parms.Success;
}


// Function PixelStreaming.PixelStreamingInput.SendPixelStreamingResponse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// const class FString&                    Descriptor                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPixelStreamingInput::SendPixelStreamingResponse(const class FString& Descriptor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PixelStreamingInput", "SendPixelStreamingResponse");

	Params::PixelStreamingInput_SendPixelStreamingResponse Parms{};

	Parms.Descriptor = std::move(Descriptor);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

