﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HDiffPatch

#include "Basic.hpp"


namespace SDK::Params
{

// Function HDiffPatch.FlibHDiffPatchHelper.CreateCompressedDiff
// 0x0038 (0x0038 - 0x0000)
struct FlibHDiffPatchHelper_CreateCompressedDiff final
{
public:
	TArray<uint8>                                 NewData;                                           // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<uint8>                                 OldData;                                           // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<uint8>                                 OutPatch;                                          // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FlibHDiffPatchHelper_CreateCompressedDiff) == 0x000008, "Wrong alignment on FlibHDiffPatchHelper_CreateCompressedDiff");
static_assert(sizeof(FlibHDiffPatchHelper_CreateCompressedDiff) == 0x000038, "Wrong size on FlibHDiffPatchHelper_CreateCompressedDiff");
static_assert(offsetof(FlibHDiffPatchHelper_CreateCompressedDiff, NewData) == 0x000000, "Member 'FlibHDiffPatchHelper_CreateCompressedDiff::NewData' has a wrong offset!");
static_assert(offsetof(FlibHDiffPatchHelper_CreateCompressedDiff, OldData) == 0x000010, "Member 'FlibHDiffPatchHelper_CreateCompressedDiff::OldData' has a wrong offset!");
static_assert(offsetof(FlibHDiffPatchHelper_CreateCompressedDiff, OutPatch) == 0x000020, "Member 'FlibHDiffPatchHelper_CreateCompressedDiff::OutPatch' has a wrong offset!");
static_assert(offsetof(FlibHDiffPatchHelper_CreateCompressedDiff, ReturnValue) == 0x000030, "Member 'FlibHDiffPatchHelper_CreateCompressedDiff::ReturnValue' has a wrong offset!");

// Function HDiffPatch.FlibHDiffPatchHelper.LoadFileToArray
// 0x0020 (0x0020 - 0x0000)
struct FlibHDiffPatchHelper_LoadFileToArray final
{
public:
	class FString                                 InPath;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(FlibHDiffPatchHelper_LoadFileToArray) == 0x000008, "Wrong alignment on FlibHDiffPatchHelper_LoadFileToArray");
static_assert(sizeof(FlibHDiffPatchHelper_LoadFileToArray) == 0x000020, "Wrong size on FlibHDiffPatchHelper_LoadFileToArray");
static_assert(offsetof(FlibHDiffPatchHelper_LoadFileToArray, InPath) == 0x000000, "Member 'FlibHDiffPatchHelper_LoadFileToArray::InPath' has a wrong offset!");
static_assert(offsetof(FlibHDiffPatchHelper_LoadFileToArray, ReturnValue) == 0x000010, "Member 'FlibHDiffPatchHelper_LoadFileToArray::ReturnValue' has a wrong offset!");

// Function HDiffPatch.FlibHDiffPatchHelper.PatchCompressedDiff
// 0x0038 (0x0038 - 0x0000)
struct FlibHDiffPatchHelper_PatchCompressedDiff final
{
public:
	TArray<uint8>                                 OldData;                                           // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<uint8>                                 PatchData;                                         // 0x0010(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<uint8>                                 OutNewData;                                        // 0x0020(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FlibHDiffPatchHelper_PatchCompressedDiff) == 0x000008, "Wrong alignment on FlibHDiffPatchHelper_PatchCompressedDiff");
static_assert(sizeof(FlibHDiffPatchHelper_PatchCompressedDiff) == 0x000038, "Wrong size on FlibHDiffPatchHelper_PatchCompressedDiff");
static_assert(offsetof(FlibHDiffPatchHelper_PatchCompressedDiff, OldData) == 0x000000, "Member 'FlibHDiffPatchHelper_PatchCompressedDiff::OldData' has a wrong offset!");
static_assert(offsetof(FlibHDiffPatchHelper_PatchCompressedDiff, PatchData) == 0x000010, "Member 'FlibHDiffPatchHelper_PatchCompressedDiff::PatchData' has a wrong offset!");
static_assert(offsetof(FlibHDiffPatchHelper_PatchCompressedDiff, OutNewData) == 0x000020, "Member 'FlibHDiffPatchHelper_PatchCompressedDiff::OutNewData' has a wrong offset!");
static_assert(offsetof(FlibHDiffPatchHelper_PatchCompressedDiff, ReturnValue) == 0x000030, "Member 'FlibHDiffPatchHelper_PatchCompressedDiff::ReturnValue' has a wrong offset!");

// Function HDiffPatch.FlibHDiffPatchHelper.SaveArrayToFile
// 0x0028 (0x0028 - 0x0000)
struct FlibHDiffPatchHelper_SaveArrayToFile final
{
public:
	TArray<uint8>                                 InBytes;                                           // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                 InPath;                                            // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FlibHDiffPatchHelper_SaveArrayToFile) == 0x000008, "Wrong alignment on FlibHDiffPatchHelper_SaveArrayToFile");
static_assert(sizeof(FlibHDiffPatchHelper_SaveArrayToFile) == 0x000028, "Wrong size on FlibHDiffPatchHelper_SaveArrayToFile");
static_assert(offsetof(FlibHDiffPatchHelper_SaveArrayToFile, InBytes) == 0x000000, "Member 'FlibHDiffPatchHelper_SaveArrayToFile::InBytes' has a wrong offset!");
static_assert(offsetof(FlibHDiffPatchHelper_SaveArrayToFile, InPath) == 0x000010, "Member 'FlibHDiffPatchHelper_SaveArrayToFile::InPath' has a wrong offset!");
static_assert(offsetof(FlibHDiffPatchHelper_SaveArrayToFile, ReturnValue) == 0x000020, "Member 'FlibHDiffPatchHelper_SaveArrayToFile::ReturnValue' has a wrong offset!");

}

