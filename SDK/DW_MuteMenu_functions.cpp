// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MuteMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MuteMenu.MuteMenu_C.GetMuteStatusCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMuteMenu_C::GetMuteStatusCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function MuteMenu.MuteMenu_C.GetMuteStatusCount");

	UMuteMenu_C_GetMuteStatusCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function MuteMenu.MuteMenu_C.UnfocusAll
// (Public, BlueprintCallable, BlueprintEvent)

void UMuteMenu_C::UnfocusAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function MuteMenu.MuteMenu_C.UnfocusAll");

	UMuteMenu_C_UnfocusAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MuteMenu.MuteMenu_C.GetMutePlayerStatusAtIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMutePlayerStatus_C*     Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMuteMenu_C::GetMutePlayerStatusAtIndex(int Index, class UMutePlayerStatus_C** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function MuteMenu.MuteMenu_C.GetMutePlayerStatusAtIndex");

	UMuteMenu_C_GetMutePlayerStatusAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function MuteMenu.MuteMenu_C.MoveFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMuteMenu_C::MoveFocus(int side)
{
	static auto fn = UObject::FindObject<UFunction>("Function MuteMenu.MuteMenu_C.MoveFocus");

	UMuteMenu_C_MoveFocus_Params params;
	params.side = side;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MuteMenu.MuteMenu_C.InitializeFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bValid                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMuteMenu_C::InitializeFocus(bool* bValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function MuteMenu.MuteMenu_C.InitializeFocus");

	UMuteMenu_C_InitializeFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bValid != nullptr)
		*bValid = params.bValid;
}


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


// Function MuteMenu.MuteMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMuteMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MuteMenu.MuteMenu_C.Construct");

	UMuteMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MuteMenu.MuteMenu_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UMuteMenu_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MuteMenu.MuteMenu_C.EventInputSourceChanged");

	UMuteMenu_C_EventInputSourceChanged_Params params;

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
