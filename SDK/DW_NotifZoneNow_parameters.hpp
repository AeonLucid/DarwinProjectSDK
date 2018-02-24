#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifZoneNow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NotifZoneNow.NotifZoneNow_C.Initialize
struct UNotifZoneNow_C_Initialize_Params
{
	struct FString                                     zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function NotifZoneNow.NotifZoneNow_C.Construct
struct UNotifZoneNow_C_Construct_Params
{
};

// Function NotifZoneNow.NotifZoneNow_C.ExecuteUbergraph_NotifZoneNow
struct UNotifZoneNow_C_ExecuteUbergraph_NotifZoneNow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
