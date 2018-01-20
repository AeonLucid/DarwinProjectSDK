#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinInventorySlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinInventorySlot.DarwinInventorySlot_C.SetSlotTypeAndIcon
struct UDarwinInventorySlot_C_SetSlotTypeAndIcon_Params
{
	EDarwinItemTypeEnum                                InSlotType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventorySlot.DarwinInventorySlot_C.ActivateConsumable
struct UDarwinInventorySlot_C_ActivateConsumable_Params
{
};

// Function DarwinInventorySlot.DarwinInventorySlot_C.BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UDarwinInventorySlot_C_BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DarwinInventorySlot.DarwinInventorySlot_C.BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UDarwinInventorySlot_C_BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DarwinInventorySlot.DarwinInventorySlot_C.EventOnMouseHidden
struct UDarwinInventorySlot_C_EventOnMouseHidden_Params
{
};

// Function DarwinInventorySlot.DarwinInventorySlot_C.BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UDarwinInventorySlot_C_BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DarwinInventorySlot.DarwinInventorySlot_C.EventRequestRemapInventoryItem
struct UDarwinInventorySlot_C_EventRequestRemapInventoryItem_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventorySlot.DarwinInventorySlot_C.EventInventorySlotChanged
struct UDarwinInventorySlot_C_EventInventorySlotChanged_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventorySlot.DarwinInventorySlot_C.GamepadHover
struct UDarwinInventorySlot_C_GamepadHover_Params
{
};

// Function DarwinInventorySlot.DarwinInventorySlot_C.GamepadUnHovered
struct UDarwinInventorySlot_C_GamepadUnHovered_Params
{
};

// Function DarwinInventorySlot.DarwinInventorySlot_C.UpdateSlot
struct UDarwinInventorySlot_C_UpdateSlot_Params
{
};

// Function DarwinInventorySlot.DarwinInventorySlot_C.EventUpdateCraftableItemIcons
struct UDarwinInventorySlot_C_EventUpdateCraftableItemIcons_Params
{
	EDarwinItemTypeEnum*                               ItemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventorySlot.DarwinInventorySlot_C.ExecuteUbergraph_DarwinInventorySlot
struct UDarwinInventorySlot_C_ExecuteUbergraph_DarwinInventorySlot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
