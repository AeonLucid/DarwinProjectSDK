#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ControlRebindButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ControlRebindButton.ControlRebindButton_C.Construct
struct UControlRebindButton_C_Construct_Params
{
};

// Function ControlRebindButton.ControlRebindButton_C.BndEvt__Button_Forward_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
struct UControlRebindButton_C_BndEvt__Button_Forward_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ControlRebindButton.ControlRebindButton_C.EventInputRebindSucceeded
struct UControlRebindButton_C_EventInputRebindSucceeded_Params
{
	struct FName*                                      ActionToRebind;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText*                                      NewKeyName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ControlRebindButton.ControlRebindButton_C.EventInputRebindCanceled
struct UControlRebindButton_C_EventInputRebindCanceled_Params
{
	struct FName*                                      ActionToRebind;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function ControlRebindButton.ControlRebindButton_C.EventInputBindingCleared
struct UControlRebindButton_C_EventInputBindingCleared_Params
{
	TArray<struct FName>*                              ActionName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ControlRebindButton.ControlRebindButton_C.EventInputResetToDefault
struct UControlRebindButton_C_EventInputResetToDefault_Params
{
};

// Function ControlRebindButton.ControlRebindButton_C.ExecuteUbergraph_ControlRebindButton
struct UControlRebindButton_C_ExecuteUbergraph_ControlRebindButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
