// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_InvTooltip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InvTooltip.InvTooltip_C.InvInitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInvTooltip_C::InvInitialize(const struct FText& Text, float Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function InvTooltip.InvTooltip_C.InvInitialize");

	UInvTooltip_C_InvInitialize_Params params;
	params.Text = Text;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InvTooltip.InvTooltip_C.ExecuteUbergraph_InvTooltip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInvTooltip_C::ExecuteUbergraph_InvTooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InvTooltip.InvTooltip_C.ExecuteUbergraph_InvTooltip");

	UInvTooltip_C_ExecuteUbergraph_InvTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
