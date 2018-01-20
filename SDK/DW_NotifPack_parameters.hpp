#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifPack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NotifPack.NotifPack_C.Initialize
struct UNotifPack_C_Initialize_Params
{
	int                                                Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function NotifPack.NotifPack_C.Construct
struct UNotifPack_C_Construct_Params
{
};

// Function NotifPack.NotifPack_C.ExecuteUbergraph_NotifPack
struct UNotifPack_C_ExecuteUbergraph_NotifPack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
