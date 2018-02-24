// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifZoneSoonNuclear_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifZoneSoonNuclear.NotifZoneSoonNuclear_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 zoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UNotifZoneSoonNuclear_C::Initialize(const struct FString& zoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifZoneSoonNuclear.NotifZoneSoonNuclear_C.Initialize");

	UNotifZoneSoonNuclear_C_Initialize_Params params;
	params.zoneName = zoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifZoneSoonNuclear.NotifZoneSoonNuclear_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifZoneSoonNuclear_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifZoneSoonNuclear.NotifZoneSoonNuclear_C.Construct");

	UNotifZoneSoonNuclear_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifZoneSoonNuclear.NotifZoneSoonNuclear_C.ExecuteUbergraph_NotifZoneSoonNuclear
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifZoneSoonNuclear_C::ExecuteUbergraph_NotifZoneSoonNuclear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifZoneSoonNuclear.NotifZoneSoonNuclear_C.ExecuteUbergraph_NotifZoneSoonNuclear");

	UNotifZoneSoonNuclear_C_ExecuteUbergraph_NotifZoneSoonNuclear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
