#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CraftWheelIcon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CraftWheelIcon.CraftWheelIcon_C.SetIsInCrafting
struct UCraftWheelIcon_C_SetIsInCrafting_Params
{
	bool                                               bIsInCrafting;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftWheelIcon.CraftWheelIcon_C.EventUpdateCraftableItemIcons
struct UCraftWheelIcon_C_EventUpdateCraftableItemIcons_Params
{
	EDarwinItemTypeEnum*                               ItemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CraftWheelIcon.CraftWheelIcon_C.EventCraftWheelOpen
struct UCraftWheelIcon_C_EventCraftWheelOpen_Params
{
};

// Function CraftWheelIcon.CraftWheelIcon_C.EventCraftWheelClose
struct UCraftWheelIcon_C_EventCraftWheelClose_Params
{
};

// Function CraftWheelIcon.CraftWheelIcon_C.EventUpdateButtons
struct UCraftWheelIcon_C_EventUpdateButtons_Params
{
};

// Function CraftWheelIcon.CraftWheelIcon_C.EventGameStartsNow
struct UCraftWheelIcon_C_EventGameStartsNow_Params
{
};

// Function CraftWheelIcon.CraftWheelIcon_C.EventGameHasStarted
struct UCraftWheelIcon_C_EventGameHasStarted_Params
{
};

// Function CraftWheelIcon.CraftWheelIcon_C.WasSwaped
struct UCraftWheelIcon_C_WasSwaped_Params
{
};

// Function CraftWheelIcon.CraftWheelIcon_C.WasSawped
struct UCraftWheelIcon_C_WasSawped_Params
{
};

// Function CraftWheelIcon.CraftWheelIcon_C.MyTick
struct UCraftWheelIcon_C_MyTick_Params
{
};

// Function CraftWheelIcon.CraftWheelIcon_C.Construct
struct UCraftWheelIcon_C_Construct_Params
{
};

// Function CraftWheelIcon.CraftWheelIcon_C.SetOriginalIcon
struct UCraftWheelIcon_C_SetOriginalIcon_Params
{
};

// Function CraftWheelIcon.CraftWheelIcon_C.SetWillBeReplaced
struct UCraftWheelIcon_C_SetWillBeReplaced_Params
{
};

// Function CraftWheelIcon.CraftWheelIcon_C.EventHover
struct UCraftWheelIcon_C_EventHover_Params
{
};

// Function CraftWheelIcon.CraftWheelIcon_C.EventUnHover
struct UCraftWheelIcon_C_EventUnHover_Params
{
};

// Function CraftWheelIcon.CraftWheelIcon_C.ExecuteUbergraph_CraftWheelIcon
struct UCraftWheelIcon_C_ExecuteUbergraph_CraftWheelIcon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
