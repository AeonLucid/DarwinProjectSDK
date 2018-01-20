#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_WardMinimapIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WardMinimapIcon.WardMinimapIcon_C.ToMapCoord
struct UWardMinimapIcon_C_ToMapCoord_Params
{
	struct FVector2D                                   InLoc;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   outLoc;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function WardMinimapIcon.WardMinimapIcon_C.Initialize
struct UWardMinimapIcon_C_Initialize_Params
{
	struct FVector2D                                   Loc;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WardMinimapIcon.WardMinimapIcon_C.ExecuteUbergraph_WardMinimapIcon
struct UWardMinimapIcon_C_ExecuteUbergraph_WardMinimapIcon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
