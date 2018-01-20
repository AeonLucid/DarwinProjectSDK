// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MuteMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MuteMenu.MuteMenu_C.EventMuteMapAdd
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          muted                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinRoleEnum*               Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMuteMenu_C::EventMuteMapAdd(int* UniqueId, bool* muted, EDarwinRoleEnum* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function MuteMenu.MuteMenu_C.EventMuteMapAdd");

	UMuteMenu_C_EventMuteMapAdd_Params params;
	params.UniqueId = UniqueId;
	params.muted = muted;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MuteMenu.MuteMenu_C.ExecuteUbergraph_MuteMenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMuteMenu_C::ExecuteUbergraph_MuteMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MuteMenu.MuteMenu_C.ExecuteUbergraph_MuteMenu");

	UMuteMenu_C_ExecuteUbergraph_MuteMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
