#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_GateIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GateIcon.GateIcon_C.Initialize
struct UGateIcon_C_Initialize_Params
{
	struct FVector2D                                   Loc;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class ADarwinGate*                                 Gate;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GateIcon.GateIcon_C.ToMapCoord
struct UGateIcon_C_ToMapCoord_Params
{
	struct FVector2D                                   InLoc;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   outLoc;                                                   // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
