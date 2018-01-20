#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ClosePlayerScreendicatorBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ClosePlayerScreendicatorBP.ClosePlayerScreendicatorBP_C.EventSetDarwinPlayerName
struct UClosePlayerScreendicatorBP_C_EventSetDarwinPlayerName_Params
{
	struct FString*                                    playerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ClosePlayerScreendicatorBP.ClosePlayerScreendicatorBP_C.EventUpdatePlayerStatus
struct UClosePlayerScreendicatorBP_C_EventUpdatePlayerStatus_Params
{
	float*                                             Stamina;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Cold;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClosePlayerScreendicatorBP.ClosePlayerScreendicatorBP_C.EventSetCharacterUniqueID
struct UClosePlayerScreendicatorBP_C_EventSetCharacterUniqueID_Params
{
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClosePlayerScreendicatorBP.ClosePlayerScreendicatorBP_C.EventUpdateScreendication
struct UClosePlayerScreendicatorBP_C_EventUpdateScreendication_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             arrowScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              onScreen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              behindCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClosePlayerScreendicatorBP.ClosePlayerScreendicatorBP_C.ExecuteUbergraph_ClosePlayerScreendicatorBP
struct UClosePlayerScreendicatorBP_C_ExecuteUbergraph_ClosePlayerScreendicatorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
