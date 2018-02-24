// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ThumbnailPlayer256_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ThumbnailPlayer256.ThumbnailPlayer256_C.SetColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailPlayer256_C::SetColor(int playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayer256.ThumbnailPlayer256_C.SetColor");

	UThumbnailPlayer256_C_SetColor_Params params;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailPlayer256.ThumbnailPlayer256_C.SetColorToOriginal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailPlayer256_C::SetColorToOriginal(int playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayer256.ThumbnailPlayer256_C.SetColorToOriginal");

	UThumbnailPlayer256_C_SetColorToOriginal_Params params;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailPlayer256.ThumbnailPlayer256_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailPlayer256_C::Initialize(int playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayer256.ThumbnailPlayer256_C.Initialize");

	UThumbnailPlayer256_C_Initialize_Params params;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailPlayer256.ThumbnailPlayer256_C.EventUpdateAvatarTexture
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture**               avatar                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           playerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailPlayer256_C::EventUpdateAvatarTexture(class UTexture** avatar, int* playerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayer256.ThumbnailPlayer256_C.EventUpdateAvatarTexture");

	UThumbnailPlayer256_C_EventUpdateAvatarTexture_Params params;
	params.avatar = avatar;
	params.playerID = playerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailPlayer256.ThumbnailPlayer256_C.SetNetAvatar
// (BlueprintCallable, BlueprintEvent)

void UThumbnailPlayer256_C::SetNetAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayer256.ThumbnailPlayer256_C.SetNetAvatar");

	UThumbnailPlayer256_C_SetNetAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThumbnailPlayer256.ThumbnailPlayer256_C.ExecuteUbergraph_ThumbnailPlayer256
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UThumbnailPlayer256_C::ExecuteUbergraph_ThumbnailPlayer256(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThumbnailPlayer256.ThumbnailPlayer256_C.ExecuteUbergraph_ThumbnailPlayer256");

	UThumbnailPlayer256_C_ExecuteUbergraph_ThumbnailPlayer256_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
