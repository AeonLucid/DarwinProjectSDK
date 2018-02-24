#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MalusBonusIconBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MalusBonusIconBP.MalusBonusIconBP_C.Initialize
struct UMalusBonusIconBP_C_Initialize_Params
{
	EDarwinItemTypeEnum                                MalusBonus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MalusBonusIconBP.MalusBonusIconBP_C.EventUpdateMalusBonusTime
struct UMalusBonusIconBP_C_EventUpdateMalusBonusTime_Params
{
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             timeLeftNormalized;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MalusBonusIconBP.MalusBonusIconBP_C.EventMalusBonusEnd
struct UMalusBonusIconBP_C_EventMalusBonusEnd_Params
{
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MalusBonusIconBP.MalusBonusIconBP_C.EventClueNinjaVanish
struct UMalusBonusIconBP_C_EventClueNinjaVanish_Params
{
};

// Function MalusBonusIconBP.MalusBonusIconBP_C.ExecuteUbergraph_MalusBonusIconBP
struct UMalusBonusIconBP_C_ExecuteUbergraph_MalusBonusIconBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
