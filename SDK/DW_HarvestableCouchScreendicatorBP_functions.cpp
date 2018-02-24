// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_HarvestableCouchScreendicatorBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.EventUpdateScreendication
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         arrowScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          onScreen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          behindCam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHarvestableCouchScreendicatorBP_C::EventUpdateScreendication(float* Angle, float* arrowScale, float* Distance, float* Opacity, bool* onScreen, bool* behindCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.EventUpdateScreendication");

	UHarvestableCouchScreendicatorBP_C_EventUpdateScreendication_Params params;
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


// Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.EventEnterScreen
// (Event, Public, BlueprintEvent)

void UHarvestableCouchScreendicatorBP_C::EventEnterScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.EventEnterScreen");

	UHarvestableCouchScreendicatorBP_C_EventEnterScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.EventLeaveScreen
// (Event, Public, BlueprintEvent)

void UHarvestableCouchScreendicatorBP_C::EventLeaveScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.EventLeaveScreen");

	UHarvestableCouchScreendicatorBP_C_EventLeaveScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.EventEnterInteractionRadius
// (Event, Public, BlueprintEvent)

void UHarvestableCouchScreendicatorBP_C::EventEnterInteractionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.EventEnterInteractionRadius");

	UHarvestableCouchScreendicatorBP_C_EventEnterInteractionRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.EventLeaveInteractionRadius
// (Event, Public, BlueprintEvent)

void UHarvestableCouchScreendicatorBP_C::EventLeaveInteractionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.EventLeaveInteractionRadius");

	UHarvestableCouchScreendicatorBP_C_EventLeaveInteractionRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHarvestableCouchScreendicatorBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.Tick");

	UHarvestableCouchScreendicatorBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.ExecuteUbergraph_HarvestableCouchScreendicatorBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHarvestableCouchScreendicatorBP_C::ExecuteUbergraph_HarvestableCouchScreendicatorBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HarvestableCouchScreendicatorBP.HarvestableCouchScreendicatorBP_C.ExecuteUbergraph_HarvestableCouchScreendicatorBP");

	UHarvestableCouchScreendicatorBP_C_ExecuteUbergraph_HarvestableCouchScreendicatorBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
