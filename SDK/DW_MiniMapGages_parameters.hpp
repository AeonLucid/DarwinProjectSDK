#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MiniMapGages_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MiniMapGages.MiniMapGages_C.EventUpdateStamina
struct UMiniMapGages_C_EventUpdateStamina_Params
{
	float*                                             staminaNormalized;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMapGages.MiniMapGages_C.EventUpdateHealth
struct UMiniMapGages_C_EventUpdateHealth_Params
{
	float*                                             healthNormalized;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMapGages.MiniMapGages_C.EventUpdateColdFactor
struct UMiniMapGages_C_EventUpdateColdFactor_Params
{
	float*                                             coldFactorNormalized;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMapGages.MiniMapGages_C.EventIsOutOfBreathStart
struct UMiniMapGages_C_EventIsOutOfBreathStart_Params
{
};

// Function MiniMapGages.MiniMapGages_C.EventIsOutOfBreathStop
struct UMiniMapGages_C_EventIsOutOfBreathStop_Params
{
};

// Function MiniMapGages.MiniMapGages_C.ExecuteUbergraph_MiniMapGages
struct UMiniMapGages_C_ExecuteUbergraph_MiniMapGages_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
