#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DressRoomNewUnlockWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.SetSelectedItem
struct UDressRoomNewUnlockWidget_C_SetSelectedItem_Params
{
	struct FName                                       Option_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECustomizationRarity                               Rarity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Unreal_Unique_Id;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UDressRoomNewWidget_C*                       DressRoomNewWidget;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EPlayerCustomizationOption                         CustomizationOption;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.Construct
struct UDressRoomNewUnlockWidget_C_Construct_Params
{
};

// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.BndEvt__Button_Unlock_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewUnlockWidget_C_BndEvt__Button_Unlock_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.EventInventoryUpdated
struct UDressRoomNewUnlockWidget_C_EventInventoryUpdated_Params
{
};

// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.EventItemBought
struct UDressRoomNewUnlockWidget_C_EventItemBought_Params
{
	struct FString*                                    itemUniqueId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.Buy
struct UDressRoomNewUnlockWidget_C_Buy_Params
{
};

// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.EventInputSourceChanged
struct UDressRoomNewUnlockWidget_C_EventInputSourceChanged_Params
{
};

// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.RequestToBuy
struct UDressRoomNewUnlockWidget_C_RequestToBuy_Params
{
};

// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.ExecuteUbergraph_DressRoomNewUnlockWidget
struct UDressRoomNewUnlockWidget_C_ExecuteUbergraph_DressRoomNewUnlockWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewUnlockWidget.DressRoomNewUnlockWidget_C.ShirtBoughtEvent__DelegateSignature
struct UDressRoomNewUnlockWidget_C_ShirtBoughtEvent__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
