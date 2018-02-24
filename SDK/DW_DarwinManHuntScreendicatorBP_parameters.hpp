#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinManHuntScreendicatorBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventEnterScreen
struct UDarwinManHuntScreendicatorBP_C_EventEnterScreen_Params
{
};

// Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventLeaveScreen
struct UDarwinManHuntScreendicatorBP_C_EventLeaveScreen_Params
{
};

// Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventUpdatePlayerStatus
struct UDarwinManHuntScreendicatorBP_C_EventUpdatePlayerStatus_Params
{
	float*                                             Stamina;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Cold;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventEnterCenter
struct UDarwinManHuntScreendicatorBP_C_EventEnterCenter_Params
{
};

// Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventLeaveCenter
struct UDarwinManHuntScreendicatorBP_C_EventLeaveCenter_Params
{
};

// Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventSetDarwinPlayerName
struct UDarwinManHuntScreendicatorBP_C_EventSetDarwinPlayerName_Params
{
	struct FString*                                    playerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.EventUpdateScreendication
struct UDarwinManHuntScreendicatorBP_C_EventUpdateScreendication_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             arrowScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              onScreen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              behindCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.Construct
struct UDarwinManHuntScreendicatorBP_C_Construct_Params
{
};

// Function DarwinManHuntScreendicatorBP.DarwinManHuntScreendicatorBP_C.ExecuteUbergraph_DarwinManHuntScreendicatorBP
struct UDarwinManHuntScreendicatorBP_C_ExecuteUbergraph_DarwinManHuntScreendicatorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
