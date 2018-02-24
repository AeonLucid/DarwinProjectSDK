#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinMiniDroneBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinMiniDroneBP.DarwinMiniDroneBP_C.UserConstructionScript
struct ADarwinMiniDroneBP_C_UserConstructionScript_Params
{
};

// Function DarwinMiniDroneBP.DarwinMiniDroneBP_C.EventUpdateMiniDroneCamouflage
struct ADarwinMiniDroneBP_C_EventUpdateMiniDroneCamouflage_Params
{
	bool*                                              ownerCamouflaged;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDarwinCamouflagePower**                     camouflageComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinMiniDroneBP.DarwinMiniDroneBP_C.EventInitializeMiniDroneMaterials
struct ADarwinMiniDroneBP_C_EventInitializeMiniDroneMaterials_Params
{
};

// Function DarwinMiniDroneBP.DarwinMiniDroneBP_C.ExecuteUbergraph_DarwinMiniDroneBP
struct ADarwinMiniDroneBP_C_ExecuteUbergraph_DarwinMiniDroneBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
