#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InfoInHome_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function InfoInHome.InfoInHome_C.LoopNextPage
struct UInfoInHome_C_LoopNextPage_Params
{
};

// Function InfoInHome.InfoInHome_C.SelectNextPage
struct UInfoInHome_C_SelectNextPage_Params
{
};

// Function InfoInHome.InfoInHome_C.StartNextPageTimer
struct UInfoInHome_C_StartNextPageTimer_Params
{
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InfoInHome.InfoInHome_C.ShouldUpdateCurrentMessage
struct UInfoInHome_C_ShouldUpdateCurrentMessage_Params
{
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InfoInHome.InfoInHome_C.GetDevCommunicationCount
struct UInfoInHome_C_GetDevCommunicationCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function InfoInHome.InfoInHome_C.FillInfoText
struct UInfoInHome_C_FillInfoText_Params
{
	int                                                CommunicationIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InfoInHome.InfoInHome_C.BndEvt__Button_GoToURL_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UInfoInHome_C_BndEvt__Button_GoToURL_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InfoInHome.InfoInHome_C.EventDevCommunicationReceived
struct UInfoInHome_C_EventDevCommunicationReceived_Params
{
};

// Function InfoInHome.InfoInHome_C.BndEvt__PreviousPage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UInfoInHome_C_BndEvt__PreviousPage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InfoInHome.InfoInHome_C.BndEvt__NextPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UInfoInHome_C_BndEvt__NextPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function InfoInHome.InfoInHome_C.EventMenuRightPagePressed
struct UInfoInHome_C_EventMenuRightPagePressed_Params
{
};

// Function InfoInHome.InfoInHome_C.EventMenuRightTriggerPressed
struct UInfoInHome_C_EventMenuRightTriggerPressed_Params
{
};

// Function InfoInHome.InfoInHome_C.EventMenuLeftPagePressed
struct UInfoInHome_C_EventMenuLeftPagePressed_Params
{
};

// Function InfoInHome.InfoInHome_C.EventMenuLeftTriggerPressed
struct UInfoInHome_C_EventMenuLeftTriggerPressed_Params
{
};

// Function InfoInHome.InfoInHome_C.Init
struct UInfoInHome_C_Init_Params
{
	class UHomeMenu_C*                                 ParentWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InfoInHome.InfoInHome_C.Construct
struct UInfoInHome_C_Construct_Params
{
};

// Function InfoInHome.InfoInHome_C.EventInputSourceChanged
struct UInfoInHome_C_EventInputSourceChanged_Params
{
};

// Function InfoInHome.InfoInHome_C.ExecuteUbergraph_InfoInHome
struct UInfoInHome_C_ExecuteUbergraph_InfoInHome_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
