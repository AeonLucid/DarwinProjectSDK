#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_TextInfoCustomization_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TextInfoCustomization.TextInfoCustomization_C.Get_TextBlock_38_ColorAndOpacity_1
struct UTextInfoCustomization_C_Get_TextBlock_38_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TextInfoCustomization.TextInfoCustomization_C.Initialize
struct UTextInfoCustomization_C_Initialize_Params
{
	EDarwinItemTypeEnum                                ItemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TextInfoCustomization.TextInfoCustomization_C.ExecuteUbergraph_TextInfoCustomization
struct UTextInfoCustomization_C_ExecuteUbergraph_TextInfoCustomization_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
