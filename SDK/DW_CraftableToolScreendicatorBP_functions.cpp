// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CraftableToolScreendicatorBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.EventUpdateScreendication
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         arrowScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          onScreen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          behindCam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCraftableToolScreendicatorBP_C::EventUpdateScreendication(float* Angle, float* arrowScale, float* Distance, float* Opacity, bool* onScreen, bool* behindCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.EventUpdateScreendication");

	UCraftableToolScreendicatorBP_C_EventUpdateScreendication_Params params;
	params.Angle = Angle;
	params.arrowScale = arrowScale;
	params.Distance = Distance;
	params.Opacity = Opacity;
	params.onScreen = onScreen;
	params.behindCam = behindCam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCraftableToolScreendicatorBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.Construct");

	UCraftableToolScreendicatorBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.EventSetDarwinItemType
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCraftableToolScreendicatorBP_C::EventSetDarwinItemType(EDarwinItemTypeEnum* ItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.EventSetDarwinItemType");

	UCraftableToolScreendicatorBP_C_EventSetDarwinItemType_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.EventEnterCenter
// (Event, Public, BlueprintEvent)

void UCraftableToolScreendicatorBP_C::EventEnterCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.EventEnterCenter");

	UCraftableToolScreendicatorBP_C_EventEnterCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.EventLeaveCenter
// (Event, Public, BlueprintEvent)

void UCraftableToolScreendicatorBP_C::EventLeaveCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.EventLeaveCenter");

	UCraftableToolScreendicatorBP_C_EventLeaveCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.ExecuteUbergraph_CraftableToolScreendicatorBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCraftableToolScreendicatorBP_C::ExecuteUbergraph_CraftableToolScreendicatorBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CraftableToolScreendicatorBP.CraftableToolScreendicatorBP_C.ExecuteUbergraph_CraftableToolScreendicatorBP");

	UCraftableToolScreendicatorBP_C_ExecuteUbergraph_CraftableToolScreendicatorBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
