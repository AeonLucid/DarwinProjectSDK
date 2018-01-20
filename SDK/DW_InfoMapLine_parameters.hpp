#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InfoMapLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InfoMapLine.InfoMapLine_C.Initialize
struct UInfoMapLine_C_Initialize_Params
{
	struct FString                                     InfoMapName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     InfoMapValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
