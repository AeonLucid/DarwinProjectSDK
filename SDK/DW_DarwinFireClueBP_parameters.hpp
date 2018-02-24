#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinFireClueBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinFireClueBP.DarwinFireClueBP_C.UserConstructionScript
struct ADarwinFireClueBP_C_UserConstructionScript_Params
{
};

// Function DarwinFireClueBP.DarwinFireClueBP_C.EventHideOutline
struct ADarwinFireClueBP_C_EventHideOutline_Params
{
};

// Function DarwinFireClueBP.DarwinFireClueBP_C.EventShowOutline
struct ADarwinFireClueBP_C_EventShowOutline_Params
{
};

// Function DarwinFireClueBP.DarwinFireClueBP_C.HighlightClue
struct ADarwinFireClueBP_C_HighlightClue_Params
{
	bool*                                              enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               stencil_value;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinFireClueBP.DarwinFireClueBP_C.ExecuteUbergraph_DarwinFireClueBP
struct ADarwinFireClueBP_C_ExecuteUbergraph_DarwinFireClueBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
