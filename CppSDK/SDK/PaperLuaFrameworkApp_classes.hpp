﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PaperLuaFrameworkApp

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "PaperLuaFrameworkApp_structs.hpp"
#include "PaperLuaFrameworkBase_classes.hpp"


namespace SDK
{

// Class PaperLuaFrameworkApp.PaperDeviceFilterManager
// 0x0080 (0x00A8 - 0x0028)
class UPaperDeviceFilterManager final : public UObject
{
public:
	uint8                                         Pad_28[0x80];                                      // 0x0028(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetDeviceMatchingRulesByJson(const class FString& JsonString);
	bool ShouldFilter();
	bool ShouldForceQuit();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperDeviceFilterManager">();
	}
	static class UPaperDeviceFilterManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperDeviceFilterManager>();
	}
};
static_assert(alignof(UPaperDeviceFilterManager) == 0x000008, "Wrong alignment on UPaperDeviceFilterManager");
static_assert(sizeof(UPaperDeviceFilterManager) == 0x0000A8, "Wrong size on UPaperDeviceFilterManager");

// Class PaperLuaFrameworkApp.PaperHotFixMgr
// 0x0030 (0x0058 - 0x0028)
class UPaperHotFixMgr final : public UObject
{
public:
	uint8                                         Pad_28[0x30];                                      // 0x0028(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ApplyHotFix(const TArray<class FString>& PakFiles);
	void ReloadGamePlayCue();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperHotFixMgr">();
	}
	static class UPaperHotFixMgr* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperHotFixMgr>();
	}
};
static_assert(alignof(UPaperHotFixMgr) == 0x000008, "Wrong alignment on UPaperHotFixMgr");
static_assert(sizeof(UPaperHotFixMgr) == 0x000058, "Wrong size on UPaperHotFixMgr");

// Class PaperLuaFrameworkApp.PaperHotUpdateGameInstance
// 0x0010 (0x01D0 - 0x01C0)
class UPaperHotUpdateGameInstance : public UGameInstance
{
public:
	int32                                         InstanceId;                                        // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1C4[0xC];                                      // 0x01C4(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperHotUpdateGameInstance">();
	}
	static class UPaperHotUpdateGameInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperHotUpdateGameInstance>();
	}
};
static_assert(alignof(UPaperHotUpdateGameInstance) == 0x000008, "Wrong alignment on UPaperHotUpdateGameInstance");
static_assert(sizeof(UPaperHotUpdateGameInstance) == 0x0001D0, "Wrong size on UPaperHotUpdateGameInstance");
static_assert(offsetof(UPaperHotUpdateGameInstance, InstanceId) == 0x0001C0, "Member 'UPaperHotUpdateGameInstance::InstanceId' has a wrong offset!");

