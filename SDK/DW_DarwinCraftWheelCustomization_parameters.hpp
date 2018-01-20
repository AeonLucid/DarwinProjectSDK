#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinCraftWheelCustomization_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.SetIsEnabledAllWheelElements
struct UDarwinCraftWheelCustomization_C_SetIsEnabledAllWheelElements_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseQuadrantException;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                QuadrantException;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.SetIsSelectingItem
struct UDarwinCraftWheelCustomization_C_SetIsSelectingItem_Params
{
	bool                                               ShouldSelectItem;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.GetMaximumRow
struct UDarwinCraftWheelCustomization_C_GetMaximumRow_Params
{
	int                                                ColumnIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.GetMaximumColumn
struct UDarwinCraftWheelCustomization_C_GetMaximumColumn_Params
{
	int                                                RowIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Max;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.UnHoverItem
struct UDarwinCraftWheelCustomization_C_UnHoverItem_Params
{
	int                                                Column;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Row;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.CanSelectItemGamepad
struct UDarwinCraftWheelCustomization_C_CanSelectItemGamepad_Params
{
	bool                                               CanSelectItem;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.GetItem
struct UDarwinCraftWheelCustomization_C_GetItem_Params
{
	int                                                ColumnNumber;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RowNumber;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCraftWheelAvailableItem_C*                  OutItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.SelectItemForReplacement
struct UDarwinCraftWheelCustomization_C_SelectItemForReplacement_Params
{
	int                                                NewColumn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewRow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.PlayUnselectedOnAll
struct UDarwinCraftWheelCustomization_C_PlayUnselectedOnAll_Params
{
	EDarwinItemTypeEnum                                Exception;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.PlaySwapedCurrentSelected
struct UDarwinCraftWheelCustomization_C_PlaySwapedCurrentSelected_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ResetCurrentSelectedIcon
struct UDarwinCraftWheelCustomization_C_ResetCurrentSelectedIcon_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.HideAvailableTextInfo
struct UDarwinCraftWheelCustomization_C_HideAvailableTextInfo_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ShowAvailableTextInfo
struct UDarwinCraftWheelCustomization_C_ShowAvailableTextInfo_Params
{
	EDarwinItemTypeEnum                                Item_type;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Clear Available UGrid
struct UDarwinCraftWheelCustomization_C_Clear_Available_UGrid_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.HideTextInfo
struct UDarwinCraftWheelCustomization_C_HideTextInfo_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ShowTextInfoOfType
struct UDarwinCraftWheelCustomization_C_ShowTextInfoOfType_Params
{
	EDarwinItemTypeEnum                                Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.InitializeArrays
struct UDarwinCraftWheelCustomization_C_InitializeArrays_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Construct
struct UDarwinCraftWheelCustomization_C_Construct_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventHoveredQuadrant
struct UDarwinCraftWheelCustomization_C_EventHoveredQuadrant_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventUnHoveredQuadrant
struct UDarwinCraftWheelCustomization_C_EventUnHoveredQuadrant_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventUpdateMouseAngle
struct UDarwinCraftWheelCustomization_C_EventUpdateMouseAngle_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventCraftWheelOpen
struct UDarwinCraftWheelCustomization_C_EventCraftWheelOpen_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventCraftWheelClose
struct UDarwinCraftWheelCustomization_C_EventCraftWheelClose_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventGameStartsNow
struct UDarwinCraftWheelCustomization_C_EventGameStartsNow_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventGameHasStarted
struct UDarwinCraftWheelCustomization_C_EventGameHasStarted_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventGamepadInventoryPressed
struct UDarwinCraftWheelCustomization_C_EventGamepadInventoryPressed_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventGamepadInventoryReleased
struct UDarwinCraftWheelCustomization_C_EventGamepadInventoryReleased_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ReHoverQuadrant
struct UDarwinCraftWheelCustomization_C_ReHoverQuadrant_Params
{
	int                                                QuadrantToHover;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventPressedQuadrant
struct UDarwinCraftWheelCustomization_C_EventPressedQuadrant_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Tick
struct UDarwinCraftWheelCustomization_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Show cw
struct UDarwinCraftWheelCustomization_C_Show_cw_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Hide CW
struct UDarwinCraftWheelCustomization_C_Hide_CW_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Init Parents in craft wheel
struct UDarwinCraftWheelCustomization_C_Init_Parents_in_craft_wheel_Params
{
	class UMainMenu_C*                                 Main_Menu;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMainMenuAlpha_C*                            Main_Menu_Alpha;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UDarwinCraftWheelCustomization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
struct UDarwinCraftWheelCustomization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
struct UDarwinCraftWheelCustomization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.Show Back Button in CW custo
struct UDarwinCraftWheelCustomization_C_Show_Back_Button_in_CW_custo_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuRight
struct UDarwinCraftWheelCustomization_C_EventMenuRight_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuLeft
struct UDarwinCraftWheelCustomization_C_EventMenuLeft_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuDown
struct UDarwinCraftWheelCustomization_C_EventMenuDown_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuUp
struct UDarwinCraftWheelCustomization_C_EventMenuUp_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuClick
struct UDarwinCraftWheelCustomization_C_EventMenuClick_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuBack
struct UDarwinCraftWheelCustomization_C_EventMenuBack_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuUpReleased
struct UDarwinCraftWheelCustomization_C_EventMenuUpReleased_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuDownReleased
struct UDarwinCraftWheelCustomization_C_EventMenuDownReleased_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuLeftReleased
struct UDarwinCraftWheelCustomization_C_EventMenuLeftReleased_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventMenuRightReleased
struct UDarwinCraftWheelCustomization_C_EventMenuRightReleased_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.EventInputSourceChanged
struct UDarwinCraftWheelCustomization_C_EventInputSourceChanged_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.BackButtonSimCWClose
struct UDarwinCraftWheelCustomization_C_BackButtonSimCWClose_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ExitWheelCustomization
struct UDarwinCraftWheelCustomization_C_ExitWheelCustomization_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ShowTuto
struct UDarwinCraftWheelCustomization_C_ShowTuto_Params
{
};

// Function DarwinCraftWheelCustomization.DarwinCraftWheelCustomization_C.ExecuteUbergraph_DarwinCraftWheelCustomization
struct UDarwinCraftWheelCustomization_C_ExecuteUbergraph_DarwinCraftWheelCustomization_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
