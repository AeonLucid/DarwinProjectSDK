#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DecoyLootBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DecoyLootBP.DecoyLootBP_C.UserConstructionScript
struct ADecoyLootBP_C_UserConstructionScript_Params
{
};

// Function DecoyLootBP.DecoyLootBP_C.HighlightLoot
struct ADecoyLootBP_C_HighlightLoot_Params
{
	bool*                                              enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               stencil_value;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DecoyLootBP.DecoyLootBP_C.EventLootReset
struct ADecoyLootBP_C_EventLootReset_Params
{
};

// Function DecoyLootBP.DecoyLootBP_C.EventLootPickedUp
struct ADecoyLootBP_C_EventLootPickedUp_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DecoyLootBP.DecoyLootBP_C.EventActivateOpenParticles
struct ADecoyLootBP_C_EventActivateOpenParticles_Params
{
};

// Function DecoyLootBP.DecoyLootBP_C.EventUpdateOpenRays
struct ADecoyLootBP_C_EventUpdateOpenRays_Params
{
	float*                                             Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DecoyLootBP.DecoyLootBP_C.ExecuteUbergraph_DecoyLootBP
struct ADecoyLootBP_C_ExecuteUbergraph_DecoyLootBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