// Class PaperLuaFrameworkApp.PaperHotUpdateMgr
// 0x0320 (0x0348 - 0x0028)
class UPaperHotUpdateMgr final : public UObject
{
public:
	TMulticastInlineDelegate<void()>              HotUpdateStartDelegate;                            // 0x0028(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMulticastInlineDelegate<void(bool IsSuccess, const class FString& StatusString)> HotUpdateCompletedDelegate; // 0x0038(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TDelegate<void(bool bSuccess, int32 ResponseCode)> OnHttpRequestContentCompleted;                // 0x0048(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void(bool Success)>                 OnRefreshDynamicKeyComplete;                       // 0x0058(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TDelegate<void()>                             ONGPUOOMDelegate;                                  // 0x0068(0x0010)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PatchedFilesSavePath;                              // 0x0078(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class FString>                           PatchedFiles;                                      // 0x0088(0x0050)(Edit, NativeAccessSpecifierPublic)
	bool                                          bHasSwitchToDefaultGameInstance;                   // 0x00D8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<uint8>                                 RemoteBaseInfoBin;                                 // 0x00E0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                 RemoteDelayInfoBin;                                // 0x00F0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                         BasePakListNames;                                  // 0x0100(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_110[0x50];                                     // 0x0110(0x0050)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<uint8>                                 RemoteFilePakHashMapBin;                           // 0x0160(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                 RemoteIoStoreChunkIdPakHashMapBin;                 // 0x0170(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                 LocalFilePakHashMapBin;                            // 0x0180(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                 LocalIoStoreChunkIdPakHashMapBin;                  // 0x0190(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, struct FFilePakHashST>    RemoteFilePakHash;                                 // 0x01A0(0x0050)(Edit, NativeAccessSpecifierPublic)
	TMap<class FString, struct FFilePakHashST>    LocalFilePakHash;                                  // 0x01F0(0x0050)(Edit, NativeAccessSpecifierPublic)
	class FString                                 VersionKey;                                        // 0x0240(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         FilterPaks;                                        // 0x0250(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                 LocalVersion;                                      // 0x0260(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 RemoteVersion;                                     // 0x0270(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LocalUrl;                                          // 0x0280(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 RemoteUrl;                                         // 0x0290(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         PakStarts;                                         // 0x02A0(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPaperNetworkMgr*                       PaperNetworkMgr;                                   // 0x02B0(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperHotFixMgr*                        PaperHotFixMgr;                                    // 0x02B8(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C0[0x88];                                     // 0x02C0(0x0088)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static bool CopyPaksTo(const class FString& SrcDir, const class FString& SrcPakPattern, const class FString& DstDir);
	static class FName GetHotUpdateCompleteMapName();
	static class FString GetPackageVersion();
	static class FString GetStorePackageVersion();
	static int32 GetUnZipProgress();
	static bool IsEncryptionEnabled();
	static bool IsPaperAccessContentEnabled();
	static bool IsPaperAccessContentInClient();
	static bool IsSigningEnabled();
	static class FString PaperAssetPathToFilePath(const class FString& InAssetPath, bool IsMap);
	static bool UnZipFile(const class FString& SrcZipPath, const class FString& DstDir, const TDelegate<void(bool Success)>& OnEnded);

