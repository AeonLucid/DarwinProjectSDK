#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PickablePoopScreendicatorBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PickablePoopScreendicatorBP.PickablePoopScreendicatorBP_C.EventUpdateScreendication
struct UPickablePoopScreendicatorBP_C_EventUpdateScreendication_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             arrowScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              onScreen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              behindCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickablePoopScreendicatorBP.PickablePoopScreendicatorBP_C.EventEnterScreen
struct UPickablePoopScreendicatorBP_C_EventEnterScreen_Params
{
};

// Function PickablePoopScreendicatorBP.PickablePoopScreendicatorBP_C.EventLeaveScreen
struct UPickablePoopScreendicatorBP_C_EventLeaveScreen_Params
{
};

// Function PickablePoopScreendicatorBP.PickablePoopScreendicatorBP_C.Construct
struct UPickablePoopScreendicatorBP_C_Construct_Params
{
};

// Function PickablePoopScreendicatorBP.PickablePoopScreendicatorBP_C.ExecuteUbergraph_PickablePoopScreendicatorBP
struct UPickablePoopScreendicatorBP_C_ExecuteUbergraph_PickablePoopScreendicatorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
