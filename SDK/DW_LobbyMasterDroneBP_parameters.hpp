#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_LobbyMasterDroneBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.GetSocketInfo
struct ALobbyMasterDroneBP_C_GetSocketInfo_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.UserConstructionScript
struct ALobbyMasterDroneBP_C_UserConstructionScript_Params
{
};

// Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.ReceiveBeginPlay
struct ALobbyMasterDroneBP_C_ReceiveBeginPlay_Params
{
};

// Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.ReceiveTick
struct ALobbyMasterDroneBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.OpenDoors
struct ALobbyMasterDroneBP_C_OpenDoors_Params
{
};

// Function LobbyMasterDroneBP.LobbyMasterDroneBP_C.ExecuteUbergraph_LobbyMasterDroneBP
struct ALobbyMasterDroneBP_C_ExecuteUbergraph_LobbyMasterDroneBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