	void ApplyHotFix();
	void AsyncExtractPakTask(const class FString& DownloadDir, const class FString& Version);
	bool AsyncExtractSoFilesInPakTask(const class FString& DownloadDir, const class FString& Version);
	void BackGroundDeleteDir(const class FString& DeleteDir);
	void BootLauncher();
	void BroadcastOnHotUpdateCompleted(bool IsSuccess, class FString* StatusString);
	void BroadcastOnHotUpdateStart();
	void CheckOldDownloadData(const TArray<class FString>& FlagFiles, const class FString& VersionInfoFile);
	void CleanExpiredPaks();
	void CloseShaderbytecode(const class FString& LibraryName);
	bool CreateDeleteRecordPak(const class FString& LocalVersion_0, const class FString& PatchVersion, const TArray<class FString>& DeleteRecordPakContents);
	void CreateDynamicKeyChain(const class FString& InKeyChainName, const TArray<uint8>& DataBuffer);
	void CreateDynamicKeyChainByBase64String(const class FString& InKeyChainName, const class FString& Base64Data);
	EPakExtractResult ExtractPakFile(const class FString& SrcFilePath, const class FString& DstDir, const class FString& Version, bool bUseMountPoint);
	void GetBaseHashDataTable(bool bSuccess, int32 ResponseCode);
	float GetCheckRepairProgress();
	void GetCmsURL(const class FString& Mode, class FString* URL);
	float GetExtractPaksProgress();
	TArray<class FString> GetKeyChainNonDynamicGroups(const class FString& InKeyChainName);
	class FString GetMicroCodeVersion();
	class FString GetMotherBoardInfo();
	float GetMovePaksProgress();
	void GetNewerPaklistFromFileInfo();
	void GetRemoteFilePakHashMapCacheAsync(const class FString& RemoteVersion_0, const class FString& InRemoteUrl, const class FString& LocalVersion_0, const class FString& InLocalUrl, const class FString& InVersionKey, const TArray<class FString>& InPakStarts, const TArray<class FString>& InFilterPaks, bool InbUseIoStore);
	void GetRemoteHashDataTable(bool bSuccess, int32 ResponseCode);
	void GetSavedPaksInfo(TArray<class FString>* SavedPaksInfo);
	void HotUpdateHashCheckCall(const class FString& Version, TArray<uint8>* InPaperHashStructData, TArray<uint8>* InShaderHashData, TArray<uint8>* InFastPatchData, TArray<class FString>* BlackList);
	bool IsLoadingScreenFinished();
	bool LoadShaderbytecode(const class FString& LibraryName, const class FString& LibraryDir);
	void LoadSinglePakMap(TMap<class FString, class FString>* SinglePakMap);
	void MountAllPakFiles(const class FString& PakFolder, const class FString& CurrentVersion);
	void MovePaksToMountDir(const TMap<class FString, class FString>& MoveTaskTb, bool bNeedReboot);
	bool NeedRebootOrNot(const TArray<class FString>& InstallTags);
	bool NeedRebootOrNotWithFileName(const class FString& InstallFileName);
	bool PatchAllBinaryDiffs(const class FString& PatchVersion, TArray<class FString>* FailedFiles);
	bool PatchFile(const class FString& FilePath, class FString* PatchedFilename, TMap<class FString, class FString>* SinglePakMap, const class FString& LocalVersion_0, const class FString& PatchVersion);
	void PreSerializeVersionInfo(const TMap<class FString, class FString>& VersionStrMap, const class FString& DownloadDir);
	void RefreshDynamicKeyWithGroupIDForAllVersion(const TArray<class FString>& RequestGroupIDs, const TMap<class FString, class FString>& DelayGroups);
	void RefreshDynamicKeyWithGroupIDForCurVersion(const TArray<class FString>& RequestGroupIDs, const class FString& CurVersion);
	void RegisterDynamicKeyChain(const class FString& InKeyChainName);
	void RegularMoveFileTask(const TMap<class FString, class FString>& MoveTaskTb);
	bool ReloadPakReaders();
	void RequestDynamicKeysWithVersions(const TArray<class FString>& Versions);
	void ResetExtractMoveProgress();
	void SaveSinglePakMap(TMap<class FString, class FString>* SinglePakMap);
	void SerializeGroupFromBase64Data(const class FString& InKeyChainName, const class FString& GroupID, const class FString& Base64Data);
	void SerializeGroupFromDataBuffer(const class FString& InKeyChainName, const class FString& GroupID, const TArray<uint8>& GroupDataBuffer);
	void SetAbortAssetCheck(bool InValue);
	void SetCheckRepairProgress(float InCheckRepairProgress);
	void SetDownloadMode(int32 Value);
	void SetDynamicKeyChainHttpBaseURL(const class FString& InHttpBaseURL);
	void SetPSOCacheMaterialQualityLevelAndLevelIDMaskForMobile(int32 QualityLevel, int32 LevelID);
	void SetPSOCacheMaterialQualityLevelMaskForMobile(int32 QualityLevel);
	void SetUrlWithTimeStamp(class FString* URL);
	void SmallestPackageWithBasePak(bool bSuccess, int32 ResponseCode);
	void SmallestPackageWithDelayPak(bool bSuccess, int32 ResponseCode);
	void StartCheckDelay();
	void StartCheckHotUpdate();
	bool SwitchToDefaultGameInstance();
	void SwitchToDefaultGameMode();
	void UnMountAllPakFiles(const class FString& PakFolder);
	void UnMountAndDeleteHotUpdatePaks();
	void UnMountAndDeleteSavedPaks(const TArray<class FString>& PakNameList, bool bCleanFileName, bool bAsyncExecute);
	bool UnMountAndDeleteSavedPaksByPakPrefix(const TArray<class FString>& PakPrefixList);
	void UpdateDelaySinglePakMap(const TArray<class FString>& OldSingleTags, const class FString& LocalVersion_0, const class FString& RemoteVersion_0);
	void WaitForShaderCache(float* Progress);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperHotUpdateMgr">();
	}
	static class UPaperHotUpdateMgr* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperHotUpdateMgr>();
	}
};
static_assert(alignof(UPaperHotUpdateMgr) == 0x000008, "Wrong alignment on UPaperHotUpdateMgr");
static_assert(sizeof(UPaperHotUpdateMgr) == 0x000348, "Wrong size on UPaperHotUpdateMgr");
static_assert(offsetof(UPaperHotUpdateMgr, HotUpdateStartDelegate) == 0x000028, "Member 'UPaperHotUpdateMgr::HotUpdateStartDelegate' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, HotUpdateCompletedDelegate) == 0x000038, "Member 'UPaperHotUpdateMgr::HotUpdateCompletedDelegate' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, OnHttpRequestContentCompleted) == 0x000048, "Member 'UPaperHotUpdateMgr::OnHttpRequestContentCompleted' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, OnRefreshDynamicKeyComplete) == 0x000058, "Member 'UPaperHotUpdateMgr::OnRefreshDynamicKeyComplete' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, ONGPUOOMDelegate) == 0x000068, "Member 'UPaperHotUpdateMgr::ONGPUOOMDelegate' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, PatchedFilesSavePath) == 0x000078, "Member 'UPaperHotUpdateMgr::PatchedFilesSavePath' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, PatchedFiles) == 0x000088, "Member 'UPaperHotUpdateMgr::PatchedFiles' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, bHasSwitchToDefaultGameInstance) == 0x0000D8, "Member 'UPaperHotUpdateMgr::bHasSwitchToDefaultGameInstance' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, RemoteBaseInfoBin) == 0x0000E0, "Member 'UPaperHotUpdateMgr::RemoteBaseInfoBin' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, RemoteDelayInfoBin) == 0x0000F0, "Member 'UPaperHotUpdateMgr::RemoteDelayInfoBin' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, BasePakListNames) == 0x000100, "Member 'UPaperHotUpdateMgr::BasePakListNames' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, RemoteFilePakHashMapBin) == 0x000160, "Member 'UPaperHotUpdateMgr::RemoteFilePakHashMapBin' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, RemoteIoStoreChunkIdPakHashMapBin) == 0x000170, "Member 'UPaperHotUpdateMgr::RemoteIoStoreChunkIdPakHashMapBin' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, LocalFilePakHashMapBin) == 0x000180, "Member 'UPaperHotUpdateMgr::LocalFilePakHashMapBin' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, LocalIoStoreChunkIdPakHashMapBin) == 0x000190, "Member 'UPaperHotUpdateMgr::LocalIoStoreChunkIdPakHashMapBin' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, RemoteFilePakHash) == 0x0001A0, "Member 'UPaperHotUpdateMgr::RemoteFilePakHash' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, LocalFilePakHash) == 0x0001F0, "Member 'UPaperHotUpdateMgr::LocalFilePakHash' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, VersionKey) == 0x000240, "Member 'UPaperHotUpdateMgr::VersionKey' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, FilterPaks) == 0x000250, "Member 'UPaperHotUpdateMgr::FilterPaks' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, LocalVersion) == 0x000260, "Member 'UPaperHotUpdateMgr::LocalVersion' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, RemoteVersion) == 0x000270, "Member 'UPaperHotUpdateMgr::RemoteVersion' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, LocalUrl) == 0x000280, "Member 'UPaperHotUpdateMgr::LocalUrl' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, RemoteUrl) == 0x000290, "Member 'UPaperHotUpdateMgr::RemoteUrl' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, PakStarts) == 0x0002A0, "Member 'UPaperHotUpdateMgr::PakStarts' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, PaperNetworkMgr) == 0x0002B0, "Member 'UPaperHotUpdateMgr::PaperNetworkMgr' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateMgr, PaperHotFixMgr) == 0x0002B8, "Member 'UPaperHotUpdateMgr::PaperHotFixMgr' has a wrong offset!");

