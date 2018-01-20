#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InvSlotArrow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InvSlotArrow.InvSlotArrow_C.EventUpdateNumberOfArrows
struct UInvSlotArrow_C_EventUpdateNumberOfArrows_Params
{
	int*                                               numberOfArrows;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncrement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InvSlotArrow.InvSlotArrow_C.EventGameStartsNow
struct UInvSlotArrow_C_EventGameStartsNow_Params
{
};

// Function InvSlotArrow.InvSlotArrow_C.EventGameHasStarted
struct UInvSlotArrow_C_EventGameHasStarted_Params
{
};

// Function InvSlotArrow.InvSlotArrow_C.EventUpdateCraftableItemIcons
struct UInvSlotArrow_C_EventUpdateCraftableItemIcons_Params
{
	EDarwinItemTypeEnum*                               ItemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InvSlotArrow.InvSlotArrow_C.ExecuteUbergraph_InvSlotArrow
struct UInvSlotArrow_C_ExecuteUbergraph_InvSlotArrow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
