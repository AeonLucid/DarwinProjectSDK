#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MixerConnectionWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MixerConnectionWidget.MixerConnectionWidget_C.UpdateConnectionStatus
struct UMixerConnectionWidget_C_UpdateConnectionStatus_Params
{
	EDarwinMixerConnectionState                        ConnectionState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     username;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MixerConnectionWidget.MixerConnectionWidget_C.EventInputSourceChanged
struct UMixerConnectionWidget_C_EventInputSourceChanged_Params
{
};

// Function MixerConnectionWidget.MixerConnectionWidget_C.EventMixerConnectionStateChanged
struct UMixerConnectionWidget_C_EventMixerConnectionStateChanged_Params
{
	EDarwinMixerConnectionState*                       State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    username;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MixerConnectionWidget.MixerConnectionWidget_C.BndEvt__MixerConnectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMixerConnectionWidget_C_BndEvt__MixerConnectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MixerConnectionWidget.MixerConnectionWidget_C.Construct
struct UMixerConnectionWidget_C_Construct_Params
{
};

// Function MixerConnectionWidget.MixerConnectionWidget_C.EventTwitchLoginStateChanged
struct UMixerConnectionWidget_C_EventTwitchLoginStateChanged_Params
{
	EDarwinTwitchLoginState*                           State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    DisplayName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MixerConnectionWidget.MixerConnectionWidget_C.ExecuteUbergraph_MixerConnectionWidget
struct UMixerConnectionWidget_C_ExecuteUbergraph_MixerConnectionWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
