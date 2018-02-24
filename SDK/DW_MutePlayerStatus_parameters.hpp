#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MutePlayerStatus_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MutePlayerStatus.MutePlayerStatus_C.Get_Button_Mute_ToolTipWidget_1
struct UMutePlayerStatus_C_Get_Button_Mute_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MutePlayerStatus.MutePlayerStatus_C.Get_Button_Kick_ToolTipWidget_1
struct UMutePlayerStatus_C_Get_Button_Kick_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MutePlayerStatus.MutePlayerStatus_C.Get_Button_Report_ToolTipWidget_2
struct UMutePlayerStatus_C_Get_Button_Report_ToolTipWidget_2_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MutePlayerStatus.MutePlayerStatus_C.Get_Button_Report_ToolTipWidget_1
struct UMutePlayerStatus_C_Get_Button_Report_ToolTipWidget_1_Params
{
};

// Function MutePlayerStatus.MutePlayerStatus_C.SetSelected
struct UMutePlayerStatus_C_SetSelected_Params
{
	bool                                               bSelected;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

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
	class UMuteMenu_C*                                 MenuOwner;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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

// Function MutePlayerStatus.MutePlayerStatus_C.BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMutePlayerStatus_C_BndEvt__Button_Report_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MutePlayerStatus.MutePlayerStatus_C.Reported
struct UMutePlayerStatus_C_Reported_Params
{
};

// Function MutePlayerStatus.MutePlayerStatus_C.EventMenuClick
struct UMutePlayerStatus_C_EventMenuClick_Params
{
};

// Function MutePlayerStatus.MutePlayerStatus_C.OnClickMute
struct UMutePlayerStatus_C_OnClickMute_Params
{
};

// Function MutePlayerStatus.MutePlayerStatus_C.EventMenuYPressed
struct UMutePlayerStatus_C_EventMenuYPressed_Params
{
};

// Function MutePlayerStatus.MutePlayerStatus_C.OnClickReport
struct UMutePlayerStatus_C_OnClickReport_Params
{
};

// Function MutePlayerStatus.MutePlayerStatus_C.EventMenuBack
struct UMutePlayerStatus_C_EventMenuBack_Params
{
	bool*                                              bIsEscape;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MutePlayerStatus.MutePlayerStatus_C.ReportClosed
struct UMutePlayerStatus_C_ReportClosed_Params
{
};

// Function MutePlayerStatus.MutePlayerStatus_C.EventMenuSpecialRightPressed
struct UMutePlayerStatus_C_EventMenuSpecialRightPressed_Params
{
};

// Function MutePlayerStatus.MutePlayerStatus_C.Destruct
struct UMutePlayerStatus_C_Destruct_Params
{
};

// Function MutePlayerStatus.MutePlayerStatus_C.EventInputSourceChanged
struct UMutePlayerStatus_C_EventInputSourceChanged_Params
{
};

// Function MutePlayerStatus.MutePlayerStatus_C.EventVivoxPlayerNotConnected
struct UMutePlayerStatus_C_EventVivoxPlayerNotConnected_Params
{
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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
