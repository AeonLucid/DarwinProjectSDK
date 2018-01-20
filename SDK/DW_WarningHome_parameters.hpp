#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_WarningHome_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WarningHome.WarningHome_C.LoopNextPage
struct UWarningHome_C_LoopNextPage_Params
{
};

// Function WarningHome.WarningHome_C.StartNextPageTimer
struct UWarningHome_C_StartNextPageTimer_Params
{
	float                                              Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WarningHome.WarningHome_C.SelectNextPage
struct UWarningHome_C_SelectNextPage_Params
{
};

// Function WarningHome.WarningHome_C.ShouldUpdateCurrentMessage
struct UWarningHome_C_ShouldUpdateCurrentMessage_Params
{
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WarningHome.WarningHome_C.GetDevCommunicationCount
struct UWarningHome_C_GetDevCommunicationCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WarningHome.WarningHome_C.FillInfoText
struct UWarningHome_C_FillInfoText_Params
{
	int                                                CommunicationIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WarningHome.WarningHome_C.BndEvt__PreviousPage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWarningHome_C_BndEvt__PreviousPage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WarningHome.WarningHome_C.EventDevCommunicationReceived
struct UWarningHome_C_EventDevCommunicationReceived_Params
{
};

// Function WarningHome.WarningHome_C.BndEvt__Button_GoToURL_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UWarningHome_C_BndEvt__Button_GoToURL_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WarningHome.WarningHome_C.BndEvt__NextPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWarningHome_C_BndEvt__NextPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WarningHome.WarningHome_C.ExecuteUbergraph_WarningHome
struct UWarningHome_C_ExecuteUbergraph_WarningHome_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
