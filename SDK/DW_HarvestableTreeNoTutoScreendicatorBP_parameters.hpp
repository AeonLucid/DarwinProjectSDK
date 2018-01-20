#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_HarvestableTreeNoTutoScreendicatorBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HarvestableTreeNoTutoScreendicatorBP.HarvestableTreeNoTutoScreendicatorBP_C.EventUpdateScreendication
struct UHarvestableTreeNoTutoScreendicatorBP_C_EventUpdateScreendication_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             arrowScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              onScreen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              behindCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HarvestableTreeNoTutoScreendicatorBP.HarvestableTreeNoTutoScreendicatorBP_C.EventEnterInteractionRadius
struct UHarvestableTreeNoTutoScreendicatorBP_C_EventEnterInteractionRadius_Params
{
};

// Function HarvestableTreeNoTutoScreendicatorBP.HarvestableTreeNoTutoScreendicatorBP_C.EventLeaveInteractionRadius
struct UHarvestableTreeNoTutoScreendicatorBP_C_EventLeaveInteractionRadius_Params
{
};

// Function HarvestableTreeNoTutoScreendicatorBP.HarvestableTreeNoTutoScreendicatorBP_C.EventEnterScreen
struct UHarvestableTreeNoTutoScreendicatorBP_C_EventEnterScreen_Params
{
};

// Function HarvestableTreeNoTutoScreendicatorBP.HarvestableTreeNoTutoScreendicatorBP_C.EventLeaveScreen
struct UHarvestableTreeNoTutoScreendicatorBP_C_EventLeaveScreen_Params
{
};

// Function HarvestableTreeNoTutoScreendicatorBP.HarvestableTreeNoTutoScreendicatorBP_C.Tick
struct UHarvestableTreeNoTutoScreendicatorBP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HarvestableTreeNoTutoScreendicatorBP.HarvestableTreeNoTutoScreendicatorBP_C.ExecuteUbergraph_HarvestableTreeNoTutoScreendicatorBP
struct UHarvestableTreeNoTutoScreendicatorBP_C_ExecuteUbergraph_HarvestableTreeNoTutoScreendicatorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
