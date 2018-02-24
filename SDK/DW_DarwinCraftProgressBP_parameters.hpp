#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinCraftProgressBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinCraftProgressBP.DarwinCraftProgressBP_C.EventIsCrafting
struct UDarwinCraftProgressBP_C_EventIsCrafting_Params
{
	float*                                             progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum*                               enum_type;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFinished;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               craftingIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftProgressBP.DarwinCraftProgressBP_C.EventCraftingCanceled
struct UDarwinCraftProgressBP_C_EventCraftingCanceled_Params
{
};

// Function DarwinCraftProgressBP.DarwinCraftProgressBP_C.EventCraftWheelOpen
struct UDarwinCraftProgressBP_C_EventCraftWheelOpen_Params
{
};

// Function DarwinCraftProgressBP.DarwinCraftProgressBP_C.EventCraftWheelClose
struct UDarwinCraftProgressBP_C_EventCraftWheelClose_Params
{
};

// Function DarwinCraftProgressBP.DarwinCraftProgressBP_C.ExecuteUbergraph_DarwinCraftProgressBP
struct UDarwinCraftProgressBP_C_ExecuteUbergraph_DarwinCraftProgressBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
