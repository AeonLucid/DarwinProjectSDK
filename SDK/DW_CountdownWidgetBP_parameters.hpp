#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CountdownWidgetBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CountdownWidgetBP.CountdownWidgetBP_C.EventGameStartsInSeconds
struct UCountdownWidgetBP_C_EventGameStartsInSeconds_Params
{
	int*                                               Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CountdownWidgetBP.CountdownWidgetBP_C.EventGameStartsNow
struct UCountdownWidgetBP_C_EventGameStartsNow_Params
{
};

// Function CountdownWidgetBP.CountdownWidgetBP_C.EventUpdateGameAboutToStart
struct UCountdownWidgetBP_C_EventUpdateGameAboutToStart_Params
{
	bool*                                              aboutToStart;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CountdownWidgetBP.CountdownWidgetBP_C.EventUpdateGameAboutToStartTimer
struct UCountdownWidgetBP_C_EventUpdateGameAboutToStartTimer_Params
{
	float*                                             Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CountdownWidgetBP.CountdownWidgetBP_C.EventGameHasStarted
struct UCountdownWidgetBP_C_EventGameHasStarted_Params
{
};

// Function CountdownWidgetBP.CountdownWidgetBP_C.ExecuteUbergraph_CountdownWidgetBP
struct UCountdownWidgetBP_C_ExecuteUbergraph_CountdownWidgetBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
