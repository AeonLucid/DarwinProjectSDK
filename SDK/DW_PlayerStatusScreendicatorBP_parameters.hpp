#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PlayerStatusScreendicatorBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventSetCharacterUniqueID
struct UPlayerStatusScreendicatorBP_C_EventSetCharacterUniqueID_Params
{
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventEnterCenter
struct UPlayerStatusScreendicatorBP_C_EventEnterCenter_Params
{
};

// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventLeaveCenter
struct UPlayerStatusScreendicatorBP_C_EventLeaveCenter_Params
{
};

// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventSetDarwinPlayerName
struct UPlayerStatusScreendicatorBP_C_EventSetDarwinPlayerName_Params
{
	struct FString*                                    playerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventEnterScreen
struct UPlayerStatusScreendicatorBP_C_EventEnterScreen_Params
{
};

// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventLeaveScreen
struct UPlayerStatusScreendicatorBP_C_EventLeaveScreen_Params
{
};

// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventEnterCamStateCharacter
struct UPlayerStatusScreendicatorBP_C_EventEnterCamStateCharacter_Params
{
};

// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventLeaveCamStateCharacter
struct UPlayerStatusScreendicatorBP_C_EventLeaveCamStateCharacter_Params
{
};

// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.EventUpdateScreendication
struct UPlayerStatusScreendicatorBP_C_EventUpdateScreendication_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             arrowScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              onScreen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              behindCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerStatusScreendicatorBP.PlayerStatusScreendicatorBP_C.ExecuteUbergraph_PlayerStatusScreendicatorBP
struct UPlayerStatusScreendicatorBP_C_ExecuteUbergraph_PlayerStatusScreendicatorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
