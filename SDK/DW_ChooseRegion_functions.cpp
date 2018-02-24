// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ChooseRegion_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChooseRegion.ChooseRegion_C.MoveGamepadSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Move                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChooseRegion_C::MoveGamepadSelection(int Move)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseRegion.ChooseRegion_C.MoveGamepadSelection");

	UChooseRegion_C_MoveGamepadSelection_Params params;
	params.Move = Move;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChooseRegion.ChooseRegion_C.GetRegionLineList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UChooseRegionLine_C*> LineList                       (Parm, OutParm, ZeroConstructor)

void UChooseRegion_C::GetRegionLineList(TArray<class UChooseRegionLine_C*>* LineList)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseRegion.ChooseRegion_C.GetRegionLineList");

	UChooseRegion_C_GetRegionLineList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LineList != nullptr)
		*LineList = params.LineList;
}


// Function ChooseRegion.ChooseRegion_C.UpdateGamepadHighlight
// (Public, BlueprintCallable, BlueprintEvent)

void UChooseRegion_C::UpdateGamepadHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseRegion.ChooseRegion_C.UpdateGamepadHighlight");

	UChooseRegion_C_UpdateGamepadHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChooseRegion.ChooseRegion_C.OpenChooseRegion
// (BlueprintCallable, BlueprintEvent)

void UChooseRegion_C::OpenChooseRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseRegion.ChooseRegion_C.OpenChooseRegion");

	UChooseRegion_C_OpenChooseRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChooseRegion.ChooseRegion_C.EventAddRegion
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                RegionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UChooseRegion_C::EventAddRegion(struct FString* RegionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseRegion.ChooseRegion_C.EventAddRegion");

	UChooseRegion_C_EventAddRegion_Params params;
	params.RegionName = RegionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChooseRegion.ChooseRegion_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)

void UChooseRegion_C::CloseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseRegion.ChooseRegion_C.CloseMenu");

	UChooseRegion_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChooseRegion.ChooseRegion_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChooseRegion_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseRegion.ChooseRegion_C.Construct");

	UChooseRegion_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChooseRegion.ChooseRegion_C.MenuMoveUp
// (BlueprintCallable, BlueprintEvent)

void UChooseRegion_C::MenuMoveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseRegion.ChooseRegion_C.MenuMoveUp");

	UChooseRegion_C_MenuMoveUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChooseRegion.ChooseRegion_C.MenuMoveDown
// (BlueprintCallable, BlueprintEvent)

void UChooseRegion_C::MenuMoveDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseRegion.ChooseRegion_C.MenuMoveDown");

	UChooseRegion_C_MenuMoveDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChooseRegion.ChooseRegion_C.MenuSelect
// (BlueprintCallable, BlueprintEvent)

void UChooseRegion_C::MenuSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseRegion.ChooseRegion_C.MenuSelect");

	UChooseRegion_C_MenuSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChooseRegion.ChooseRegion_C.ExecuteUbergraph_ChooseRegion
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChooseRegion_C::ExecuteUbergraph_ChooseRegion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseRegion.ChooseRegion_C.ExecuteUbergraph_ChooseRegion");

	UChooseRegion_C_ExecuteUbergraph_ChooseRegion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