// Class PaperLuaFrameworkApp.PaperHotUpdateRpc
// 0x0028 (0x0050 - 0x0028)
class UPaperHotUpdateRpc final : public UObject
{
public:
	uint8                                         Pad_28[0x28];                                      // 0x0028(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class FString GetServiceIPWithPort();
	bool StartListening();
	bool StopListening();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperHotUpdateRpc">();
	}
	static class UPaperHotUpdateRpc* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperHotUpdateRpc>();
	}
};
static_assert(alignof(UPaperHotUpdateRpc) == 0x000008, "Wrong alignment on UPaperHotUpdateRpc");
static_assert(sizeof(UPaperHotUpdateRpc) == 0x000050, "Wrong size on UPaperHotUpdateRpc");

// Class PaperLuaFrameworkApp.PaperHotUpdateRuntimeBGCommandlet
// 0x0018 (0x0098 - 0x0080)
class UPaperHotUpdateRuntimeBGCommandlet final : public UCommandlet
{
public:
	uint8                                         Pad_80[0x18];                                      // 0x0080(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnHotUpdateCompleted(bool IsSuccess, const class FString& StatusString);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperHotUpdateRuntimeBGCommandlet">();
	}
	static class UPaperHotUpdateRuntimeBGCommandlet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperHotUpdateRuntimeBGCommandlet>();
	}
};
static_assert(alignof(UPaperHotUpdateRuntimeBGCommandlet) == 0x000008, "Wrong alignment on UPaperHotUpdateRuntimeBGCommandlet");
static_assert(sizeof(UPaperHotUpdateRuntimeBGCommandlet) == 0x000098, "Wrong size on UPaperHotUpdateRuntimeBGCommandlet");

