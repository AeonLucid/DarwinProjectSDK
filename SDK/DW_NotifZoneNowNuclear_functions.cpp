// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifZoneNowNuclear_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifZoneNowNuclear.NotifZoneNowNuclear_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UNotifZoneNowNuclear_C::Initialize(const struct FString& zoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifZoneNowNuclear.NotifZoneNowNuclear_C.Initialize");

	UNotifZoneNowNuclear_C_Initialize_Params params;
	params.zoneName = zoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifZoneNowNuclear.NotifZoneNowNuclear_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifZoneNowNuclear_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifZoneNowNuclear.NotifZoneNowNuclear_C.Construct");

	UNotifZoneNowNuclear_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifZoneNowNuclear.NotifZoneNowNuclear_C.ExecuteUbergraph_NotifZoneNowNuclear
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifZoneNowNuclear_C::ExecuteUbergraph_NotifZoneNowNuclear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifZoneNowNuclear.NotifZoneNowNuclear_C.ExecuteUbergraph_NotifZoneNowNuclear");

	UNotifZoneNowNuclear_C_ExecuteUbergraph_NotifZoneNowNuclear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
