// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifZoneNow_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifZoneNow.NotifZoneNow_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UNotifZoneNow_C::Initialize(const struct FString& zoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifZoneNow.NotifZoneNow_C.Initialize");

	UNotifZoneNow_C_Initialize_Params params;
	params.zoneName = zoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifZoneNow.NotifZoneNow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifZoneNow_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifZoneNow.NotifZoneNow_C.Construct");

	UNotifZoneNow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifZoneNow.NotifZoneNow_C.ExecuteUbergraph_NotifZoneNow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifZoneNow_C::ExecuteUbergraph_NotifZoneNow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifZoneNow.NotifZoneNow_C.ExecuteUbergraph_NotifZoneNow");

	UNotifZoneNow_C_ExecuteUbergraph_NotifZoneNow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
