#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DeadLootablePlayerScreendicatorBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DeadLootablePlayerScreendicatorBP.DeadLootablePlayerScreendicatorBP_C.EventUpdateScreendication
struct UDeadLootablePlayerScreendicatorBP_C_EventUpdateScreendication_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             arrowScale;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Opacity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              onScreen;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              behindCam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadLootablePlayerScreendicatorBP.DeadLootablePlayerScreendicatorBP_C.Construct
struct UDeadLootablePlayerScreendicatorBP_C_Construct_Params
{
};

// Function DeadLootablePlayerScreendicatorBP.DeadLootablePlayerScreendicatorBP_C.EventSetCharacterUniqueID
struct UDeadLootablePlayerScreendicatorBP_C_EventSetCharacterUniqueID_Params
{
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DeadLootablePlayerScreendicatorBP.DeadLootablePlayerScreendicatorBP_C.EventBloodPactDeadHeartbeat
struct UDeadLootablePlayerScreendicatorBP_C_EventBloodPactDeadHeartbeat_Params
{
};

// Function DeadLootablePlayerScreendicatorBP.DeadLootablePlayerScreendicatorBP_C.ExecuteUbergraph_DeadLootablePlayerScreendicatorBP
struct UDeadLootablePlayerScreendicatorBP_C_ExecuteUbergraph_DeadLootablePlayerScreendicatorBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
