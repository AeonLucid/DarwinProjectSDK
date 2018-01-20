#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinPlayerNumber_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinPlayerNumber.DarwinPlayerNumber_C.Initialize
struct UDarwinPlayerNumber_C_Initialize_Params
{
	int                                                PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPlayerNumber.DarwinPlayerNumber_C.EventUpdatePlayerGradient
struct UDarwinPlayerNumber_C_EventUpdatePlayerGradient_Params
{
	struct FDarwinColorGradient*                       payerGradient;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPlayerNumber.DarwinPlayerNumber_C.EventUpdatePlayerIndex
struct UDarwinPlayerNumber_C_EventUpdatePlayerIndex_Params
{
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               playerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPlayerNumber.DarwinPlayerNumber_C.ExecuteUbergraph_DarwinPlayerNumber
struct UDarwinPlayerNumber_C_ExecuteUbergraph_DarwinPlayerNumber_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
