#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinPlayerMinimapWidgetBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.Get_DetectionNorth_ColorAndOpacity_2
struct UDarwinPlayerMinimapWidgetBP_C_Get_DetectionNorth_ColorAndOpacity_2_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.Get_DetectionNorth_Brush_1
struct UDarwinPlayerMinimapWidgetBP_C_Get_DetectionNorth_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.Get_DetectionNorth_ColorAndOpacity_1
struct UDarwinPlayerMinimapWidgetBP_C_Get_DetectionNorth_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventShowDirectorJoined
struct UDarwinPlayerMinimapWidgetBP_C_EventShowDirectorJoined_Params
{
	struct FString*                                    ShowDirectorName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventShowDirectorLeft
struct UDarwinPlayerMinimapWidgetBP_C_EventShowDirectorLeft_Params
{
	struct FString*                                    ShowDirectorName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventGameHasStarted
struct UDarwinPlayerMinimapWidgetBP_C_EventGameHasStarted_Params
{
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventGameStartsInSeconds
struct UDarwinPlayerMinimapWidgetBP_C_EventGameStartsInSeconds_Params
{
	int*                                               Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventGameStartsNow
struct UDarwinPlayerMinimapWidgetBP_C_EventGameStartsNow_Params
{
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventNumberOfPlayersUntilGameStarts
struct UDarwinPlayerMinimapWidgetBP_C_EventNumberOfPlayersUntilGameStarts_Params
{
	int*                                               Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateGameAboutToStart
struct UDarwinPlayerMinimapWidgetBP_C_EventUpdateGameAboutToStart_Params
{
	bool*                                              aboutToStart;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateGameTime
struct UDarwinPlayerMinimapWidgetBP_C_EventUpdateGameTime_Params
{
	struct FString*                                    gameTimeStr;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventSuddenDeathStartsNow
struct UDarwinPlayerMinimapWidgetBP_C_EventSuddenDeathStartsNow_Params
{
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateNumberOfTwitchSpectators
struct UDarwinPlayerMinimapWidgetBP_C_EventUpdateNumberOfTwitchSpectators_Params
{
	int*                                               Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateGameAboutToStartTimer
struct UDarwinPlayerMinimapWidgetBP_C_EventUpdateGameAboutToStartTimer_Params
{
	float*                                             Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventStartFollowedByShowDirector
struct UDarwinPlayerMinimapWidgetBP_C_EventStartFollowedByShowDirector_Params
{
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventEndFollowedByShowDirector
struct UDarwinPlayerMinimapWidgetBP_C_EventEndFollowedByShowDirector_Params
{
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateArmorLevel
struct UDarwinPlayerMinimapWidgetBP_C_EventUpdateArmorLevel_Params
{
	int*                                               Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.EventUpdateShowDirectorIsLoading
struct UDarwinPlayerMinimapWidgetBP_C_EventUpdateShowDirectorIsLoading_Params
{
	bool*                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.Construct
struct UDarwinPlayerMinimapWidgetBP_C_Construct_Params
{
};

// Function DarwinPlayerMinimapWidgetBP.DarwinPlayerMinimapWidgetBP_C.ExecuteUbergraph_DarwinPlayerMinimapWidgetBP
struct UDarwinPlayerMinimapWidgetBP_C_ExecuteUbergraph_DarwinPlayerMinimapWidgetBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
