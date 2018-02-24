#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InventoryWarmthPack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InventoryWarmthPack.InventoryWarmthPack_C.Construct
struct UInventoryWarmthPack_C_Construct_Params
{
};

// Function InventoryWarmthPack.InventoryWarmthPack_C.EventInputSourceChanged
struct UInventoryWarmthPack_C_EventInputSourceChanged_Params
{
};

// Function InventoryWarmthPack.InventoryWarmthPack_C.EventMenuDPadRight
struct UInventoryWarmthPack_C_EventMenuDPadRight_Params
{
};

// Function InventoryWarmthPack.InventoryWarmthPack_C.EventInventorySlotChanged
struct UInventoryWarmthPack_C_EventInventorySlotChanged_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryWarmthPack.InventoryWarmthPack_C.ExecuteUbergraph_InventoryWarmthPack
struct UInventoryWarmthPack_C_ExecuteUbergraph_InventoryWarmthPack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
