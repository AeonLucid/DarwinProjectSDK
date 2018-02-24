#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_FriendPartyWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FriendPartyWidget.FriendPartyWidget_C.UpdatePartyLeaderUI
struct UFriendPartyWidget_C_UpdatePartyLeaderUI_Params
{
};

// Function FriendPartyWidget.FriendPartyWidget_C.HideFriendInfos
struct UFriendPartyWidget_C_HideFriendInfos_Params
{
};

// Function FriendPartyWidget.FriendPartyWidget_C.SetFriendInfos
struct UFriendPartyWidget_C_SetFriendInfos_Params
{
	struct FText                                       friendName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture*                                    friendAvatar;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendPartyWidget.FriendPartyWidget_C.EventUpdateLocalAvatarTexture
struct UFriendPartyWidget_C_EventUpdateLocalAvatarTexture_Params
{
	class UTexture**                                   outLocalAvatarTexture;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendPartyWidget.FriendPartyWidget_C.EventFriendPartyJoined
struct UFriendPartyWidget_C_EventFriendPartyJoined_Params
{
	struct FText*                                      friendName;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UTexture**                                   friendAvatar;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendPartyWidget.FriendPartyWidget_C.EventFriendPartyLeft
struct UFriendPartyWidget_C_EventFriendPartyLeft_Params
{
};

// Function FriendPartyWidget.FriendPartyWidget_C.BndEvt__Button_InviteOLeave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UFriendPartyWidget_C_BndEvt__Button_InviteOLeave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function FriendPartyWidget.FriendPartyWidget_C.Construct
struct UFriendPartyWidget_C_Construct_Params
{
};

// Function FriendPartyWidget.FriendPartyWidget_C.ExecuteUbergraph_FriendPartyWidget
struct UFriendPartyWidget_C_ExecuteUbergraph_FriendPartyWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
