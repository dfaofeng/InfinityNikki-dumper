﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_BossCombatDlgStruct

#include "Basic.hpp"

#include "F_BossSkillTipConfig_structs.hpp"


namespace SDK
{

// UserDefinedStruct F_BossCombatDlgStruct.F_BossCombatDlgStruct
// 0x00D0 (0x00D0 - 0x0000)
struct FF_BossCombatDlgStruct final
{
public:
	class FString                                 BossName_78_88E525DF480C50B1DC0AB98BCF898197;      // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         CombatStartTipIdList_3_75A042114F077F3E0BA35587753C5B70; // 0x0010(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         DisengageTipIdList_10_777785F545EC7F10F208BD8EA759195C; // 0x0020(0x0010)(Edit, BlueprintVisible)
	double                                        DisengageTipCD_48_35BC2A2441F9E263194E52BA4B046DD4; // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DisengageTipPriority_72_0C62CBD3458DB4D52B4EDEA0C942330A; // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         EnemyVitalityTipIdList_26_0F6A8C794A8307DE6D8616B02765BE23; // 0x0040(0x0010)(Edit, BlueprintVisible)
	double                                        EnemyVitalityTriggleRatio_17_F119F23B482192ED4C90F28F5681EE1B; // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        EnemyVitalityTipCD_46_CC41CB444ED649B58302F6BE40977E26; // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EnemyVitalityTipPriority_73_149C915441C769D9E28669AF813E4CCF; // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         VictoryTipIdList_24_86D6EC414544329BA36832A4B1293D73; // 0x0068(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         OffenselessTipIdList_35_65F2637442037BF3E8BEC9A39D7E2345; // 0x0078(0x0010)(Edit, BlueprintVisible)
	double                                        OffenselessTriggerTime_32_B412F4A349C055945364A4BF1676904D; // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OffenselessTipCD_50_3EF2D4FA46BE6CB7423DE39704D44E56; // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OffenselessTipPriority_74_EA248459497955ED9D845B9A307C37B5; // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         BossHitTipIdList_59_B54F338147A26A2068FFA1A433E39561; // 0x00A0(0x0010)(Edit, BlueprintVisible)
	double                                        BossHitTipCD_63_9FD8054C4B349D6887701EA6CF1EC123;  // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BossHitTipPriority_75_13A3096F4A1DDC2427D6E78D9F3F5CC0; // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FF_BossSkillTipConfig>          BossSkillTipList_56_36C4DB26414F062FF9A9DFA23B8F37B7; // 0x00C0(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FF_BossCombatDlgStruct) == 0x000008, "Wrong alignment on FF_BossCombatDlgStruct");
static_assert(sizeof(FF_BossCombatDlgStruct) == 0x0000D0, "Wrong size on FF_BossCombatDlgStruct");
static_assert(offsetof(FF_BossCombatDlgStruct, BossName_78_88E525DF480C50B1DC0AB98BCF898197) == 0x000000, "Member 'FF_BossCombatDlgStruct::BossName_78_88E525DF480C50B1DC0AB98BCF898197' has a wrong offset!");
static_assert(offsetof(FF_BossCombatDlgStruct, CombatStartTipIdList_3_75A042114F077F3E0BA35587753C5B70) == 0x000010, "Member 'FF_BossCombatDlgStruct::CombatStartTipIdList_3_75A042114F077F3E0BA35587753C5B70' has a wrong offset!");
static_assert(offsetof(FF_BossCombatDlgStruct, DisengageTipIdList_10_777785F545EC7F10F208BD8EA759195C) == 0x000020, "Member 'FF_BossCombatDlgStruct::DisengageTipIdList_10_777785F545EC7F10F208BD8EA759195C' has a wrong offset!");
static_assert(offsetof(FF_BossCombatDlgStruct, DisengageTipCD_48_35BC2A2441F9E263194E52BA4B046DD4) == 0x000030, "Member 'FF_BossCombatDlgStruct::DisengageTipCD_48_35BC2A2441F9E263194E52BA4B046DD4' has a wrong offset!");
static_assert(offsetof(FF_BossCombatDlgStruct, DisengageTipPriority_72_0C62CBD3458DB4D52B4EDEA0C942330A) == 0x000038, "Member 'FF_BossCombatDlgStruct::DisengageTipPriority_72_0C62CBD3458DB4D52B4EDEA0C942330A' has a wrong offset!");
static_assert(offsetof(FF_BossCombatDlgStruct, EnemyVitalityTipIdList_26_0F6A8C794A8307DE6D8616B02765BE23) == 0x000040, "Member 'FF_BossCombatDlgStruct::EnemyVitalityTipIdList_26_0F6A8C794A8307DE6D8616B02765BE23' has a wrong offset!");
static_assert(offsetof(FF_BossCombatDlgStruct, EnemyVitalityTriggleRatio_17_F119F23B482192ED4C90F28F5681EE1B) == 0x000050, "Member 'FF_BossCombatDlgStruct::EnemyVitalityTriggleRatio_17_F119F23B482192ED4C90F28F5681EE1B' has a wrong offset!");
static_assert(offsetof(FF_BossCombatDlgStruct, EnemyVitalityTipCD_46_CC41CB444ED649B58302F6BE40977E26) == 0x000058, "Member 'FF_BossCombatDlgStruct::EnemyVitalityTipCD_46_CC41CB444ED649B58302F6BE40977E26' has a wrong offset!");
static_assert(offsetof(FF_BossCombatDlgStruct, EnemyVitalityTipPriority_73_149C915441C769D9E28669AF813E4CCF) == 0x000060, "Member 'FF_BossCombatDlgStruct::EnemyVitalityTipPriority_73_149C915441C769D9E28669AF813E4CCF' has a wrong offset!");
static_assert(offsetof(FF_BossCombatDlgStruct, VictoryTipIdList_24_86D6EC414544329BA36832A4B1293D73) == 0x000068, "Member 'FF_BossCombatDlgStruct::VictoryTipIdList_24_86D6EC414544329BA36832A4B1293D73' has a wrong offset!");
static_assert(offsetof(FF_BossCombatDlgStruct, OffenselessTipIdList_35_65F2637442037BF3E8BEC9A39D7E2345) == 0x000078, "Member 'FF_BossCombatDlgStruct::OffenselessTipIdList_35_65F2637442037BF3E8BEC9A39D7E2345' has a wrong offset!");
static_assert(offsetof(FF_BossCombatDlgStruct, OffenselessTriggerTime_32_B412F4A349C055945364A4BF1676904D) == 0x000088, "Member 'FF_BossCombatDlgStruct::OffenselessTriggerTime_32_B412F4A349C055945364A4BF1676904D' has a wrong offset!");
static_assert(offsetof(FF_BossCombatDlgStruct, OffenselessTipCD_50_3EF2D4FA46BE6CB7423DE39704D44E56) == 0x000090, "Member 'FF_BossCombatDlgStruct::OffenselessTipCD_50_3EF2D4FA46BE6CB7423DE39704D44E56' has a wrong offset!");
static_assert(offsetof(FF_BossCombatDlgStruct, OffenselessTipPriority_74_EA248459497955ED9D845B9A307C37B5) == 0x000098, "Member 'FF_BossCombatDlgStruct::OffenselessTipPriority_74_EA248459497955ED9D845B9A307C37B5' has a wrong offset!");
static_assert(offsetof(FF_BossCombatDlgStruct, BossHitTipIdList_59_B54F338147A26A2068FFA1A433E39561) == 0x0000A0, "Member 'FF_BossCombatDlgStruct::BossHitTipIdList_59_B54F338147A26A2068FFA1A433E39561' has a wrong offset!");
static_assert(offsetof(FF_BossCombatDlgStruct, BossHitTipCD_63_9FD8054C4B349D6887701EA6CF1EC123) == 0x0000B0, "Member 'FF_BossCombatDlgStruct::BossHitTipCD_63_9FD8054C4B349D6887701EA6CF1EC123' has a wrong offset!");
static_assert(offsetof(FF_BossCombatDlgStruct, BossHitTipPriority_75_13A3096F4A1DDC2427D6E78D9F3F5CC0) == 0x0000B8, "Member 'FF_BossCombatDlgStruct::BossHitTipPriority_75_13A3096F4A1DDC2427D6E78D9F3F5CC0' has a wrong offset!");
static_assert(offsetof(FF_BossCombatDlgStruct, BossSkillTipList_56_36C4DB26414F062FF9A9DFA23B8F37B7) == 0x0000C0, "Member 'FF_BossCombatDlgStruct::BossSkillTipList_56_36C4DB26414F062FF9A9DFA23B8F37B7' has a wrong offset!");

}

