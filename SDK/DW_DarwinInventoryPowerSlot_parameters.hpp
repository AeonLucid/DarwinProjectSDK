#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinInventoryPowerSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.SetSlotTypeAndIcon
struct UDarwinInventoryPowerSlot_C_SetSlotTypeAndIcon_Params
{
	EDarwinItemTypeEnum                                InSlotType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.ActivatePower
struct UDarwinInventoryPowerSlot_C_ActivatePower_Params
{
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventInventorySlotChanged
struct UDarwinInventoryPowerSlot_C_EventInventorySlotChanged_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventUpdateTeleportCooldown
struct UDarwinInventoryPowerSlot_C_EventUpdateTeleportCooldown_Params
{
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               timeLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventTeleportCooldownStart
struct UDarwinInventoryPowerSlot_C_EventTeleportCooldownStart_Params
{
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventTeleportReady
struct UDarwinInventoryPowerSlot_C_EventTeleportReady_Params
{
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventTeleportAimStart
struct UDarwinInventoryPowerSlot_C_EventTeleportAimStart_Params
{
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventTeleportAimEnd
struct UDarwinInventoryPowerSlot_C_EventTeleportAimEnd_Params
{
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UDarwinInventoryPowerSlot_C_BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UDarwinInventoryPowerSlot_C_BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventOnMouseHidden
struct UDarwinInventoryPowerSlot_C_EventOnMouseHidden_Params
{
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UDarwinInventoryPowerSlot_C_BndEvt__ButtonInvSlot_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventRequestRemapInventoryItem
struct UDarwinInventoryPowerSlot_C_EventRequestRemapInventoryItem_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.GamepadHover
struct UDarwinInventoryPowerSlot_C_GamepadHover_Params
{
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.GamepadUnHovered
struct UDarwinInventoryPowerSlot_C_GamepadUnHovered_Params
{
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.UpdateSlot
struct UDarwinInventoryPowerSlot_C_UpdateSlot_Params
{
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventUpdatePowerCooldown
struct UDarwinInventoryPowerSlot_C_EventUpdatePowerCooldown_Params
{
	EDarwinItemTypeEnum*                               powerType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               timeLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventUpdatePowerDuration
struct UDarwinInventoryPowerSlot_C_EventUpdatePowerDuration_Params
{
	EDarwinItemTypeEnum*                               powerType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               timeLeft;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventPowerReady
struct UDarwinInventoryPowerSlot_C_EventPowerReady_Params
{
	EDarwinItemTypeEnum*                               powerType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventPowerCooldownStart
struct UDarwinInventoryPowerSlot_C_EventPowerCooldownStart_Params
{
	EDarwinItemTypeEnum*                               powerType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventPowerOn
struct UDarwinInventoryPowerSlot_C_EventPowerOn_Params
{
	EDarwinItemTypeEnum*                               powerType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventPowerOff
struct UDarwinInventoryPowerSlot_C_EventPowerOff_Params
{
	EDarwinItemTypeEnum*                               powerType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventUpdateCraftableItemIcons
struct UDarwinInventoryPowerSlot_C_EventUpdateCraftableItemIcons_Params
{
	EDarwinItemTypeEnum*                               ItemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventPowerAlmostReady
struct UDarwinInventoryPowerSlot_C_EventPowerAlmostReady_Params
{
	EDarwinItemTypeEnum*                               powerType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.EventTeleportAlmostReady
struct UDarwinInventoryPowerSlot_C_EventTeleportAlmostReady_Params
{
};

// Function DarwinInventoryPowerSlot.DarwinInventoryPowerSlot_C.ExecuteUbergraph_DarwinInventoryPowerSlot
struct UDarwinInventoryPowerSlot_C_ExecuteUbergraph_DarwinInventoryPowerSlot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
