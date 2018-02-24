#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MatchMakingWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MatchMakingWidget.MatchMakingWidget_C.EventMatchmakingUpdated
struct UMatchMakingWidget_C_EventMatchmakingUpdated_Params
{
	EDarwinRoleEnum*                                   Role;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDarwinMatchmakingInfo*                     matchmakingInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MatchMakingWidget.MatchMakingWidget_C.BndEvt__BackBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UMatchMakingWidget_C_BndEvt__BackBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MatchMakingWidget.MatchMakingWidget_C.EventMatchmakingCompleted
struct UMatchMakingWidget_C_EventMatchmakingCompleted_Params
{
	struct FDarwinMatchmakingInfo*                     matchmakingInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MatchMakingWidget.MatchMakingWidget_C.EventMatchmakingServersFull
struct UMatchMakingWidget_C_EventMatchmakingServersFull_Params
{
	struct FDarwinMatchmakingInfo*                     matchmakingInfo;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MatchMakingWidget.MatchMakingWidget_C.EventMatchmakingStarted
struct UMatchMakingWidget_C_EventMatchmakingStarted_Params
{
};

// Function MatchMakingWidget.MatchMakingWidget_C.BndEvt__CancelBtn_K2Node_ComponentBoundEvent_290_OnButtonClickedEvent__DelegateSignature
struct UMatchMakingWidget_C_BndEvt__CancelBtn_K2Node_ComponentBoundEvent_290_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MatchMakingWidget.MatchMakingWidget_C.EventMenuSpecialLeftPressed
struct UMatchMakingWidget_C_EventMenuSpecialLeftPressed_Params
{
};

// Function MatchMakingWidget.MatchMakingWidget_C.OnMatchmakingCancelAction
struct UMatchMakingWidget_C_OnMatchmakingCancelAction_Params
{
};

// Function MatchMakingWidget.MatchMakingWidget_C.EventMenuClick
struct UMatchMakingWidget_C_EventMenuClick_Params
{
};

// Function MatchMakingWidget.MatchMakingWidget_C.EventMenuBack
struct UMatchMakingWidget_C_EventMenuBack_Params
{
	bool*                                              bIsEscape;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MatchMakingWidget.MatchMakingWidget_C.BackOnSearchFailedAction
struct UMatchMakingWidget_C_BackOnSearchFailedAction_Params
{
};

// Function MatchMakingWidget.MatchMakingWidget_C.Tick
struct UMatchMakingWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MatchMakingWidget.MatchMakingWidget_C.EventUpdateChosenRegion
struct UMatchMakingWidget_C_EventUpdateChosenRegion_Params
{
	struct FString*                                    RegionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function MatchMakingWidget.MatchMakingWidget_C.Construct
struct UMatchMakingWidget_C_Construct_Params
{
};

// Function MatchMakingWidget.MatchMakingWidget_C.EventInputSourceChanged
struct UMatchMakingWidget_C_EventInputSourceChanged_Params
{
};

// Function MatchMakingWidget.MatchMakingWidget_C.BndEvt__BackBtn_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature
struct UMatchMakingWidget_C_BndEvt__BackBtn_K2Node_ComponentBoundEvent_95_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MatchMakingWidget.MatchMakingWidget_C.BndEvt__BackBtn_K2Node_ComponentBoundEvent_105_OnButtonHoverEvent__DelegateSignature
struct UMatchMakingWidget_C_BndEvt__BackBtn_K2Node_ComponentBoundEvent_105_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function MatchMakingWidget.MatchMakingWidget_C.Init Parent in Matchmaking
struct UMatchMakingWidget_C_Init_Parent_in_Matchmaking_Params
{
	class UMainMenu_C*                                 MainMenu;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UHomeMenu_C*                                 HomeMenu;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MatchMakingWidget.MatchMakingWidget_C.UpdateNavButtons
struct UMatchMakingWidget_C_UpdateNavButtons_Params
{
};

// Function MatchMakingWidget.MatchMakingWidget_C.HideMatchmakingFailed
struct UMatchMakingWidget_C_HideMatchmakingFailed_Params
{
};

// Function MatchMakingWidget.MatchMakingWidget_C.ExecuteUbergraph_MatchMakingWidget
struct UMatchMakingWidget_C_ExecuteUbergraph_MatchMakingWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
