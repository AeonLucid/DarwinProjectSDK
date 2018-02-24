#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InventorySpeedPack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InventorySpeedPack.InventorySpeedPack_C.EventInventorySlotChanged
struct UInventorySpeedPack_C_EventInventorySlotChanged_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventorySpeedPack.InventorySpeedPack_C.Construct
struct UInventorySpeedPack_C_Construct_Params
{
};

// Function InventorySpeedPack.InventorySpeedPack_C.EventInputSourceChanged
struct UInventorySpeedPack_C_EventInputSourceChanged_Params
{
};

// Function InventorySpeedPack.InventorySpeedPack_C.EventMenuDPadLeft
struct UInventorySpeedPack_C_EventMenuDPadLeft_Params
{
};

// Function InventorySpeedPack.InventorySpeedPack_C.ExecuteUbergraph_InventorySpeedPack
struct UInventorySpeedPack_C_ExecuteUbergraph_InventorySpeedPack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
