#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_SDPowerPlayerPerspective_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SDPowerPlayerPerspective.SDPowerPlayerPerspective_C.PlayAKSound
struct USDPowerPlayerPerspective_C_PlayAKSound_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SDPowerPlayerPerspective.SDPowerPlayerPerspective_C.EventGetPowerChosen
struct USDPowerPlayerPerspective_C_EventGetPowerChosen_Params
{
	class AActor**                                     targetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EDarwinItemTypeEnum*                               powerType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SDPowerPlayerPerspective.SDPowerPlayerPerspective_C.ExecuteUbergraph_SDPowerPlayerPerspective
struct USDPowerPlayerPerspective_C_ExecuteUbergraph_SDPowerPlayerPerspective_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
