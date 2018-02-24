#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DecoyClueBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DecoyClueBP.DecoyClueBP_C.UserConstructionScript
struct ADecoyClueBP_C_UserConstructionScript_Params
{
};

// Function DecoyClueBP.DecoyClueBP_C.EventHideOutline
struct ADecoyClueBP_C_EventHideOutline_Params
{
};

// Function DecoyClueBP.DecoyClueBP_C.EventShowOutline
struct ADecoyClueBP_C_EventShowOutline_Params
{
};

// Function DecoyClueBP.DecoyClueBP_C.HighlightClue
struct ADecoyClueBP_C_HighlightClue_Params
{
	bool*                                              enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               stencil_value;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DecoyClueBP.DecoyClueBP_C.ExecuteUbergraph_DecoyClueBP
struct ADecoyClueBP_C_ExecuteUbergraph_DecoyClueBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
