// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ChooseRegionLine_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChooseRegionLine.ChooseRegionLine_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChooseRegion_C*         ParentMenu                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InRegionName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UChooseRegionLine_C::Initialize(class UChooseRegion_C* ParentMenu, const struct FString& InRegionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseRegionLine.ChooseRegionLine_C.Initialize");

	UChooseRegionLine_C_Initialize_Params params;
	params.ParentMenu = ParentMenu;
	params.InRegionName = InRegionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChooseRegionLine.ChooseRegionLine_C.EventUpdateRegionPing
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                RegionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           ping                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChooseRegionLine_C::EventUpdateRegionPing(struct FString* RegionName, int* ping)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseRegionLine.ChooseRegionLine_C.EventUpdateRegionPing");

	UChooseRegionLine_C_EventUpdateRegionPing_Params params;
	params.RegionName = RegionName;
	params.ping = ping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChooseRegionLine.ChooseRegionLine_C.EventRemoveRegion
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                RegionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UChooseRegionLine_C::EventRemoveRegion(struct FString* RegionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseRegionLine.ChooseRegionLine_C.EventRemoveRegion");

	UChooseRegionLine_C_EventRemoveRegion_Params params;
	params.RegionName = RegionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChooseRegionLine.ChooseRegionLine_C.BndEvt__Button_Region_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChooseRegionLine_C::BndEvt__Button_Region_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseRegionLine.ChooseRegionLine_C.BndEvt__Button_Region_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UChooseRegionLine_C_BndEvt__Button_Region_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChooseRegionLine.ChooseRegionLine_C.ExecuteUbergraph_ChooseRegionLine
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChooseRegionLine_C::ExecuteUbergraph_ChooseRegionLine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChooseRegionLine.ChooseRegionLine_C.ExecuteUbergraph_ChooseRegionLine");

	UChooseRegionLine_C_ExecuteUbergraph_ChooseRegionLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
