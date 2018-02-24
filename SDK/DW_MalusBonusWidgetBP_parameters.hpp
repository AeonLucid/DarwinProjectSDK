#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MalusBonusWidgetBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MalusBonusWidgetBP.MalusBonusWidgetBP_C.EventMalusBonusStart
struct UMalusBonusWidgetBP_C_EventMalusBonusStart_Params
{
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MalusBonusWidgetBP.MalusBonusWidgetBP_C.BreakLoop
struct UMalusBonusWidgetBP_C_BreakLoop_Params
{
};

// Function MalusBonusWidgetBP.MalusBonusWidgetBP_C.EventCageHit
struct UMalusBonusWidgetBP_C_EventCageHit_Params
{
	float*                                             oldHPnormalized;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             newHPnormalized;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADarwinCage**                                Cage;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MalusBonusWidgetBP.MalusBonusWidgetBP_C.BreakCageLoop
struct UMalusBonusWidgetBP_C_BreakCageLoop_Params
{
};

// Function MalusBonusWidgetBP.MalusBonusWidgetBP_C.ExecuteUbergraph_MalusBonusWidgetBP
struct UMalusBonusWidgetBP_C_ExecuteUbergraph_MalusBonusWidgetBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
