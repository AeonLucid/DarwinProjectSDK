#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinGliderComponentBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventStartGlidingSimulated
struct UDarwinGliderComponentBP_C_EventStartGlidingSimulated_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventStopGlidingLocal
struct UDarwinGliderComponentBP_C_EventStopGlidingLocal_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventStopGlidingSimulated
struct UDarwinGliderComponentBP_C_EventStopGlidingSimulated_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventStartGlidingLocal
struct UDarwinGliderComponentBP_C_EventStartGlidingLocal_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventGliderLandedLocal
struct UDarwinGliderComponentBP_C_EventGliderLandedLocal_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventGliderLandedSimulated
struct UDarwinGliderComponentBP_C_EventGliderLandedSimulated_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.ExecuteUbergraph_DarwinGliderComponentBP
struct UDarwinGliderComponentBP_C_ExecuteUbergraph_DarwinGliderComponentBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
