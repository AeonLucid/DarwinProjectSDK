// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PickablePoopScreendicatorBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PickablePoopScreendicatorBP.PickablePoopScreendicatorBP_C.EventUpdateScreendication
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         arrowScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          onScreen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          behindCam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickablePoopScreendicatorBP_C::EventUpdateScreendication(float* Angle, float* arrowScale, float* Distance, float* Opacity, bool* onScreen, bool* behindCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickablePoopScreendicatorBP.PickablePoopScreendicatorBP_C.EventUpdateScreendication");

	UPickablePoopScreendicatorBP_C_EventUpdateScreendication_Params params;
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


// Function PickablePoopScreendicatorBP.PickablePoopScreendicatorBP_C.EventEnterScreen
// (Event, Public, BlueprintEvent)

void UPickablePoopScreendicatorBP_C::EventEnterScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickablePoopScreendicatorBP.PickablePoopScreendicatorBP_C.EventEnterScreen");

	UPickablePoopScreendicatorBP_C_EventEnterScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickablePoopScreendicatorBP.PickablePoopScreendicatorBP_C.EventLeaveScreen
// (Event, Public, BlueprintEvent)

void UPickablePoopScreendicatorBP_C::EventLeaveScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickablePoopScreendicatorBP.PickablePoopScreendicatorBP_C.EventLeaveScreen");

	UPickablePoopScreendicatorBP_C_EventLeaveScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickablePoopScreendicatorBP.PickablePoopScreendicatorBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPickablePoopScreendicatorBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickablePoopScreendicatorBP.PickablePoopScreendicatorBP_C.Construct");

	UPickablePoopScreendicatorBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickablePoopScreendicatorBP.PickablePoopScreendicatorBP_C.ExecuteUbergraph_PickablePoopScreendicatorBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickablePoopScreendicatorBP_C::ExecuteUbergraph_PickablePoopScreendicatorBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickablePoopScreendicatorBP.PickablePoopScreendicatorBP_C.ExecuteUbergraph_PickablePoopScreendicatorBP");

	UPickablePoopScreendicatorBP_C_ExecuteUbergraph_PickablePoopScreendicatorBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
