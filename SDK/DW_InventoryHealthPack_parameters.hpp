#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InventoryHealthPack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InventoryHealthPack.InventoryHealthPack_C.Construct
struct UInventoryHealthPack_C_Construct_Params
{
};

// Function InventoryHealthPack.InventoryHealthPack_C.EventInputSourceChanged
struct UInventoryHealthPack_C_EventInputSourceChanged_Params
{
};

// Function InventoryHealthPack.InventoryHealthPack_C.EventMenuDPadUp
struct UInventoryHealthPack_C_EventMenuDPadUp_Params
{
};

// Function InventoryHealthPack.InventoryHealthPack_C.EventInventorySlotChanged
struct UInventoryHealthPack_C_EventInventorySlotChanged_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryHealthPack.InventoryHealthPack_C.ExecuteUbergraph_InventoryHealthPack
struct UInventoryHealthPack_C_ExecuteUbergraph_InventoryHealthPack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
