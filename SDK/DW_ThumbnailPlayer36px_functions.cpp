// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ThumbnailPlayer36px_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ThumbnailPlayer36px.ThumbnailPlayer36px_C.Reloaded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailPlayer36px_C::Reloaded(int playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayer36px.ThumbnailPlayer36px_C.Reloaded");

	UThumbnailPlayer36px_C_Reloaded_Params params;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailPlayer36px.ThumbnailPlayer36px_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailPlayer36px_C::Initialize(int playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayer36px.ThumbnailPlayer36px_C.Initialize");

	UThumbnailPlayer36px_C_Initialize_Params params;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailPlayer36px.ThumbnailPlayer36px_C.EventUpdateAvatarTexture
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture**               avatar                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailPlayer36px_C::EventUpdateAvatarTexture(class UTexture** avatar, int* playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayer36px.ThumbnailPlayer36px_C.EventUpdateAvatarTexture");

	UThumbnailPlayer36px_C_EventUpdateAvatarTexture_Params params;
	params.avatar = avatar;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailPlayer36px.ThumbnailPlayer36px_C.EventUpdatePlayerGradient
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FDarwinColorGradient*   payerGradient                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailPlayer36px_C::EventUpdatePlayerGradient(struct FDarwinColorGradient* payerGradient, int* playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayer36px.ThumbnailPlayer36px_C.EventUpdatePlayerGradient");

	UThumbnailPlayer36px_C_EventUpdatePlayerGradient_Params params;
	params.payerGradient = payerGradient;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailPlayer36px.ThumbnailPlayer36px_C.ExecuteUbergraph_ThumbnailPlayer36px
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailPlayer36px_C::ExecuteUbergraph_ThumbnailPlayer36px(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayer36px.ThumbnailPlayer36px_C.ExecuteUbergraph_ThumbnailPlayer36px");

	UThumbnailPlayer36px_C_ExecuteUbergraph_ThumbnailPlayer36px_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
