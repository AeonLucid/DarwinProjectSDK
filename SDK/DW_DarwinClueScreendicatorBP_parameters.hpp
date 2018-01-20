#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinClueScreendicatorBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventSetDarwinPlayerName
struct UDarwinClueScreendicatorBP_C_EventSetDarwinPlayerName_Params
{
	struct FString*                                    playerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventEnterScreen
struct UDarwinClueScreendicatorBP_C_EventEnterScreen_Params
{
};

// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventLeaveScreen
struct UDarwinClueScreendicatorBP_C_EventLeaveScreen_Params
{
};

// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventUpdateClueTime
struct UDarwinClueScreendicatorBP_C_EventUpdateClueTime_Params
{
	int*                                               timeLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventUpdatePlayerStatus
struct UDarwinClueScreendicatorBP_C_EventUpdatePlayerStatus_Params
{
	float*                                             Stamina;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Cold;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventEnterCenter
struct UDarwinClueScreendicatorBP_C_EventEnterCenter_Params
{
};

// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventLeaveCenter
struct UDarwinClueScreendicatorBP_C_EventLeaveCenter_Params
{
};

// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventUpdateScreendication
struct UDarwinClueScreendicatorBP_C_EventUpdateScreendication_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             arrowScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              onScreen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              behindCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.EventClueNinjaVanish
struct UDarwinClueScreendicatorBP_C_EventClueNinjaVanish_Params
{
};

// Function DarwinClueScreendicatorBP.DarwinClueScreendicatorBP_C.ExecuteUbergraph_DarwinClueScreendicatorBP
struct UDarwinClueScreendicatorBP_C_ExecuteUbergraph_DarwinClueScreendicatorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
