﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DonAINavigation

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "DonAINavigation_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class DonAINavigation.BTTask_FlyTo
// 0x0120 (0x0190 - 0x0070)
class UBTTask_FlyTo final : public UBTTaskNode
{
public:
	struct FBlackboardKeySelector                 FlightLocationKey;                                 // 0x0070(0x0028)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                 FlightResultKey;                                   // 0x0098(0x0028)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                 KeyToFlipFlopWhenTaskExits;                        // 0x00C0(0x0028)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                         MinimumProximityRequired;                          // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bRecalcPathOnDestinationChanged : 1;               // 0x00EC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RecalculatePathTolerance;                          // 0x00F0(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDoNNavigationQueryParams              QueryParams;                                       // 0x00F8(0x0028)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FBT_FlyToTarget_DebugParams            DebugParams;                                       // 0x0120(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class ADonNavigationManager*                  NavigationManager;                                 // 0x0130(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bTeleportToDestinationUponFailure;                 // 0x0138(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxTimeBeforeTeleport;                             // 0x013C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_140[0x50];                                     // 0x0140(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Pathfinding_OnDynamicCollisionAlert(const struct FDonNavigationDynamicCollisionPayload& Data);
	void Pathfinding_OnFinish(const struct FDoNNavigationQueryData& Data);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BTTask_FlyTo">();
	}
	static class UBTTask_FlyTo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTTask_FlyTo>();
	}
};
static_assert(alignof(UBTTask_FlyTo) == 0x000008, "Wrong alignment on UBTTask_FlyTo");
static_assert(sizeof(UBTTask_FlyTo) == 0x000190, "Wrong size on UBTTask_FlyTo");
static_assert(offsetof(UBTTask_FlyTo, FlightLocationKey) == 0x000070, "Member 'UBTTask_FlyTo::FlightLocationKey' has a wrong offset!");
static_assert(offsetof(UBTTask_FlyTo, FlightResultKey) == 0x000098, "Member 'UBTTask_FlyTo::FlightResultKey' has a wrong offset!");
static_assert(offsetof(UBTTask_FlyTo, KeyToFlipFlopWhenTaskExits) == 0x0000C0, "Member 'UBTTask_FlyTo::KeyToFlipFlopWhenTaskExits' has a wrong offset!");
static_assert(offsetof(UBTTask_FlyTo, MinimumProximityRequired) == 0x0000E8, "Member 'UBTTask_FlyTo::MinimumProximityRequired' has a wrong offset!");
static_assert(offsetof(UBTTask_FlyTo, RecalculatePathTolerance) == 0x0000F0, "Member 'UBTTask_FlyTo::RecalculatePathTolerance' has a wrong offset!");
static_assert(offsetof(UBTTask_FlyTo, QueryParams) == 0x0000F8, "Member 'UBTTask_FlyTo::QueryParams' has a wrong offset!");
static_assert(offsetof(UBTTask_FlyTo, DebugParams) == 0x000120, "Member 'UBTTask_FlyTo::DebugParams' has a wrong offset!");
static_assert(offsetof(UBTTask_FlyTo, NavigationManager) == 0x000130, "Member 'UBTTask_FlyTo::NavigationManager' has a wrong offset!");
static_assert(offsetof(UBTTask_FlyTo, bTeleportToDestinationUponFailure) == 0x000138, "Member 'UBTTask_FlyTo::bTeleportToDestinationUponFailure' has a wrong offset!");
static_assert(offsetof(UBTTask_FlyTo, MaxTimeBeforeTeleport) == 0x00013C, "Member 'UBTTask_FlyTo::MaxTimeBeforeTeleport' has a wrong offset!");

// Class DonAINavigation.DonEnvQueryTest_Navigation
// 0x0010 (0x0208 - 0x01F8)
class UDonEnvQueryTest_Navigation final : public UEnvQueryTest
{
public:
	uint8                                         bSearchRandomLocation : 1;                         // 0x01F8(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1F9[0x3];                                      // 0x01F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RandomLocationMaxAttempts;                         // 0x01FC(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RandomLocationRadius;                              // 0x0200(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_204[0x4];                                      // 0x0204(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DonEnvQueryTest_Navigation">();
	}
	static class UDonEnvQueryTest_Navigation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDonEnvQueryTest_Navigation>();
	}
};
static_assert(alignof(UDonEnvQueryTest_Navigation) == 0x000008, "Wrong alignment on UDonEnvQueryTest_Navigation");
static_assert(sizeof(UDonEnvQueryTest_Navigation) == 0x000208, "Wrong size on UDonEnvQueryTest_Navigation");
static_assert(offsetof(UDonEnvQueryTest_Navigation, RandomLocationMaxAttempts) == 0x0001FC, "Member 'UDonEnvQueryTest_Navigation::RandomLocationMaxAttempts' has a wrong offset!");
static_assert(offsetof(UDonEnvQueryTest_Navigation, RandomLocationRadius) == 0x000200, "Member 'UDonEnvQueryTest_Navigation::RandomLocationRadius' has a wrong offset!");

