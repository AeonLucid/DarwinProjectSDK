#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CenterGages_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CenterGages.CenterGages_C.EventUpdateStamina
struct UCenterGages_C_EventUpdateStamina_Params
{
	float*                                             staminaNormalized;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CenterGages.CenterGages_C.Tick
struct UCenterGages_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CenterGages.CenterGages_C.EventGameHasStarted
struct UCenterGages_C_EventGameHasStarted_Params
{
};

// Function CenterGages.CenterGages_C.EventGameStartsNow
struct UCenterGages_C_EventGameStartsNow_Params
{
};

// Function CenterGages.CenterGages_C.EventUpdateColdFactor
struct UCenterGages_C_EventUpdateColdFactor_Params
{
	float*                                             coldFactorNormalized;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CenterGages.CenterGages_C.EventInputSourceChanged
struct UCenterGages_C_EventInputSourceChanged_Params
{
};

// Function CenterGages.CenterGages_C.Construct
struct UCenterGages_C_Construct_Params
{
};

// Function CenterGages.CenterGages_C.ExecuteUbergraph_CenterGages
struct UCenterGages_C_ExecuteUbergraph_CenterGages_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
