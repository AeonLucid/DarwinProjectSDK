// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_AutoKam_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AutoKam.AutoKam_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAutoKam_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoKam.AutoKam_C.UserConstructionScript");

	AAutoKam_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoKam.AutoKam_C.EventUpdateRot
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FRotator*               rot                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AAutoKam_C::EventUpdateRot(struct FRotator* rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoKam.AutoKam_C.EventUpdateRot");

	AAutoKam_C_EventUpdateRot_Params params;
	params.rot = rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoKam.AutoKam_C.ExecuteUbergraph_AutoKam
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAutoKam_C::ExecuteUbergraph_AutoKam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoKam.AutoKam_C.ExecuteUbergraph_AutoKam");

	AAutoKam_C_ExecuteUbergraph_AutoKam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