// Class DonAINavigation.DonNavigationHelper
// 0x0000 (0x0028 - 0x0028)
class UDonNavigationHelper final : public UBlueprintFunctionLibrary
{
public:
	static class ADonNavigationManager* DonNavigationManager(class UObject* WorldContextObject);
	static class ADonNavigationManager* DonNavigationManagerForActor(const class AActor* Actor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DonNavigationHelper">();
	}
	static class UDonNavigationHelper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDonNavigationHelper>();
	}
};
static_assert(alignof(UDonNavigationHelper) == 0x000008, "Wrong alignment on UDonNavigationHelper");
static_assert(sizeof(UDonNavigationHelper) == 0x000028, "Wrong size on UDonNavigationHelper");

// Class DonAINavigation.DonNavigationManager
// 0x71F8 (0x75A0 - 0x03A8)
class alignas(0x10) ADonNavigationManager : public AActor
{
public:
	uint8                                         Pad_3A8[0x204];                                    // 0x03A8(0x0204)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bIsUnbound;                                        // 0x05AC(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5AD[0x3];                                      // 0x05AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        SceneComponent;                                    // 0x05B0(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBillboardComponent*                    Billboard;                                         // 0x05B8(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5C0[0x10];                                     // 0x05C0(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BoundModeVoxelSize;                                // 0x05D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         XGridSize;                                         // 0x05D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         YGridSize;                                         // 0x05D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ZGridSize;                                         // 0x05DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<ECollisionChannel>                     ObstacleQueryChannels;                             // 0x05E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class AActor*>                         ActorsToIgnoreForCollision;                        // 0x05F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 AutoCorrectionGuessList;                           // 0x0600(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                         UnrealPhyxPenetrationDepth;                        // 0x0610(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          PerformCollisionChecksOnStartup;                   // 0x0614(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMultiThreadingEnabled;                            // 0x0615(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_616[0x2];                                      // 0x0616(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxPathSolverIterationsPerTick;                    // 0x0618(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxCollisionSolverIterationsPerTick;               // 0x061C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxPathSolverIterationsOnThread;                   // 0x0620(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxCollisionSolverIterationsOnThread;              // 0x0624(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxPathSolverIterationsPerTick_Unbound;            // 0x0628(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxCollisionSolverIterationsPerTick_Unbound;       // 0x062C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxPathSolverIterationsOnThread_Unbound;           // 0x0630(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxCollisionSolverIterationsOnThread_Unbound;      // 0x0634(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                          WorldBoundaryVisualizer;                           // 0x0638(0x0008)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisplayWorldBoundary;                             // 0x0640(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisplayWorldBoundaryInGame;                       // 0x0641(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_642[0x2];                                      // 0x0642(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DebugVoxelsLineThickness;                          // 0x0644(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRunDebugValidationsForDynamicCollisions;          // 0x0648(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_649[0x6DD7];                                   // 0x0649(0x6DD7)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class AActor*>                           ActiveNavigationTaskOwners;                        // 0x7420(0x0050)(NativeAccessSpecifierPrivate)
	TSet<class UPrimitiveComponent*>              ActiveCollisionTaskOwners;                         // 0x7470(0x0050)(ExportObject, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                         Pad_74C0[0xE0];                                    // 0x74C0(0x00E0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AbortPathfindingTask(class AActor* Actor);
	struct FVector ClampLocationToNavigableWorld(const struct FVector& DesiredLocation, float TaskVoxelSize);
	void ConstructBuilder();
	void Debug_ClearAllVolumes();
	void Debug_DrawAllVolumes(float LineThickness);
	void Debug_DrawVolumesAroundPoint(const struct FVector& Location, int32 CubeSize, float workVoxelSize, bool DrawPersistentLines, float Duration, float LineThickness, bool bAutoInitializeVolumes);
	void Debug_DrawVoxelCollisionProfile(class UPrimitiveComponent* MeshOrPrimitive, float workVoxelSize, bool bDrawPersistent, float Duration);
	void Debug_ToggleWorldBoundaryInGame();
	bool FindPathSolution_StressTesting(class AActor* Actor, const struct FVector& Destination, TArray<struct FVector>* PathSolutionRaw, TArray<struct FVector>* PathSolutionOptimized, const struct FDoNNavigationQueryParams& QueryParams, const struct FDoNNavigationDebugParams& DebugParams);
	struct FVector FindRandomPointAroundOriginInNavWorld(class AActor* NavigationActor, const struct FVector& Origin, float workVoxelSize, float Distance, bool* bFoundValidResult, float MaxDesiredAltitude, float MaxZAngularDispacement, int32 MaxAttempts);
	struct FVector FindRandomPointFromActorInNavWorld(class AActor* Actor, float workVoxelSize, float Distance, bool* bFoundValidResult, float MaxDesiredAltitude, float MaxZAngularDispacement, int32 MaxAttempts);
	bool HasTask(class AActor* Actor);
	bool IsDirectPathLineSweep(class UPrimitiveComponent* CollisionComponent, const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit, bool bFindInitialOverlaps, float CollisionShapeInflation);
	bool IsDirectPathLineTrace(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit, const TArray<class AActor*>& ActorsToIgnore, bool bFindInitialOverlaps);
	bool IsDirectPathSweep(class UPrimitiveComponent* CollisionComponent, const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit, bool bFindInitialOverlaps, float CollisionShapeInflation);
	bool IsLocationBeneathLandscape(const struct FVector& Location, float LineTraceHeight);
	bool IsMeshBoundsWithinNavigableWorld(class UPrimitiveComponent* mesh, float BoundsScaleFactor);
	bool ScheduleDynamicCollisionUpdate(class UPrimitiveComponent* mesh, TDelegate<void(bool bTaskSuccessful)> ResultHandler, float TaskVoxelSize, class FName CustomCacheIdentifier, bool bReplaceExistingTask, bool bDisableCacheUsage, bool bReloadCollisionCache, bool bUseCheapBoundsCollision, float BoundsScaleFactor, bool bForceSynchronousExecution, bool bDrawDebug);
	bool SchedulePathfindingTask(class AActor* Actor, const struct FVector& Destination, const struct FDoNNavigationQueryParams& QueryParams, const struct FDoNNavigationDebugParams& DebugParams, TDelegate<void(const struct FDoNNavigationQueryData& Data)> ResultHandlerDelegate, TDelegate<void(const struct FDonNavigationDynamicCollisionPayload& Data)> DynamicCollisionListener);
	void StopListeningToDynamicCollisionsForPath(TDelegate<void(const struct FDonNavigationDynamicCollisionPayload& Data)> ListenerToClear, const struct FDoNNavigationQueryData& QueryData);
	void StopListeningToDynamicCollisionsForPathIndex(TDelegate<void(const struct FDonNavigationDynamicCollisionPayload& Data)> ListenerToClear, const struct FDoNNavigationQueryData& QueryData, const int32 VolumeIndex);
	void VisualizeDynamicCollisionListeners(TDelegate<void(const struct FDonNavigationDynamicCollisionPayload& Data)> Listener, const struct FDoNNavigationQueryData& QueryData);
	void VisualizeNAVResult(const TArray<struct FVector>& PathSolution, const struct FVector& Source, const struct FVector& Destination, bool Reset, const struct FDoNNavigationDebugParams& DebugParams, const struct FColor& LineColor);

