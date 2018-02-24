#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinJumpingComponentBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.EventLocalJump
struct UDarwinJumpingComponentBP_C_EventLocalJump_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.EventSimulatedJump
struct UDarwinJumpingComponentBP_C_EventSimulatedJump_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.EventJumpLand
struct UDarwinJumpingComponentBP_C_EventJumpLand_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.ReceiveTick
struct UDarwinJumpingComponentBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.EventLocalJumpThroughWindow
struct UDarwinJumpingComponentBP_C_EventLocalJumpThroughWindow_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.EventSimulatedJumpThroughWindow
struct UDarwinJumpingComponentBP_C_EventSimulatedJumpThroughWindow_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.ExecuteUbergraph_DarwinJumpingComponentBP
struct UDarwinJumpingComponentBP_C_ExecuteUbergraph_DarwinJumpingComponentBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
