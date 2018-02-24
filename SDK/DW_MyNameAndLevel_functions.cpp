// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MyNameAndLevel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MyNameAndLevel.MyNameAndLevel_C.SetSwitchProfileVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMyNameAndLevel_C::SetSwitchProfileVisibility(bool visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyNameAndLevel.MyNameAndLevel_C.SetSwitchProfileVisibility");

	UMyNameAndLevel_C_SetSwitchProfileVisibility_Params params;
	params.visible = visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyNameAndLevel.MyNameAndLevel_C.UpdatePlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyNameAndLevel_C::UpdatePlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyNameAndLevel.MyNameAndLevel_C.UpdatePlayerName");

	UMyNameAndLevel_C_UpdatePlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyNameAndLevel.MyNameAndLevel_C.UpdatePartyLeaderUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMyNameAndLevel_C::UpdatePartyLeaderUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyNameAndLevel.MyNameAndLevel_C.UpdatePartyLeaderUI");

	UMyNameAndLevel_C_UpdatePartyLeaderUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyNameAndLevel.MyNameAndLevel_C.EventUpdateLocalAvatarTexture
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture**               outLocalAvatarTexture          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMyNameAndLevel_C::EventUpdateLocalAvatarTexture(class UTexture** outLocalAvatarTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyNameAndLevel.MyNameAndLevel_C.EventUpdateLocalAvatarTexture");

	UMyNameAndLevel_C_EventUpdateLocalAvatarTexture_Params params;
	params.outLocalAvatarTexture = outLocalAvatarTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyNameAndLevel.MyNameAndLevel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyNameAndLevel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyNameAndLevel.MyNameAndLevel_C.Construct");

	UMyNameAndLevel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyNameAndLevel.MyNameAndLevel_C.EventUpdateAvatarTexture
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture**               avatar                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMyNameAndLevel_C::EventUpdateAvatarTexture(class UTexture** avatar, int* playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyNameAndLevel.MyNameAndLevel_C.EventUpdateAvatarTexture");

	UMyNameAndLevel_C_EventUpdateAvatarTexture_Params params;
	params.avatar = avatar;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyNameAndLevel.MyNameAndLevel_C.EventFriendPartyJoined
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  friendName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UTexture**               friendAvatar                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMyNameAndLevel_C::EventFriendPartyJoined(struct FText* friendName, class UTexture** friendAvatar)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyNameAndLevel.MyNameAndLevel_C.EventFriendPartyJoined");

	UMyNameAndLevel_C_EventFriendPartyJoined_Params params;
	params.friendName = friendName;
	params.friendAvatar = friendAvatar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyNameAndLevel.MyNameAndLevel_C.EventFriendPartyLeft
// (Event, Public, BlueprintEvent)

void UMyNameAndLevel_C::EventFriendPartyLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function MyNameAndLevel.MyNameAndLevel_C.EventFriendPartyLeft");

	UMyNameAndLevel_C_EventFriendPartyLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyNameAndLevel.MyNameAndLevel_C.EventPlayerProfileReceived
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDarwinPlayerStats*     stats                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FDarwinProfile*         Profile                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyNameAndLevel_C::EventPlayerProfileReceived(struct FDarwinPlayerStats* stats, struct FDarwinProfile* Profile)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyNameAndLevel.MyNameAndLevel_C.EventPlayerProfileReceived");

	UMyNameAndLevel_C_EventPlayerProfileReceived_Params params;
	params.stats = stats;
	params.Profile = Profile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MyNameAndLevel.MyNameAndLevel_C.ExecuteUbergraph_MyNameAndLevel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMyNameAndLevel_C::ExecuteUbergraph_MyNameAndLevel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MyNameAndLevel.MyNameAndLevel_C.ExecuteUbergraph_MyNameAndLevel");

	UMyNameAndLevel_C_ExecuteUbergraph_MyNameAndLevel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