// Class PaperLuaFrameworkApp.CMSConfigProvider
// 0x0000 (0x0028 - 0x0028)
class UCMSConfigProvider : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CMSConfigProvider">();
	}
	static class UCMSConfigProvider* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCMSConfigProvider>();
	}
};
static_assert(alignof(UCMSConfigProvider) == 0x000008, "Wrong alignment on UCMSConfigProvider");
static_assert(sizeof(UCMSConfigProvider) == 0x000028, "Wrong size on UCMSConfigProvider");

// Class PaperLuaFrameworkApp.PaperHotUpdateRuntimeSettings
// 0x0158 (0x0180 - 0x0028)
class UPaperHotUpdateRuntimeSettings final : public UObject
{
public:
	class FString                                 StartMapOptions;                                   // 0x0028(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CompleteMapOptions;                                // 0x0038(0x0010)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        HotUpdateStartMap;                                 // 0x0048(0x0020)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        HotUpdateGameMode;                                 // 0x0068(0x0020)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        HotUpdateCompleteMap;                              // 0x0088(0x0020)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         RebootDirs;                                        // 0x00A8(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                          bEnablePaperAccessContent;                         // 0x00B8(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnablePaperDynamicKeys;                           // 0x00B9(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnablePaperSplitResource;                         // 0x00BA(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPaperAccessContentInClient;                       // 0x00BB(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCMSConfig                             CMSConfig;                                         // 0x00C0(0x00B0)(Edit, Config, NativeAccessSpecifierPublic)
	class FString                                 CMSProviderClass;                                  // 0x0170(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperHotUpdateRuntimeSettings">();
	}
	static class UPaperHotUpdateRuntimeSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperHotUpdateRuntimeSettings>();
	}
};
static_assert(alignof(UPaperHotUpdateRuntimeSettings) == 0x000008, "Wrong alignment on UPaperHotUpdateRuntimeSettings");
static_assert(sizeof(UPaperHotUpdateRuntimeSettings) == 0x000180, "Wrong size on UPaperHotUpdateRuntimeSettings");
static_assert(offsetof(UPaperHotUpdateRuntimeSettings, StartMapOptions) == 0x000028, "Member 'UPaperHotUpdateRuntimeSettings::StartMapOptions' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateRuntimeSettings, CompleteMapOptions) == 0x000038, "Member 'UPaperHotUpdateRuntimeSettings::CompleteMapOptions' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateRuntimeSettings, HotUpdateStartMap) == 0x000048, "Member 'UPaperHotUpdateRuntimeSettings::HotUpdateStartMap' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateRuntimeSettings, HotUpdateGameMode) == 0x000068, "Member 'UPaperHotUpdateRuntimeSettings::HotUpdateGameMode' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateRuntimeSettings, HotUpdateCompleteMap) == 0x000088, "Member 'UPaperHotUpdateRuntimeSettings::HotUpdateCompleteMap' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateRuntimeSettings, RebootDirs) == 0x0000A8, "Member 'UPaperHotUpdateRuntimeSettings::RebootDirs' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateRuntimeSettings, bEnablePaperAccessContent) == 0x0000B8, "Member 'UPaperHotUpdateRuntimeSettings::bEnablePaperAccessContent' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateRuntimeSettings, bEnablePaperDynamicKeys) == 0x0000B9, "Member 'UPaperHotUpdateRuntimeSettings::bEnablePaperDynamicKeys' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateRuntimeSettings, bEnablePaperSplitResource) == 0x0000BA, "Member 'UPaperHotUpdateRuntimeSettings::bEnablePaperSplitResource' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateRuntimeSettings, bPaperAccessContentInClient) == 0x0000BB, "Member 'UPaperHotUpdateRuntimeSettings::bPaperAccessContentInClient' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateRuntimeSettings, CMSConfig) == 0x0000C0, "Member 'UPaperHotUpdateRuntimeSettings::CMSConfig' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateRuntimeSettings, CMSProviderClass) == 0x000170, "Member 'UPaperHotUpdateRuntimeSettings::CMSProviderClass' has a wrong offset!");