	bool IsLocationWithinNavigableWorld(const struct FVector& DesiredLocation, float TaskVoxelSize) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DonNavigationManager">();
	}
	static class ADonNavigationManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADonNavigationManager>();
	}
};
static_assert(alignof(ADonNavigationManager) == 0x000010, "Wrong alignment on ADonNavigationManager");
static_assert(sizeof(ADonNavigationManager) == 0x0075A0, "Wrong size on ADonNavigationManager");
static_assert(offsetof(ADonNavigationManager, bIsUnbound) == 0x0005AC, "Member 'ADonNavigationManager::bIsUnbound' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, SceneComponent) == 0x0005B0, "Member 'ADonNavigationManager::SceneComponent' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, Billboard) == 0x0005B8, "Member 'ADonNavigationManager::Billboard' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, BoundModeVoxelSize) == 0x0005D0, "Member 'ADonNavigationManager::BoundModeVoxelSize' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, XGridSize) == 0x0005D4, "Member 'ADonNavigationManager::XGridSize' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, YGridSize) == 0x0005D8, "Member 'ADonNavigationManager::YGridSize' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, ZGridSize) == 0x0005DC, "Member 'ADonNavigationManager::ZGridSize' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, ObstacleQueryChannels) == 0x0005E0, "Member 'ADonNavigationManager::ObstacleQueryChannels' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, ActorsToIgnoreForCollision) == 0x0005F0, "Member 'ADonNavigationManager::ActorsToIgnoreForCollision' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, AutoCorrectionGuessList) == 0x000600, "Member 'ADonNavigationManager::AutoCorrectionGuessList' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, UnrealPhyxPenetrationDepth) == 0x000610, "Member 'ADonNavigationManager::UnrealPhyxPenetrationDepth' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, PerformCollisionChecksOnStartup) == 0x000614, "Member 'ADonNavigationManager::PerformCollisionChecksOnStartup' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, bMultiThreadingEnabled) == 0x000615, "Member 'ADonNavigationManager::bMultiThreadingEnabled' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, MaxPathSolverIterationsPerTick) == 0x000618, "Member 'ADonNavigationManager::MaxPathSolverIterationsPerTick' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, MaxCollisionSolverIterationsPerTick) == 0x00061C, "Member 'ADonNavigationManager::MaxCollisionSolverIterationsPerTick' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, MaxPathSolverIterationsOnThread) == 0x000620, "Member 'ADonNavigationManager::MaxPathSolverIterationsOnThread' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, MaxCollisionSolverIterationsOnThread) == 0x000624, "Member 'ADonNavigationManager::MaxCollisionSolverIterationsOnThread' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, MaxPathSolverIterationsPerTick_Unbound) == 0x000628, "Member 'ADonNavigationManager::MaxPathSolverIterationsPerTick_Unbound' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, MaxCollisionSolverIterationsPerTick_Unbound) == 0x00062C, "Member 'ADonNavigationManager::MaxCollisionSolverIterationsPerTick_Unbound' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, MaxPathSolverIterationsOnThread_Unbound) == 0x000630, "Member 'ADonNavigationManager::MaxPathSolverIterationsOnThread_Unbound' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, MaxCollisionSolverIterationsOnThread_Unbound) == 0x000634, "Member 'ADonNavigationManager::MaxCollisionSolverIterationsOnThread_Unbound' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, WorldBoundaryVisualizer) == 0x000638, "Member 'ADonNavigationManager::WorldBoundaryVisualizer' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, bDisplayWorldBoundary) == 0x000640, "Member 'ADonNavigationManager::bDisplayWorldBoundary' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, bDisplayWorldBoundaryInGame) == 0x000641, "Member 'ADonNavigationManager::bDisplayWorldBoundaryInGame' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, DebugVoxelsLineThickness) == 0x000644, "Member 'ADonNavigationManager::DebugVoxelsLineThickness' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, bRunDebugValidationsForDynamicCollisions) == 0x000648, "Member 'ADonNavigationManager::bRunDebugValidationsForDynamicCollisions' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, ActiveNavigationTaskOwners) == 0x007420, "Member 'ADonNavigationManager::ActiveNavigationTaskOwners' has a wrong offset!");
static_assert(offsetof(ADonNavigationManager, ActiveCollisionTaskOwners) == 0x007470, "Member 'ADonNavigationManager::ActiveCollisionTaskOwners' has a wrong offset!");

