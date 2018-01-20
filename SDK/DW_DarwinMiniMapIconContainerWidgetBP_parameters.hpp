#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinMiniMapIconContainerWidgetBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.ToMapCoord
struct UDarwinMiniMapIconContainerWidgetBP_C_ToMapCoord_Params
{
	struct FVector2D                                   InLoc;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   outLoc;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventClueStart
struct UDarwinMiniMapIconContainerWidgetBP_C_EventClueStart_Params
{
	int*                                               targetCharacterID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum*                               clueType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventManHuntStart
struct UDarwinMiniMapIconContainerWidgetBP_C_EventManHuntStart_Params
{
	int*                                               targetCharacterID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventFriendlyCraftableToolMinimapStart
struct UDarwinMiniMapIconContainerWidgetBP_C_EventFriendlyCraftableToolMinimapStart_Params
{
	struct FVector2D*                                  Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    worldLoc;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class ADarwinCraftableTool**                       tool;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllyTool;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventGameStartsNow
struct UDarwinMiniMapIconContainerWidgetBP_C_EventGameStartsNow_Params
{
};

// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventWardPing
struct UDarwinMiniMapIconContainerWidgetBP_C_EventWardPing_Params
{
	struct FVector2D*                                  Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    worldLoc;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventPredatorPing
struct UDarwinMiniMapIconContainerWidgetBP_C_EventPredatorPing_Params
{
	int*                                               targetCharacterID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    worldLoc;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventPredatorPulse
struct UDarwinMiniMapIconContainerWidgetBP_C_EventPredatorPulse_Params
{
	struct FVector2D*                                  Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    worldLoc;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventStartCampFire
struct UDarwinMiniMapIconContainerWidgetBP_C_EventStartCampFire_Params
{
	class ADarwinCampFire**                            campFire;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Loc;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.EventPoopStart
struct UDarwinMiniMapIconContainerWidgetBP_C_EventPoopStart_Params
{
	int*                                               targetDeerID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C.ExecuteUbergraph_DarwinMiniMapIconContainerWidgetBP
struct UDarwinMiniMapIconContainerWidgetBP_C_ExecuteUbergraph_DarwinMiniMapIconContainerWidgetBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
