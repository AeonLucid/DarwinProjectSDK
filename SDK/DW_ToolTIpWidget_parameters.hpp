#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ToolTIpWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ToolTIpWidget.ToolTIpWidget_C.Set tooltip text
struct UToolTIpWidget_C_Set_tooltip_text_Params
{
	struct FText                                       Tool_tip_text;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ToolTIpWidget.ToolTIpWidget_C.ExecuteUbergraph_ToolTIpWidget
struct UToolTIpWidget_C_ExecuteUbergraph_ToolTIpWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
