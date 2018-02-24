#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PredatorPulseWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PredatorPulseWidget.PredatorPulseWidget_C.ToMapCoord
struct UPredatorPulseWidget_C_ToMapCoord_Params
{
	struct FVector2D                                   InLoc;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   outLoc;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function PredatorPulseWidget.PredatorPulseWidget_C.Initialize
struct UPredatorPulseWidget_C_Initialize_Params
{
	struct FVector2D                                   Loc;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PredatorPulseWidget.PredatorPulseWidget_C.ExecuteUbergraph_PredatorPulseWidget
struct UPredatorPulseWidget_C_ExecuteUbergraph_PredatorPulseWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
