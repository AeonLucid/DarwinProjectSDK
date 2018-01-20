#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinLootClueBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinLootClueBP.DarwinLootClueBP_C.UserConstructionScript
struct ADarwinLootClueBP_C_UserConstructionScript_Params
{
};

// Function DarwinLootClueBP.DarwinLootClueBP_C.HighlightClue
struct ADarwinLootClueBP_C_HighlightClue_Params
{
	bool*                                              enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               stencil_value;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinLootClueBP.DarwinLootClueBP_C.ReceiveBeginPlay
struct ADarwinLootClueBP_C_ReceiveBeginPlay_Params
{
};

// Function DarwinLootClueBP.DarwinLootClueBP_C.EventHide
struct ADarwinLootClueBP_C_EventHide_Params
{
};

// Function DarwinLootClueBP.DarwinLootClueBP_C.ReceiveTick
struct ADarwinLootClueBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinLootClueBP.DarwinLootClueBP_C.EventShowOutline
struct ADarwinLootClueBP_C_EventShowOutline_Params
{
};

// Function DarwinLootClueBP.DarwinLootClueBP_C.EventHideOutline
struct ADarwinLootClueBP_C_EventHideOutline_Params
{
};

// Function DarwinLootClueBP.DarwinLootClueBP_C.ExecuteUbergraph_DarwinLootClueBP
struct ADarwinLootClueBP_C_ExecuteUbergraph_DarwinLootClueBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
