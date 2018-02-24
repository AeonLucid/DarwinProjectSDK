#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ChooseRegionLine_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ChooseRegionLine.ChooseRegionLine_C.SetHighlighted
struct UChooseRegionLine_C_SetHighlighted_Params
{
	bool                                               highlighted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChooseRegionLine.ChooseRegionLine_C.Initialize
struct UChooseRegionLine_C_Initialize_Params
{
	class UChooseRegion_C*                             ParentMenu;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InRegionName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ChooseRegionLine.ChooseRegionLine_C.EventUpdateRegionPing
struct UChooseRegionLine_C_EventUpdateRegionPing_Params
{
	struct FString*                                    RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               ping;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChooseRegionLine.ChooseRegionLine_C.EventRemoveRegion
struct UChooseRegionLine_C_EventRemoveRegion_Params
{
	struct FString*                                    RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ChooseRegionLine.ChooseRegionLine_C.BndEvt__Button_Region_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UChooseRegionLine_C_BndEvt__Button_Region_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChooseRegionLine.ChooseRegionLine_C.OnSelectionAction
struct UChooseRegionLine_C_OnSelectionAction_Params
{
};

// Function ChooseRegionLine.ChooseRegionLine_C.ExecuteUbergraph_ChooseRegionLine
struct UChooseRegionLine_C_ExecuteUbergraph_ChooseRegionLine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
