#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MutePlayerStatus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MutePlayerStatus.MutePlayerStatus_C.SetMute
struct UMutePlayerStatus_C_SetMute_Params
{
	bool                                               muted;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MutePlayerStatus.MutePlayerStatus_C.Initialize
struct UMutePlayerStatus_C_Initialize_Params
{
	int                                                DarwinUniqueID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               muted;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDarwinRoleEnum                                    NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MutePlayerStatus.MutePlayerStatus_C.EventMuteMapRemove
struct UMutePlayerStatus_C_EventMuteMapRemove_Params
{
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MutePlayerStatus.MutePlayerStatus_C.EventMuteMapChanged
struct UMutePlayerStatus_C_EventMuteMapChanged_Params
{
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              muted;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MutePlayerStatus.MutePlayerStatus_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct UMutePlayerStatus_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MutePlayerStatus.MutePlayerStatus_C.EventPlayerSpeakStart
struct UMutePlayerStatus_C_EventPlayerSpeakStart_Params
{
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MutePlayerStatus.MutePlayerStatus_C.EventPlayerSpeakEnd
struct UMutePlayerStatus_C_EventPlayerSpeakEnd_Params
{
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MutePlayerStatus.MutePlayerStatus_C.BndEvt__Button_Kick_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature
struct UMutePlayerStatus_C_BndEvt__Button_Kick_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MutePlayerStatus.MutePlayerStatus_C.Construct
struct UMutePlayerStatus_C_Construct_Params
{
};

// Function MutePlayerStatus.MutePlayerStatus_C.YES
struct UMutePlayerStatus_C_YES_Params
{
};

// Function MutePlayerStatus.MutePlayerStatus_C.No
struct UMutePlayerStatus_C_No_Params
{
};

// Function MutePlayerStatus.MutePlayerStatus_C.ExecuteUbergraph_MutePlayerStatus
struct UMutePlayerStatus_C_ExecuteUbergraph_MutePlayerStatus_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
