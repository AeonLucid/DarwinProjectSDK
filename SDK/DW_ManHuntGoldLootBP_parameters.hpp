#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ManHuntGoldLootBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.UserConstructionScript
struct AManHuntGoldLootBP_C_UserConstructionScript_Params
{
};

// Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.HighlightLoot
struct AManHuntGoldLootBP_C_HighlightLoot_Params
{
	bool*                                              enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               stencil_value;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.EventLootReset
struct AManHuntGoldLootBP_C_EventLootReset_Params
{
};

// Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.EventLootPickedUp
struct AManHuntGoldLootBP_C_EventLootPickedUp_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.EventActivateOpenParticles
struct AManHuntGoldLootBP_C_EventActivateOpenParticles_Params
{
};

// Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.EventUpdateOpenRays
struct AManHuntGoldLootBP_C_EventUpdateOpenRays_Params
{
	float*                                             Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ManHuntGoldLootBP.ManHuntGoldLootBP_C.ExecuteUbergraph_ManHuntGoldLootBP
struct AManHuntGoldLootBP_C_ExecuteUbergraph_ManHuntGoldLootBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
