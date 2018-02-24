#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_FriendlyCraftableToolIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FriendlyCraftableToolIcon.FriendlyCraftableToolIcon_C.Initialize
struct UFriendlyCraftableToolIcon_C_Initialize_Params
{
	class ADarwinCraftableTool*                        CraftableTool;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Loc;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               AllyTool;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendlyCraftableToolIcon.FriendlyCraftableToolIcon_C.ToMapCoord
struct UFriendlyCraftableToolIcon_C_ToMapCoord_Params
{
	struct FVector2D                                   InLoc;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   outLoc;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function FriendlyCraftableToolIcon.FriendlyCraftableToolIcon_C.EventFriendlyCraftableToolMinimapEnd
struct UFriendlyCraftableToolIcon_C_EventFriendlyCraftableToolMinimapEnd_Params
{
	class ADarwinCraftableTool**                       tool;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendlyCraftableToolIcon.FriendlyCraftableToolIcon_C.ExecuteUbergraph_FriendlyCraftableToolIcon
struct UFriendlyCraftableToolIcon_C_ExecuteUbergraph_FriendlyCraftableToolIcon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
