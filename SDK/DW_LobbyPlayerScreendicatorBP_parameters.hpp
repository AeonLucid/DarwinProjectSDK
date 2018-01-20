#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_LobbyPlayerScreendicatorBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventUpdateScreendication
struct ULobbyPlayerScreendicatorBP_C_EventUpdateScreendication_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             arrowScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              onScreen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              behindCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventSetDarwinPlayerName
struct ULobbyPlayerScreendicatorBP_C_EventSetDarwinPlayerName_Params
{
	struct FString*                                    playerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventEnterScreen
struct ULobbyPlayerScreendicatorBP_C_EventEnterScreen_Params
{
};

// Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventLeaveScreen
struct ULobbyPlayerScreendicatorBP_C_EventLeaveScreen_Params
{
};

// Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventEnterCamStateCharacter
struct ULobbyPlayerScreendicatorBP_C_EventEnterCamStateCharacter_Params
{
};

// Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventLeaveCamStateCharacter
struct ULobbyPlayerScreendicatorBP_C_EventLeaveCamStateCharacter_Params
{
};

// Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.EventSetCharacterUniqueID
struct ULobbyPlayerScreendicatorBP_C_EventSetCharacterUniqueID_Params
{
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerScreendicatorBP.LobbyPlayerScreendicatorBP_C.ExecuteUbergraph_LobbyPlayerScreendicatorBP
struct ULobbyPlayerScreendicatorBP_C_ExecuteUbergraph_LobbyPlayerScreendicatorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
