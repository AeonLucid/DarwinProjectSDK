#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinLootBoxScreendicatorBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventUpdateScreendication
struct UDarwinLootBoxScreendicatorBP_C_EventUpdateScreendication_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             arrowScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              onScreen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              behindCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventEnterScreen
struct UDarwinLootBoxScreendicatorBP_C_EventEnterScreen_Params
{
};

// Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventLeaveScreen
struct UDarwinLootBoxScreendicatorBP_C_EventLeaveScreen_Params
{
};

// Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventEnterInteractionRadius
struct UDarwinLootBoxScreendicatorBP_C_EventEnterInteractionRadius_Params
{
};

// Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventLeaveInteractionRadius
struct UDarwinLootBoxScreendicatorBP_C_EventLeaveInteractionRadius_Params
{
};

// Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.Tick
struct UDarwinLootBoxScreendicatorBP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventIsDeadDeer
struct UDarwinLootBoxScreendicatorBP_C_EventIsDeadDeer_Params
{
};

// Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.ExecuteUbergraph_DarwinLootBoxScreendicatorBP
struct UDarwinLootBoxScreendicatorBP_C_ExecuteUbergraph_DarwinLootBoxScreendicatorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
