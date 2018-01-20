#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ForbiddenZoneBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventUpdateDangerZone
struct UForbiddenZoneBP_C_EventUpdateDangerZone_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               timeLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventEnteredDangerZone
struct UForbiddenZoneBP_C_EventEnteredDangerZone_Params
{
};

// Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventExitedDangerZone
struct UForbiddenZoneBP_C_EventExitedDangerZone_Params
{
};

// Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventEnteredNuclearZone
struct UForbiddenZoneBP_C_EventEnteredNuclearZone_Params
{
};

// Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventExitedNuclearZone
struct UForbiddenZoneBP_C_EventExitedNuclearZone_Params
{
};

// Function ForbiddenZoneBP.ForbiddenZoneBP_C.EventUpdateNuclearZone
struct UForbiddenZoneBP_C_EventUpdateNuclearZone_Params
{
	struct FString*                                    zoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int*                                               timeLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ForbiddenZoneBP.ForbiddenZoneBP_C.ExecuteUbergraph_ForbiddenZoneBP
struct UForbiddenZoneBP_C_ExecuteUbergraph_ForbiddenZoneBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
