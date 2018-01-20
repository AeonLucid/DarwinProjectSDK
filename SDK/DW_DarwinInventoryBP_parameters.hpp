#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinInventoryBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinInventoryBP.DarwinInventoryBP_C.Key Binding
struct UDarwinInventoryBP_C_Key_Binding_Params
{
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.GetToolTipWidget_1
struct UDarwinInventoryBP_C_GetToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.IsAnyInventorySlotHovered
struct UDarwinInventoryBP_C_IsAnyInventorySlotHovered_Params
{
	bool                                               IsHovered;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.FindPreviousFullSlot
struct UDarwinInventoryBP_C_FindPreviousFullSlot_Params
{
	int                                                InitialSlot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PreviousFullSlot;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.FindNextFullSlot
struct UDarwinInventoryBP_C_FindNextFullSlot_Params
{
	int                                                InitialSlot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NextFullSlot;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.DarwinSetTooltipText
struct UDarwinInventoryBP_C_DarwinSetTooltipText_Params
{
	class UDarwinInventorySlot_C*                      InvSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventNewWheelventoryMode
struct UDarwinInventoryBP_C_EventNewWheelventoryMode_Params
{
	EWheelventoryMode*                                 newMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventCraftWheelClose
struct UDarwinInventoryBP_C_EventCraftWheelClose_Params
{
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventCraftWheelOpen
struct UDarwinInventoryBP_C_EventCraftWheelOpen_Params
{
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventGameStartsInSeconds
struct UDarwinInventoryBP_C_EventGameStartsInSeconds_Params
{
	int*                                               Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventNumberOfGamesPlayed
struct UDarwinInventoryBP_C_EventNumberOfGamesPlayed_Params
{
	int*                                               nbGamesPlayed;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.UpdateTuto
struct UDarwinInventoryBP_C_UpdateTuto_Params
{
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventGameStartsNow
struct UDarwinInventoryBP_C_EventGameStartsNow_Params
{
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.come back to keyboard
struct UDarwinInventoryBP_C_come_back_to_keyboard_Params
{
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventInventorySlotChanged
struct UDarwinInventoryBP_C_EventInventorySlotChanged_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Number;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.Tick
struct UDarwinInventoryBP_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventGamepadInventoryUse
struct UDarwinInventoryBP_C_EventGamepadInventoryUse_Params
{
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventPlayerCraftedPower
struct UDarwinInventoryBP_C_EventPlayerCraftedPower_Params
{
	int*                                               PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinItemTypeEnum*                               powerType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventUpdateNumberOfElectronic
struct UDarwinInventoryBP_C_EventUpdateNumberOfElectronic_Params
{
	int*                                               numberOfElectronic;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncrement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.ManageGamepad
struct UDarwinInventoryBP_C_ManageGamepad_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventGameHasStarted
struct UDarwinInventoryBP_C_EventGameHasStarted_Params
{
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventInputSourceChanged
struct UDarwinInventoryBP_C_EventInputSourceChanged_Params
{
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.Construct
struct UDarwinInventoryBP_C_Construct_Params
{
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventGamepadInventoryPressed
struct UDarwinInventoryBP_C_EventGamepadInventoryPressed_Params
{
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventGamepadInventoryMoveRight
struct UDarwinInventoryBP_C_EventGamepadInventoryMoveRight_Params
{
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventGamepadInventoryMoveLeft
struct UDarwinInventoryBP_C_EventGamepadInventoryMoveLeft_Params
{
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventGamepadInventoryReleased
struct UDarwinInventoryBP_C_EventGamepadInventoryReleased_Params
{
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventInputRebindSucceeded
struct UDarwinInventoryBP_C_EventInputRebindSucceeded_Params
{
	struct FName*                                      ActionToRebind;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText*                                      NewKeyName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.EventInputResetToDefault
struct UDarwinInventoryBP_C_EventInputResetToDefault_Params
{
};

// Function DarwinInventoryBP.DarwinInventoryBP_C.ExecuteUbergraph_DarwinInventoryBP
struct UDarwinInventoryBP_C_ExecuteUbergraph_DarwinInventoryBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
