#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinPredatorMinimapIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinPredatorMinimapIcon.DarwinPredatorMinimapIcon_C.ToMapCoord
struct UDarwinPredatorMinimapIcon_C_ToMapCoord_Params
{
	struct FVector2D                                   InLoc;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   outLoc;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function DarwinPredatorMinimapIcon.DarwinPredatorMinimapIcon_C.Initialize
struct UDarwinPredatorMinimapIcon_C_Initialize_Params
{
	int                                                playerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Loc;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function DarwinPredatorMinimapIcon.DarwinPredatorMinimapIcon_C.ExecuteUbergraph_DarwinPredatorMinimapIcon
struct UDarwinPredatorMinimapIcon_C_ExecuteUbergraph_DarwinPredatorMinimapIcon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
