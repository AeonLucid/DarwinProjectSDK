#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InventoryElectronic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InventoryElectronic.InventoryElectronic_C.EventUpdateNumberOfElectronic
struct UInventoryElectronic_C_EventUpdateNumberOfElectronic_Params
{
	int*                                               numberOfElectronic;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncrement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InventoryElectronic.InventoryElectronic_C.ExecuteUbergraph_InventoryElectronic
struct UInventoryElectronic_C_ExecuteUbergraph_InventoryElectronic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
