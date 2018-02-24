#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MuteAllButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MuteAllButton.MuteAllButton_C.MakeBlue
struct UMuteAllButton_C_MakeBlue_Params
{
};

// Function MuteAllButton.MuteAllButton_C.MakeRed
struct UMuteAllButton_C_MakeRed_Params
{
};

// Function MuteAllButton.MuteAllButton_C.SetMute
struct UMuteAllButton_C_SetMute_Params
{
	bool                                               muted;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MuteAllButton.MuteAllButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UMuteAllButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MuteAllButton.MuteAllButton_C.EventToggleMuteAll
struct UMuteAllButton_C_EventToggleMuteAll_Params
{
	bool*                                              active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MuteAllButton.MuteAllButton_C.ExecuteUbergraph_MuteAllButton
struct UMuteAllButton_C_ExecuteUbergraph_MuteAllButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
