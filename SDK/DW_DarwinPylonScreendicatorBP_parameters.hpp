#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinPylonScreendicatorBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventUpdateScreendication
struct UDarwinPylonScreendicatorBP_C_EventUpdateScreendication_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             arrowScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              onScreen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              behindCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventEnterCenter
struct UDarwinPylonScreendicatorBP_C_EventEnterCenter_Params
{
};

// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventLeaveCenter
struct UDarwinPylonScreendicatorBP_C_EventLeaveCenter_Params
{
};

// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventEnterInteractionRadius
struct UDarwinPylonScreendicatorBP_C_EventEnterInteractionRadius_Params
{
};

// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventLeaveInteractionRadius
struct UDarwinPylonScreendicatorBP_C_EventLeaveInteractionRadius_Params
{
};

// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventEnterScreen
struct UDarwinPylonScreendicatorBP_C_EventEnterScreen_Params
{
};

// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventLeaveScreen
struct UDarwinPylonScreendicatorBP_C_EventLeaveScreen_Params
{
};

// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventPylonHarvestStart
struct UDarwinPylonScreendicatorBP_C_EventPylonHarvestStart_Params
{
	struct FString*                                    harvesterName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventPylonHarvestEnd
struct UDarwinPylonScreendicatorBP_C_EventPylonHarvestEnd_Params
{
};

// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventUpdatePylonHarvestProgress
struct UDarwinPylonScreendicatorBP_C_EventUpdatePylonHarvestProgress_Params
{
	float*                                             harvestProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.Construct
struct UDarwinPylonScreendicatorBP_C_Construct_Params
{
};

// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.ExecuteUbergraph_DarwinPylonScreendicatorBP
struct UDarwinPylonScreendicatorBP_C_ExecuteUbergraph_DarwinPylonScreendicatorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
