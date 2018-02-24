// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifZoneSoon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifZoneSoon.NotifZoneSoon_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UNotifZoneSoon_C::Initialize(const struct FString& zoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifZoneSoon.NotifZoneSoon_C.Initialize");

	UNotifZoneSoon_C_Initialize_Params params;
	params.zoneName = zoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifZoneSoon.NotifZoneSoon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifZoneSoon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifZoneSoon.NotifZoneSoon_C.Construct");

	UNotifZoneSoon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifZoneSoon.NotifZoneSoon_C.ExecuteUbergraph_NotifZoneSoon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifZoneSoon_C::ExecuteUbergraph_NotifZoneSoon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifZoneSoon.NotifZoneSoon_C.ExecuteUbergraph_NotifZoneSoon");

	UNotifZoneSoon_C_ExecuteUbergraph_NotifZoneSoon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
