#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinGenericClueBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinGenericClueBP.DarwinGenericClueBP_C.UserConstructionScript
struct ADarwinGenericClueBP_C_UserConstructionScript_Params
{
};

// Function DarwinGenericClueBP.DarwinGenericClueBP_C.EventHideOutline
struct ADarwinGenericClueBP_C_EventHideOutline_Params
{
};

// Function DarwinGenericClueBP.DarwinGenericClueBP_C.EventShowOutline
struct ADarwinGenericClueBP_C_EventShowOutline_Params
{
};

// Function DarwinGenericClueBP.DarwinGenericClueBP_C.HighlightClue
struct ADarwinGenericClueBP_C_HighlightClue_Params
{
	bool*                                              enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               stencil_value;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinGenericClueBP.DarwinGenericClueBP_C.ExecuteUbergraph_DarwinGenericClueBP
struct ADarwinGenericClueBP_C_ExecuteUbergraph_DarwinGenericClueBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
