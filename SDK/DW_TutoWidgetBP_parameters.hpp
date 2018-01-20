#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_TutoWidgetBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TutoWidgetBP.TutoWidgetBP_C.Key Binding
struct UTutoWidgetBP_C_Key_Binding_Params
{
};

// Function TutoWidgetBP.TutoWidgetBP_C.EventCraftWheelOpen
struct UTutoWidgetBP_C_EventCraftWheelOpen_Params
{
};

// Function TutoWidgetBP.TutoWidgetBP_C.EventCraftWheelClose
struct UTutoWidgetBP_C_EventCraftWheelClose_Params
{
};

// Function TutoWidgetBP.TutoWidgetBP_C.EventGameHasStarted
struct UTutoWidgetBP_C_EventGameHasStarted_Params
{
};

// Function TutoWidgetBP.TutoWidgetBP_C.EventGameStartsNow
struct UTutoWidgetBP_C_EventGameStartsNow_Params
{
};

// Function TutoWidgetBP.TutoWidgetBP_C.EventNumberOfGamesPlayed
struct UTutoWidgetBP_C_EventNumberOfGamesPlayed_Params
{
	int*                                               nbGamesPlayed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TutoWidgetBP.TutoWidgetBP_C.EventGameStartsInSeconds
struct UTutoWidgetBP_C_EventGameStartsInSeconds_Params
{
	int*                                               Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TutoWidgetBP.TutoWidgetBP_C.EventUpdateRealColdFactor
struct UTutoWidgetBP_C_EventUpdateRealColdFactor_Params
{
	int*                                               coldFactor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               coldFactorMax;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TutoWidgetBP.TutoWidgetBP_C.EventInputSourceChanged
struct UTutoWidgetBP_C_EventInputSourceChanged_Params
{
};

// Function TutoWidgetBP.TutoWidgetBP_C.Construct
struct UTutoWidgetBP_C_Construct_Params
{
};

// Function TutoWidgetBP.TutoWidgetBP_C.CustomizedWheel
struct UTutoWidgetBP_C_CustomizedWheel_Params
{
};

// Function TutoWidgetBP.TutoWidgetBP_C.EventInputResetToDefault
struct UTutoWidgetBP_C_EventInputResetToDefault_Params
{
};

// Function TutoWidgetBP.TutoWidgetBP_C.EventInputRebindSucceeded
struct UTutoWidgetBP_C_EventInputRebindSucceeded_Params
{
	struct FName*                                      ActionToRebind;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText*                                      NewKeyName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TutoWidgetBP.TutoWidgetBP_C.ExecuteUbergraph_TutoWidgetBP
struct UTutoWidgetBP_C_ExecuteUbergraph_TutoWidgetBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
