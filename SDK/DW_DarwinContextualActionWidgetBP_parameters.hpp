#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinContextualActionWidgetBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.KeyBinding
struct UDarwinContextualActionWidgetBP_C_KeyBinding_Params
{
};

// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.set Gamepad Button
struct UDarwinContextualActionWidgetBP_C_set_Gamepad_Button_Params
{
};

// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.EventCanPickupStuff
struct UDarwinContextualActionWidgetBP_C_EventCanPickupStuff_Params
{
	EDarwinItemTypeEnum*                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    playerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              bBoolPactRevive;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.EventTeleportAimStart
struct UDarwinContextualActionWidgetBP_C_EventTeleportAimStart_Params
{
};

// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.EventTeleportAimEnd
struct UDarwinContextualActionWidgetBP_C_EventTeleportAimEnd_Params
{
};

// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.Construct
struct UDarwinContextualActionWidgetBP_C_Construct_Params
{
};

// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.EventInputRebindSucceeded
struct UDarwinContextualActionWidgetBP_C_EventInputRebindSucceeded_Params
{
	struct FName*                                      ActionToRebind;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText*                                      NewKeyName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.EventInputResetToDefault
struct UDarwinContextualActionWidgetBP_C_EventInputResetToDefault_Params
{
};

// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.ExecuteUbergraph_DarwinContextualActionWidgetBP
struct UDarwinContextualActionWidgetBP_C_ExecuteUbergraph_DarwinContextualActionWidgetBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
