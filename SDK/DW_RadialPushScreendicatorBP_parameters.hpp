#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_RadialPushScreendicatorBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RadialPushScreendicatorBP.RadialPushScreendicatorBP_C.EventEnterInteractionRadius
struct URadialPushScreendicatorBP_C_EventEnterInteractionRadius_Params
{
};

// Function RadialPushScreendicatorBP.RadialPushScreendicatorBP_C.EventUpdateScreendication
struct URadialPushScreendicatorBP_C_EventUpdateScreendication_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             arrowScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              onScreen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              behindCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPushScreendicatorBP.RadialPushScreendicatorBP_C.EventLeaveInteractionRadius
struct URadialPushScreendicatorBP_C_EventLeaveInteractionRadius_Params
{
};

// Function RadialPushScreendicatorBP.RadialPushScreendicatorBP_C.ExecuteUbergraph_RadialPushScreendicatorBP
struct URadialPushScreendicatorBP_C_ExecuteUbergraph_RadialPushScreendicatorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
