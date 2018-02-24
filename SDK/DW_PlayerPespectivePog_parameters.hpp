#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PlayerPespectivePog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerPespectivePog.PlayerPespectivePog_C.Initialize
struct UPlayerPespectivePog_C_Initialize_Params
{
	EDarwinItemTypeEnum                                powerType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPespectivePog.PlayerPespectivePog_C.PlayPowerExecuted
struct UPlayerPespectivePog_C_PlayPowerExecuted_Params
{
};

// Function PlayerPespectivePog.PlayerPespectivePog_C.ExecuteUbergraph_PlayerPespectivePog
struct UPlayerPespectivePog_C_ExecuteUbergraph_PlayerPespectivePog_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
