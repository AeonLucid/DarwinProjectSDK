#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_RadialPushPowerBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RadialPushPowerBP.RadialPushPowerBP_C.EventLocalPowerOff
struct URadialPushPowerBP_C_EventLocalPowerOff_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPushPowerBP.RadialPushPowerBP_C.EventLocalPowerActivate
struct URadialPushPowerBP_C_EventLocalPowerActivate_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPushPowerBP.RadialPushPowerBP_C.EventSimulatedPowerActivate
struct URadialPushPowerBP_C_EventSimulatedPowerActivate_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function RadialPushPowerBP.RadialPushPowerBP_C.ReceiveTick
struct URadialPushPowerBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPushPowerBP.RadialPushPowerBP_C.EventLocalPowerOn
struct URadialPushPowerBP_C_EventLocalPowerOn_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPushPowerBP.RadialPushPowerBP_C.EventSimulatedPowerOff
struct URadialPushPowerBP_C_EventSimulatedPowerOff_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function RadialPushPowerBP.RadialPushPowerBP_C.EventSimulatedPowerOn
struct URadialPushPowerBP_C_EventSimulatedPowerOn_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function RadialPushPowerBP.RadialPushPowerBP_C.ExecuteUbergraph_RadialPushPowerBP
struct URadialPushPowerBP_C_ExecuteUbergraph_RadialPushPowerBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
