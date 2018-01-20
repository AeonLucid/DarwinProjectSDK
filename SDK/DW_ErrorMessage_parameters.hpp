#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ErrorMessage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ErrorMessage.ErrorMessage_C.InitializeMsg
struct UErrorMessage_C_InitializeMsg_Params
{
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       l;ine2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ErrorMessage.ErrorMessage_C.ExecuteUbergraph_ErrorMessage
struct UErrorMessage_C_ExecuteUbergraph_ErrorMessage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
