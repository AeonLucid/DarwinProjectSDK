#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifCraftableToolSpung_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NotifCraftableToolSpung.NotifCraftableToolSpung_C.Initialize
struct UNotifCraftableToolSpung_C_Initialize_Params
{
	int                                                attackerID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                victimID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum                                ItemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NotifCraftableToolSpung.NotifCraftableToolSpung_C.Construct
struct UNotifCraftableToolSpung_C_Construct_Params
{
};

// Function NotifCraftableToolSpung.NotifCraftableToolSpung_C.ExecuteUbergraph_NotifCraftableToolSpung
struct UNotifCraftableToolSpung_C_ExecuteUbergraph_NotifCraftableToolSpung_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
