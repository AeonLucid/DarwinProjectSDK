// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifPylon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifPylon.NotifPylon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifPylon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifPylon.NotifPylon_C.Construct");

	UNotifPylon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifPylon.NotifPylon_C.ExecuteUbergraph_NotifPylon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifPylon_C::ExecuteUbergraph_NotifPylon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifPylon.NotifPylon_C.ExecuteUbergraph_NotifPylon");

	UNotifPylon_C_ExecuteUbergraph_NotifPylon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
