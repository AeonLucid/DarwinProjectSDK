#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinAllyScreendicatorBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventSetDarwinPlayerName
struct UDarwinAllyScreendicatorBP_C_EventSetDarwinPlayerName_Params
{
	struct FString*                                    playerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventEnterCenter
struct UDarwinAllyScreendicatorBP_C_EventEnterCenter_Params
{
};

// Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventLeaveCenter
struct UDarwinAllyScreendicatorBP_C_EventLeaveCenter_Params
{
};

// Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventEnterScreen
struct UDarwinAllyScreendicatorBP_C_EventEnterScreen_Params
{
};

// Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventLeaveScreen
struct UDarwinAllyScreendicatorBP_C_EventLeaveScreen_Params
{
};

// Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventSetCharacterUniqueID
struct UDarwinAllyScreendicatorBP_C_EventSetCharacterUniqueID_Params
{
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.EventUpdateScreendication
struct UDarwinAllyScreendicatorBP_C_EventUpdateScreendication_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             arrowScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              onScreen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              behindCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinAllyScreendicatorBP.DarwinAllyScreendicatorBP_C.ExecuteUbergraph_DarwinAllyScreendicatorBP
struct UDarwinAllyScreendicatorBP_C_ExecuteUbergraph_DarwinAllyScreendicatorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