// Class DonAINavigation.DonNavigationManagerUnbound
// 0x0000 (0x75A0 - 0x75A0)
class ADonNavigationManagerUnbound final : public ADonNavigationManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DonNavigationManagerUnbound">();
	}
	static class ADonNavigationManagerUnbound* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADonNavigationManagerUnbound>();
	}
};
static_assert(alignof(ADonNavigationManagerUnbound) == 0x000010, "Wrong alignment on ADonNavigationManagerUnbound");
static_assert(sizeof(ADonNavigationManagerUnbound) == 0x0075A0, "Wrong size on ADonNavigationManagerUnbound");

// Class DonAINavigation.DonNavigator
// 0x0000 (0x0000 - 0x0000)
class IDonNavigator final : public IInterface
{
public:
	void AddMovementInputCustom(const struct FVector& WorldDirection, float ScaleValue);
	void OnLocomotionAbort();
	void OnLocomotionBegin();
	void OnLocomotionEnd(const bool bLocomotionSuccess);
	void OnNextSegment(const struct FVector& NextPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DonNavigator">();
	}
	static class IDonNavigator* GetDefaultObj()
	{
		return GetDefaultObjImpl<IDonNavigator>();
	}
};
static_assert(alignof(IDonNavigator) == 0x000001, "Wrong alignment on IDonNavigator");
static_assert(sizeof(IDonNavigator) == 0x000001, "Wrong size on IDonNavigator");

}

