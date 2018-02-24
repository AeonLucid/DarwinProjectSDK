// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_FriendPartyWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FriendPartyWidget.FriendPartyWidget_C.UpdatePartyLeaderUI
// (Public, BlueprintCallable, BlueprintEvent)

void UFriendPartyWidget_C::UpdatePartyLeaderUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendPartyWidget.FriendPartyWidget_C.UpdatePartyLeaderUI");

	UFriendPartyWidget_C_UpdatePartyLeaderUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendPartyWidget.FriendPartyWidget_C.HideFriendInfos
// (Public, BlueprintCallable, BlueprintEvent)

void UFriendPartyWidget_C::HideFriendInfos()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendPartyWidget.FriendPartyWidget_C.HideFriendInfos");

	UFriendPartyWidget_C_HideFriendInfos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendPartyWidget.FriendPartyWidget_C.SetFriendInfos
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   friendName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture*                friendAvatar                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendPartyWidget_C::SetFriendInfos(const struct FText& friendName, class UTexture* friendAvatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendPartyWidget.FriendPartyWidget_C.SetFriendInfos");

	UFriendPartyWidget_C_SetFriendInfos_Params params;
	params.friendName = friendName;
	params.friendAvatar = friendAvatar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendPartyWidget.FriendPartyWidget_C.EventUpdateLocalAvatarTexture
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture**               outLocalAvatarTexture          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendPartyWidget_C::EventUpdateLocalAvatarTexture(class UTexture** outLocalAvatarTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendPartyWidget.FriendPartyWidget_C.EventUpdateLocalAvatarTexture");

	UFriendPartyWidget_C_EventUpdateLocalAvatarTexture_Params params;
	params.outLocalAvatarTexture = outLocalAvatarTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendPartyWidget.FriendPartyWidget_C.EventFriendPartyJoined
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  friendName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UTexture**               friendAvatar                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendPartyWidget_C::EventFriendPartyJoined(struct FText* friendName, class UTexture** friendAvatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendPartyWidget.FriendPartyWidget_C.EventFriendPartyJoined");

	UFriendPartyWidget_C_EventFriendPartyJoined_Params params;
	params.friendName = friendName;
	params.friendAvatar = friendAvatar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendPartyWidget.FriendPartyWidget_C.EventFriendPartyLeft
// (Event, Public, BlueprintEvent)

void UFriendPartyWidget_C::EventFriendPartyLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendPartyWidget.FriendPartyWidget_C.EventFriendPartyLeft");

	UFriendPartyWidget_C_EventFriendPartyLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendPartyWidget.FriendPartyWidget_C.BndEvt__Button_InviteOLeave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFriendPartyWidget_C::BndEvt__Button_InviteOLeave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendPartyWidget.FriendPartyWidget_C.BndEvt__Button_InviteOLeave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UFriendPartyWidget_C_BndEvt__Button_InviteOLeave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendPartyWidget.FriendPartyWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFriendPartyWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendPartyWidget.FriendPartyWidget_C.Construct");

	UFriendPartyWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendPartyWidget.FriendPartyWidget_C.ExecuteUbergraph_FriendPartyWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendPartyWidget_C::ExecuteUbergraph_FriendPartyWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendPartyWidget.FriendPartyWidget_C.ExecuteUbergraph_FriendPartyWidget");

	UFriendPartyWidget_C_ExecuteUbergraph_FriendPartyWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
