#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_HarvestableCouchScreendicatorBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.EventUpdateScreendication
struct UHarvestableCouchScreendicatorBP_C_EventUpdateScreendication_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             arrowScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              onScreen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              behindCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.EventEnterScreen
struct UHarvestableCouchScreendicatorBP_C_EventEnterScreen_Params
{
};

// Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.EventLeaveScreen
struct UHarvestableCouchScreendicatorBP_C_EventLeaveScreen_Params
{
};

// Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.EventEnterInteractionRadius
struct UHarvestableCouchScreendicatorBP_C_EventEnterInteractionRadius_Params
{
};

// Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.EventLeaveInteractionRadius
struct UHarvestableCouchScreendicatorBP_C_EventLeaveInteractionRadius_Params
{
};

// Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.Tick
struct UHarvestableCouchScreendicatorBP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.ExecuteUbergraph_HarvestableCouchScreendicatorBP
struct UHarvestableCouchScreendicatorBP_C_ExecuteUbergraph_HarvestableCouchScreendicatorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