// Class PaperLuaFrameworkApp.PaperHotUpdateSubsystem
// 0x0020 (0x0060 - 0x0040)
class UPaperHotUpdateSubsystem final : public UPaperGameInstanceSubsystemBase
{
public:
	class UPaperHotUpdateMgr*                     PaperHotUpdateMgr;                                 // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperHotUpdateRpc*                     PaperHotUpdateRpc;                                 // 0x0048(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPaperDeviceFilterManager*              PaperDeviceFilterManager;                          // 0x0050(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_58[0x8];                                       // 0x0058(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class UPaperDeviceFilterManager* GetPaperDeviceFilterManager() const;
	class UPaperHotUpdateMgr* GetPaperHotUpdateMgr() const;
	class UPaperHotUpdateRpc* GetPaperHotUpdateRpc() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperHotUpdateSubsystem">();
	}
	static class UPaperHotUpdateSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperHotUpdateSubsystem>();
	}
};
static_assert(alignof(UPaperHotUpdateSubsystem) == 0x000008, "Wrong alignment on UPaperHotUpdateSubsystem");
static_assert(sizeof(UPaperHotUpdateSubsystem) == 0x000060, "Wrong size on UPaperHotUpdateSubsystem");
static_assert(offsetof(UPaperHotUpdateSubsystem, PaperHotUpdateMgr) == 0x000040, "Member 'UPaperHotUpdateSubsystem::PaperHotUpdateMgr' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateSubsystem, PaperHotUpdateRpc) == 0x000048, "Member 'UPaperHotUpdateSubsystem::PaperHotUpdateRpc' has a wrong offset!");
static_assert(offsetof(UPaperHotUpdateSubsystem, PaperDeviceFilterManager) == 0x000050, "Member 'UPaperHotUpdateSubsystem::PaperDeviceFilterManager' has a wrong offset!");

// Class PaperLuaFrameworkApp.PaperPrivacyManager
// 0x0000 (0x0028 - 0x0028)
class UPaperPrivacyManager final : public UObject
{
public:
	static void EnableMotionSensor(bool bEnable);
	static void LateInitSensors();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PaperPrivacyManager">();
	}
	static class UPaperPrivacyManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaperPrivacyManager>();
	}
};
static_assert(alignof(UPaperPrivacyManager) == 0x000008, "Wrong alignment on UPaperPrivacyManager");
static_assert(sizeof(UPaperPrivacyManager) == 0x000028, "Wrong size on UPaperPrivacyManager");

}

