#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MiniMapCharacterPylons_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.ToMapCoord
struct UMiniMapCharacterPylons_C_ToMapCoord_Params
{
	struct FVector2D                                   InLoc;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   outLoc;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.Initialize
struct UMiniMapCharacterPylons_C_Initialize_Params
{
	int                                                PylonIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Loc;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventPylonJustActivated
struct UMiniMapCharacterPylons_C_EventPylonJustActivated_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventPylonStartedBeingHarvested
struct UMiniMapCharacterPylons_C_EventPylonStartedBeingHarvested_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               harvesterID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventPylonStoppedBeingHarvested
struct UMiniMapCharacterPylons_C_EventPylonStoppedBeingHarvested_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventPylonJustDeactivated
struct UMiniMapCharacterPylons_C_EventPylonJustDeactivated_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventPylonWillReactivate
struct UMiniMapCharacterPylons_C_EventPylonWillReactivate_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.EventAllianceStart
struct UMiniMapCharacterPylons_C_EventAllianceStart_Params
{
	int*                                               allyID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniMapCharacterPylons.MiniMapCharacterPylons_C.ExecuteUbergraph_MiniMapCharacterPylons
struct UMiniMapCharacterPylons_C_ExecuteUbergraph_MiniMapCharacterPylons_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
