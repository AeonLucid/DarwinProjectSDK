// Darwin Project (0.11974) SDK

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
// int                            PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailAlly64px_C::Initialize(int PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailAlly64px.ThumbnailAlly64px_C.Initialize");

	UThumbnailAlly64px_C_Initialize_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailAlly64px.ThumbnailAlly64px_C.EventPlayerIsDead
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PodiumRank                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          firstDeath                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailAlly64px_C::EventPlayerIsDead(int* PlayerId, int* PodiumRank, bool* firstDeath)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailAlly64px.ThumbnailAlly64px_C.EventPlayerIsDead");

	UThumbnailAlly64px_C_EventPlayerIsDead_Params params;
	params.PlayerId = PlayerId;
	params.PodiumRank = PodiumRank;
	params.firstDeath = firstDeath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailAlly64px.ThumbnailAlly64px_C.EventUpdateAvatarTexture
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture2D**             avatar                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailAlly64px_C::EventUpdateAvatarTexture(class UTexture2D** avatar, int* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailAlly64px.ThumbnailAlly64px_C.EventUpdateAvatarTexture");

	UThumbnailAlly64px_C_EventUpdateAvatarTexture_Params params;
	params.avatar = avatar;
	params.PlayerId = PlayerId;

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
