#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CamouflagePowerBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CamouflagePowerBP.CamouflagePowerBP_C.EventLocalPowerOn
struct UCamouflagePowerBP_C_EventLocalPowerOn_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CamouflagePowerBP.CamouflagePowerBP_C.EventLocalPowerOff
struct UCamouflagePowerBP_C_EventLocalPowerOff_Params
{
	class ADarwinCharacter**                           Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CamouflagePowerBP.CamouflagePowerBP_C.EventSimulatedPowerOn
struct UCamouflagePowerBP_C_EventSimulatedPowerOn_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CamouflagePowerBP.CamouflagePowerBP_C.EventSimulatedPowerOff
struct UCamouflagePowerBP_C_EventSimulatedPowerOff_Params
{
	struct FVector*                                    Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function CamouflagePowerBP.CamouflagePowerBP_C.ExecuteUbergraph_CamouflagePowerBP
struct UCamouflagePowerBP_C_ExecuteUbergraph_CamouflagePowerBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
