#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DressRoomNewWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DressRoomNewWidget.DressRoomNewWidget_C.IsItemVisible
struct UDressRoomNewWidget_C_IsItemVisible_Params
{
	bool                                               MaterialVisibility;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MaterialVisibilityForDeveloppers;                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsVisible;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.GetItemFromUniqueId
struct UDressRoomNewWidget_C_GetItemFromUniqueId_Params
{
	struct FString                                     UnrealUniqueId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UDressRoomNewMaterialWidget_C*               OutItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.UpdateSelectionIndexes
struct UDressRoomNewWidget_C_UpdateSelectionIndexes_Params
{
	struct FString                                     UnrealUniqueId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.IsDressRoomNavigationAllowed
struct UDressRoomNewWidget_C_IsDressRoomNavigationAllowed_Params
{
	bool                                               YES;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.SelectCategory
struct UDressRoomNewWidget_C_SelectCategory_Params
{
	int                                                NewCategory;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.UnHoverItem
struct UDressRoomNewWidget_C_UnHoverItem_Params
{
	int                                                RowIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColumnIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.SelectItem
struct UDressRoomNewWidget_C_SelectItem_Params
{
	int                                                NewColumn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewRow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.GetItem
struct UDressRoomNewWidget_C_GetItem_Params
{
	int                                                RowIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ColumnIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDressRoomNewMaterialWidget_C*               OutItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.GetMaximumRow
struct UDressRoomNewWidget_C_GetMaximumRow_Params
{
	int                                                ColumnId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.GetMaximumColumn
struct UDressRoomNewWidget_C_GetMaximumColumn_Params
{
	int                                                RowIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.SetBodyType
struct UDressRoomNewWidget_C_SetBodyType_Params
{
	int                                                SuitIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.UpdateNewsItems
struct UDressRoomNewWidget_C_UpdateNewsItems_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.ReloadSavedCustomization
struct UDressRoomNewWidget_C_ReloadSavedCustomization_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EnableAllButtonCategories
struct UDressRoomNewWidget_C_EnableAllButtonCategories_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EmptyMaterialsScrollBox
struct UDressRoomNewWidget_C_EmptyMaterialsScrollBox_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.ApplyHelmetToAvatar
struct UDressRoomNewWidget_C_ApplyHelmetToAvatar_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.ApplyHairsToAvatar
struct UDressRoomNewWidget_C_ApplyHairsToAvatar_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.ApplyEyesToAvatar
struct UDressRoomNewWidget_C_ApplyEyesToAvatar_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.ApplyBowToAvatar
struct UDressRoomNewWidget_C_ApplyBowToAvatar_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.ApplyAxeToAvatar
struct UDressRoomNewWidget_C_ApplyAxeToAvatar_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Get_Button_Apply_bIsEnabled_1
struct UDressRoomNewWidget_C_Get_Button_Apply_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.AddOption
struct UDressRoomNewWidget_C_AddOption_Params
{
	EPlayerCustomizationOption                         OptionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EmptyUGridPanel
struct UDressRoomNewWidget_C_EmptyUGridPanel_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.ApplySuitToAvatar
struct UDressRoomNewWidget_C_ApplySuitToAvatar_Params
{
	int                                                SuitVersionIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.GoToBodyCam
struct UDressRoomNewWidget_C_GoToBodyCam_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.GoToHeadCam
struct UDressRoomNewWidget_C_GoToHeadCam_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.DestroyDressRoom
struct UDressRoomNewWidget_C_DestroyDressRoom_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.InitializeDressRoom
struct UDressRoomNewWidget_C_InitializeDressRoom_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.ResetModelsMenu
struct UDressRoomNewWidget_C_ResetModelsMenu_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.apply
struct UDressRoomNewWidget_C_apply_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Emotes_K2Node_ComponentBoundEvent_2565_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Emotes_K2Node_ComponentBoundEvent_2565_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Victory_K2Node_ComponentBoundEvent_2601_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Victory_K2Node_ComponentBoundEvent_2601_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_815_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_815_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Armor_K2Node_ComponentBoundEvent_1488_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Armor_K2Node_ComponentBoundEvent_1488_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Coat_K2Node_ComponentBoundEvent_1579_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Coat_K2Node_ComponentBoundEvent_1579_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Boots_K2Node_ComponentBoundEvent_1533_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Boots_K2Node_ComponentBoundEvent_1533_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Axe_K2Node_ComponentBoundEvent_1880_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Axe_K2Node_ComponentBoundEvent_1880_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Bow_K2Node_ComponentBoundEvent_1928_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Bow_K2Node_ComponentBoundEvent_1928_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_59_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Skin_K2Node_ComponentBoundEvent_1390_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Skin_K2Node_ComponentBoundEvent_1390_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Hair_K2Node_ComponentBoundEvent_714_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Hair_K2Node_ComponentBoundEvent_714_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_731_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_731_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Shirt Category
struct UDressRoomNewWidget_C_Open_Shirt_Category_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EventItemBought
struct UDressRoomNewWidget_C_EventItemBought_Params
{
	struct FString*                                    itemUniqueId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EventInventoryUpdated
struct UDressRoomNewWidget_C_EventInventoryUpdated_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.UpdateOption
struct UDressRoomNewWidget_C_UpdateOption_Params
{
	EPlayerCustomizationOption                         NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Init Parents in dress Room
struct UDressRoomNewWidget_C_Init_Parents_in_dress_Room_Params
{
	class UMainMenu_C*                                 Main_Menu;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMainMenuAlpha_C*                            Main_Menu_Alpha;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__ButtonSwitchGender_K2Node_ComponentBoundEvent_919_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__ButtonSwitchGender_K2Node_ComponentBoundEvent_919_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__CheckBox_317_K2Node_ComponentBoundEvent_337_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__CheckBox_317_K2Node_ComponentBoundEvent_337_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__CheckBox_318_K2Node_ComponentBoundEvent_2181_OnCheckBoxComponentStateChanged__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__CheckBox_318_K2Node_ComponentBoundEvent_2181_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Dress Room on main menu
struct UDressRoomNewWidget_C_Dress_Room_on_main_menu_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Armor_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Armor_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Armor_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Armor_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Axe_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Axe_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Bow_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Bow_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Coat_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Coat_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Coat_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Coat_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Axe_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Axe_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Bow_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Bow_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_FacialHair_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Hair_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Hair_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Hair_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Hair_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Head_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Head_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Head_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Head_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Pants_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Pants_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Pants_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Pants_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Special_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Special_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Special_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Special_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Shirt_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Shirt_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Shirt_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Shirt_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Helmet_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Boots_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Boots_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_Boots_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_Boots_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Destruct
struct UDressRoomNewWidget_C_Destruct_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Tick
struct UDressRoomNewWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Are you sure ?
struct UDressRoomNewWidget_C_Are_you_sure___Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_124_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_124_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_179_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_179_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_235_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_NO_K2Node_ComponentBoundEvent_235_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_292_OnButtonHoverEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_NO_K2Node_ComponentBoundEvent_292_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_NO_K2Node_ComponentBoundEvent_345_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_NO_K2Node_ComponentBoundEvent_345_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Construct
struct UDressRoomNewWidget_C_Construct_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BndEvt__Button_YES_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature
struct UDressRoomNewWidget_C_BndEvt__Button_YES_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.MenuBackPressed
struct UDressRoomNewWidget_C_MenuBackPressed_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EventInputSourceChanged
struct UDressRoomNewWidget_C_EventInputSourceChanged_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuRight
struct UDressRoomNewWidget_C_EventMenuRight_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuLeft
struct UDressRoomNewWidget_C_EventMenuLeft_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuDown
struct UDressRoomNewWidget_C_EventMenuDown_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuUp
struct UDressRoomNewWidget_C_EventMenuUp_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Pants Category
struct UDressRoomNewWidget_C_Open_Pants_Category_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Helmet Category
struct UDressRoomNewWidget_C_Open_Helmet_Category_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Armor Category
struct UDressRoomNewWidget_C_Open_Armor_Category_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Coat Category
struct UDressRoomNewWidget_C_Open_Coat_Category_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Boots Category
struct UDressRoomNewWidget_C_Open_Boots_Category_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Head Category
struct UDressRoomNewWidget_C_Open_Head_Category_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Hair Category
struct UDressRoomNewWidget_C_Open_Hair_Category_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Open FacialHair Category
struct UDressRoomNewWidget_C_Open_FacialHair_Category_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Special Category
struct UDressRoomNewWidget_C_Open_Special_Category_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Axe Category
struct UDressRoomNewWidget_C_Open_Axe_Category_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.Open Bow Category
struct UDressRoomNewWidget_C_Open_Bow_Category_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverBow
struct UDressRoomNewWidget_C_OnHoverBow_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverBow
struct UDressRoomNewWidget_C_OnUnhoverBow_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverAxe
struct UDressRoomNewWidget_C_OnHoverAxe_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverAxe
struct UDressRoomNewWidget_C_OnUnhoverAxe_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverSpecial
struct UDressRoomNewWidget_C_OnHoverSpecial_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverSpecial
struct UDressRoomNewWidget_C_OnUnhoverSpecial_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverFacialAir
struct UDressRoomNewWidget_C_OnHoverFacialAir_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverFacialAir
struct UDressRoomNewWidget_C_OnUnhoverFacialAir_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverHair
struct UDressRoomNewWidget_C_OnHoverHair_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverAir
struct UDressRoomNewWidget_C_OnUnhoverAir_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverHead
struct UDressRoomNewWidget_C_OnHoverHead_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverHead
struct UDressRoomNewWidget_C_OnUnhoverHead_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverBoots
struct UDressRoomNewWidget_C_OnHoverBoots_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverBoots
struct UDressRoomNewWidget_C_OnUnhoverBoots_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverCoat
struct UDressRoomNewWidget_C_OnHoverCoat_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverCoat
struct UDressRoomNewWidget_C_OnUnhoverCoat_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverArmor
struct UDressRoomNewWidget_C_OnHoverArmor_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverArmor
struct UDressRoomNewWidget_C_OnUnhoverArmor_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.CnHoverHelmet
struct UDressRoomNewWidget_C_CnHoverHelmet_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverHelmet
struct UDressRoomNewWidget_C_OnUnhoverHelmet_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverPants
struct UDressRoomNewWidget_C_OnHoverPants_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoverPants
struct UDressRoomNewWidget_C_OnUnhoverPants_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnHoverShirt
struct UDressRoomNewWidget_C_OnHoverShirt_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.OnUnhoveredShirt
struct UDressRoomNewWidget_C_OnUnhoveredShirt_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuRightPagePressed
struct UDressRoomNewWidget_C_EventMenuRightPagePressed_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuLeftPagePressed
struct UDressRoomNewWidget_C_EventMenuLeftPagePressed_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuXPressed
struct UDressRoomNewWidget_C_EventMenuXPressed_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.ToggleShowCraftable
struct UDressRoomNewWidget_C_ToggleShowCraftable_Params
{
	bool                                               IsChecked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuYPressed
struct UDressRoomNewWidget_C_EventMenuYPressed_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.SwitchGender
struct UDressRoomNewWidget_C_SwitchGender_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BuyConfirmed
struct UDressRoomNewWidget_C_BuyConfirmed_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.BuyCanceled
struct UDressRoomNewWidget_C_BuyCanceled_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuClick
struct UDressRoomNewWidget_C_EventMenuClick_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EventMenuBack
struct UDressRoomNewWidget_C_EventMenuBack_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EventGameStartsNow
struct UDressRoomNewWidget_C_EventGameStartsNow_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EventInGameMenuAction
struct UDressRoomNewWidget_C_EventInGameMenuAction_Params
{
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.EventPlayerProfileStatsReceived
struct UDressRoomNewWidget_C_EventPlayerProfileStatsReceived_Params
{
	struct FDarwinCareerStats*                         stats;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FDarwinProfile*                             Profile;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DressRoomNewWidget.DressRoomNewWidget_C.ExecuteUbergraph_DressRoomNewWidget
struct UDressRoomNewWidget_C_ExecuteUbergraph_DressRoomNewWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
