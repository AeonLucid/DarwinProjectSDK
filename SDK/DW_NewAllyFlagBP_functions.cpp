// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NewAllyFlagBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewAllyFlagBP.NewAllyFlagBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANewAllyFlagBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewAllyFlagBP.NewAllyFlagBP_C.UserConstructionScript");

	ANewAllyFlagBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewAllyFlagBP.NewAllyFlagBP_C.EventInitializeAvatarTexture
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTexture**               AvatarTexture                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewAllyFlagBP_C::EventInitializeAvatarTexture(class UTexture** AvatarTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewAllyFlagBP.NewAllyFlagBP_C.EventInitializeAvatarTexture");

	ANewAllyFlagBP_C_EventInitializeAvatarTexture_Params params;
	params.AvatarTexture = AvatarTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewAllyFlagBP.NewAllyFlagBP_C.EventAllyFlagDestroyed
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ANewAllyFlagBP_C::EventAllyFlagDestroyed(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewAllyFlagBP.NewAllyFlagBP_C.EventAllyFlagDestroyed");

	ANewAllyFlagBP_C_EventAllyFlagDestroyed_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewAllyFlagBP.NewAllyFlagBP_C.ExecuteUbergraph_NewAllyFlagBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewAllyFlagBP_C::ExecuteUbergraph_NewAllyFlagBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewAllyFlagBP.NewAllyFlagBP_C.ExecuteUbergraph_NewAllyFlagBP");

	ANewAllyFlagBP_C_ExecuteUbergraph_NewAllyFlagBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
