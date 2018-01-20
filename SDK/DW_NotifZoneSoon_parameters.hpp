#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifZoneSoon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NotifZoneSoon.NotifZoneSoon_C.Initialize
struct UNotifZoneSoon_C_Initialize_Params
{
	struct FString                                     zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function NotifZoneSoon.NotifZoneSoon_C.Construct
struct UNotifZoneSoon_C_Construct_Params
{
};

// Function NotifZoneSoon.NotifZoneSoon_C.ExecuteUbergraph_NotifZoneSoon
struct UNotifZoneSoon_C_ExecuteUbergraph_NotifZoneSoon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
