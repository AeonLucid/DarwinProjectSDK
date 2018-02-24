#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_TwitchLoginWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TwitchLoginWidget.TwitchLoginWidget_C.UpdateLoginStatus
struct UTwitchLoginWidget_C_UpdateLoginStatus_Params
{
	EDarwinTwitchLoginState                            LoginState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DisplayName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TwitchLoginWidget.TwitchLoginWidget_C.Construct
struct UTwitchLoginWidget_C_Construct_Params
{
};

// Function TwitchLoginWidget.TwitchLoginWidget_C.EventTwitchLoginStateChanged
struct UTwitchLoginWidget_C_EventTwitchLoginStateChanged_Params
{
	EDarwinTwitchLoginState*                           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    DisplayName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TwitchLoginWidget.TwitchLoginWidget_C.BndEvt__TwitchLoginButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UTwitchLoginWidget_C_BndEvt__TwitchLoginButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TwitchLoginWidget.TwitchLoginWidget_C.EventMixerConnectionStateChanged
struct UTwitchLoginWidget_C_EventMixerConnectionStateChanged_Params
{
	EDarwinMixerConnectionState*                       State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    username;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function TwitchLoginWidget.TwitchLoginWidget_C.ExecuteUbergraph_TwitchLoginWidget
struct UTwitchLoginWidget_C_ExecuteUbergraph_TwitchLoginWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
