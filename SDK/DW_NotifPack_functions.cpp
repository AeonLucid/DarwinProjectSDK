// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifPack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifPack.NotifPack_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UNotifPack_C::Initialize(int Number, const struct FString& Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifPack.NotifPack_C.Initialize");

	UNotifPack_C_Initialize_Params params;
	params.Number = Number;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifPack.NotifPack_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifPack_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifPack.NotifPack_C.Construct");

	UNotifPack_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifPack.NotifPack_C.ExecuteUbergraph_NotifPack
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifPack_C::ExecuteUbergraph_NotifPack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifPack.NotifPack_C.ExecuteUbergraph_NotifPack");

	UNotifPack_C_ExecuteUbergraph_NotifPack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
