#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_Inventoryleather_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Inventoryleather.InventoryLeather_C.EventUpdateNumberOfLeather
struct UInventoryLeather_C_EventUpdateNumberOfLeather_Params
{
	int*                                               numberOfLeather;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncrement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Inventoryleather.InventoryLeather_C.ExecuteUbergraph_InventoryLeather
struct UInventoryLeather_C_ExecuteUbergraph_InventoryLeather_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
