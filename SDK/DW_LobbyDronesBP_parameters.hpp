#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_LobbyDronesBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LobbyDronesBP.LobbyDronesBP_C.GetRandomIntInRange
struct ALobbyDronesBP_C_GetRandomIntInRange_Params
{
	int                                                Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Int;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyDronesBP.LobbyDronesBP_C.GetRandomRotator
struct ALobbyDronesBP_C_GetRandomRotator_Params
{
	struct FRotator                                    NewParam;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function LobbyDronesBP.LobbyDronesBP_C.GetRandomFloatInRange
struct ALobbyDronesBP_C_GetRandomFloatInRange_Params
{
	float                                              Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyDronesBP.LobbyDronesBP_C.UserConstructionScript
struct ALobbyDronesBP_C_UserConstructionScript_Params
{
};

// Function LobbyDronesBP.LobbyDronesBP_C.ReceiveBeginPlay
struct ALobbyDronesBP_C_ReceiveBeginPlay_Params
{
};

// Function LobbyDronesBP.LobbyDronesBP_C.ReceiveTick
struct ALobbyDronesBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyDronesBP.LobbyDronesBP_C.SpawnNewDrone
struct ALobbyDronesBP_C_SpawnNewDrone_Params
{
};

// Function LobbyDronesBP.LobbyDronesBP_C.ReceiveDestroyed
struct ALobbyDronesBP_C_ReceiveDestroyed_Params
{
};

// Function LobbyDronesBP.LobbyDronesBP_C.ExecuteUbergraph_LobbyDronesBP
struct ALobbyDronesBP_C_ExecuteUbergraph_LobbyDronesBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
