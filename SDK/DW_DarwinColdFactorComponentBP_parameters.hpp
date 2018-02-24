#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinColdFactorComponentBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.EventUpdateColdFactor
struct UDarwinColdFactorComponentBP_C_EventUpdateColdFactor_Params
{
	float*                                             currentColdFactor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.EventLocalBelow25Percent
struct UDarwinColdFactorComponentBP_C_EventLocalBelow25Percent_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.EventLocalAbove25Percent
struct UDarwinColdFactorComponentBP_C_EventLocalAbove25Percent_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.EventLocalBelow10Percent
struct UDarwinColdFactorComponentBP_C_EventLocalBelow10Percent_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.EventLocalAbove10Percent
struct UDarwinColdFactorComponentBP_C_EventLocalAbove10Percent_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinColdFactorComponentBP.DarwinColdFactorComponentBP_C.ExecuteUbergraph_DarwinColdFactorComponentBP
struct UDarwinColdFactorComponentBP_C_ExecuteUbergraph_DarwinColdFactorComponentBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
