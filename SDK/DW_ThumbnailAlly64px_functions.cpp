// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ThumbnailAlly64px_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ThumbnailAlly64px.ThumbnailAlly64px_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailAlly64px_C::Initialize(int playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailAlly64px.ThumbnailAlly64px_C.Initialize");

	UThumbnailAlly64px_C_Initialize_Params params;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailAlly64px.ThumbnailAlly64px_C.EventPlayerIsDead
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PodiumRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          firstDeath                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailAlly64px_C::EventPlayerIsDead(int* playerID, int* PodiumRank, bool* firstDeath)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailAlly64px.ThumbnailAlly64px_C.EventPlayerIsDead");

	UThumbnailAlly64px_C_EventPlayerIsDead_Params params;
	params.playerID = playerID;
	params.PodiumRank = PodiumRank;
	params.firstDeath = firstDeath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailAlly64px.ThumbnailAlly64px_C.EventUpdateAvatarTexture
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture**               avatar                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailAlly64px_C::EventUpdateAvatarTexture(class UTexture** avatar, int* playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailAlly64px.ThumbnailAlly64px_C.EventUpdateAvatarTexture");

	UThumbnailAlly64px_C_EventUpdateAvatarTexture_Params params;
	params.avatar = avatar;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailAlly64px.ThumbnailAlly64px_C.ExecuteUbergraph_ThumbnailAlly64px
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailAlly64px_C::ExecuteUbergraph_ThumbnailAlly64px(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailAlly64px.ThumbnailAlly64px_C.ExecuteUbergraph_ThumbnailAlly64px");

	UThumbnailAlly64px_C_ExecuteUbergraph_ThumbnailAlly64px_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
