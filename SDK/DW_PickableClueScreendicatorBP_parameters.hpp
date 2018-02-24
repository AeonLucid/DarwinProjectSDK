#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PickableClueScreendicatorBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.EventUpdateScreendication
struct UPickableClueScreendicatorBP_C_EventUpdateScreendication_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             arrowScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              onScreen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              behindCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.EventEnterScreen
struct UPickableClueScreendicatorBP_C_EventEnterScreen_Params
{
};

// Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.EventLeaveScreen
struct UPickableClueScreendicatorBP_C_EventLeaveScreen_Params
{
};

// Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.Construct
struct UPickableClueScreendicatorBP_C_Construct_Params
{
};

// Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.EventEnterInteractionRadius
struct UPickableClueScreendicatorBP_C_EventEnterInteractionRadius_Params
{
};

// Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.EventLeaveInteractionRadius
struct UPickableClueScreendicatorBP_C_EventLeaveInteractionRadius_Params
{
};

// Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.Tick
struct UPickableClueScreendicatorBP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.ExecuteUbergraph_PickableClueScreendicatorBP
struct UPickableClueScreendicatorBP_C_ExecuteUbergraph_PickableClueScreendicatorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
