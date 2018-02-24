#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinControllerBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinControllerBP.DarwinControllerBP_C.UserConstructionScript
struct ADarwinControllerBP_C_UserConstructionScript_Params
{
};

// Function DarwinControllerBP.DarwinControllerBP_C.ReceiveBeginPlay
struct ADarwinControllerBP_C_ReceiveBeginPlay_Params
{
};

// Function DarwinControllerBP.DarwinControllerBP_C.EventVideoAnnouncement
struct ADarwinControllerBP_C_EventVideoAnnouncement_Params
{
	struct FString*                                    URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    tilte;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString*                                    Body;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float*                                             LengthSeconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinControllerBP.DarwinControllerBP_C.ExecuteUbergraph_DarwinControllerBP
struct ADarwinControllerBP_C_ExecuteUbergraph_DarwinControllerBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
