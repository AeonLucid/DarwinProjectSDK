#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ErrorLogBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ErrorLogBox.ErrorLogBox_C.AddErrorMsg
struct UErrorLogBox_C_AddErrorMsg_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       line2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ErrorLogBox.ErrorLogBox_C.ExecuteUbergraph_ErrorLogBox
struct UErrorLogBox_C_ExecuteUbergraph_ErrorLogBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
