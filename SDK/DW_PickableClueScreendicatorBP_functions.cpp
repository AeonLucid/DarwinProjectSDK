// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PickableClueScreendicatorBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.EventUpdateScreendication
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         arrowScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          onScreen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          behindCam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickableClueScreendicatorBP_C::EventUpdateScreendication(float* Angle, float* arrowScale, float* Distance, float* Opacity, bool* onScreen, bool* behindCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.EventUpdateScreendication");

	UPickableClueScreendicatorBP_C_EventUpdateScreendication_Params params;
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


// Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.EventEnterScreen
// (Event, Public, BlueprintEvent)

void UPickableClueScreendicatorBP_C::EventEnterScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.EventEnterScreen");

	UPickableClueScreendicatorBP_C_EventEnterScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.EventLeaveScreen
// (Event, Public, BlueprintEvent)

void UPickableClueScreendicatorBP_C::EventLeaveScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.EventLeaveScreen");

	UPickableClueScreendicatorBP_C_EventLeaveScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPickableClueScreendicatorBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.Construct");

	UPickableClueScreendicatorBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.EventEnterInteractionRadius
// (Event, Public, BlueprintEvent)

void UPickableClueScreendicatorBP_C::EventEnterInteractionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.EventEnterInteractionRadius");

	UPickableClueScreendicatorBP_C_EventEnterInteractionRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.EventLeaveInteractionRadius
// (Event, Public, BlueprintEvent)

void UPickableClueScreendicatorBP_C::EventLeaveInteractionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.EventLeaveInteractionRadius");

	UPickableClueScreendicatorBP_C_EventLeaveInteractionRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickableClueScreendicatorBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.Tick");

	UPickableClueScreendicatorBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.ExecuteUbergraph_PickableClueScreendicatorBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickableClueScreendicatorBP_C::ExecuteUbergraph_PickableClueScreendicatorBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickableClueScreendicatorBP.PickableClueScreendicatorBP_C.ExecuteUbergraph_PickableClueScreendicatorBP");

	UPickableClueScreendicatorBP_C_ExecuteUbergraph_PickableClueScreendicatorBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
