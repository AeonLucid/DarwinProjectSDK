// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinPylonScreendicatorBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventUpdateScreendication
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         arrowScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          onScreen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          behindCam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPylonScreendicatorBP_C::EventUpdateScreendication(float* Angle, float* arrowScale, float* Distance, float* Opacity, bool* onScreen, bool* behindCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventUpdateScreendication");

	UDarwinPylonScreendicatorBP_C_EventUpdateScreendication_Params params;
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


// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventEnterCenter
// (Event, Public, BlueprintEvent)

void UDarwinPylonScreendicatorBP_C::EventEnterCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventEnterCenter");

	UDarwinPylonScreendicatorBP_C_EventEnterCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventLeaveCenter
// (Event, Public, BlueprintEvent)

void UDarwinPylonScreendicatorBP_C::EventLeaveCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventLeaveCenter");

	UDarwinPylonScreendicatorBP_C_EventLeaveCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventEnterInteractionRadius
// (Event, Public, BlueprintEvent)

void UDarwinPylonScreendicatorBP_C::EventEnterInteractionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventEnterInteractionRadius");

	UDarwinPylonScreendicatorBP_C_EventEnterInteractionRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventLeaveInteractionRadius
// (Event, Public, BlueprintEvent)

void UDarwinPylonScreendicatorBP_C::EventLeaveInteractionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventLeaveInteractionRadius");

	UDarwinPylonScreendicatorBP_C_EventLeaveInteractionRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventEnterScreen
// (Event, Public, BlueprintEvent)

void UDarwinPylonScreendicatorBP_C::EventEnterScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventEnterScreen");

	UDarwinPylonScreendicatorBP_C_EventEnterScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventLeaveScreen
// (Event, Public, BlueprintEvent)

void UDarwinPylonScreendicatorBP_C::EventLeaveScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventLeaveScreen");

	UDarwinPylonScreendicatorBP_C_EventLeaveScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventPylonHarvestStart
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                harvesterName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int*                           PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPylonScreendicatorBP_C::EventPylonHarvestStart(struct FString* harvesterName, int* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventPylonHarvestStart");

	UDarwinPylonScreendicatorBP_C_EventPylonHarvestStart_Params params;
	params.harvesterName = harvesterName;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventPylonHarvestEnd
// (Event, Public, BlueprintEvent)

void UDarwinPylonScreendicatorBP_C::EventPylonHarvestEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventPylonHarvestEnd");

	UDarwinPylonScreendicatorBP_C_EventPylonHarvestEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventUpdatePylonHarvestProgress
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         harvestProgress                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPylonScreendicatorBP_C::EventUpdatePylonHarvestProgress(float* harvestProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.EventUpdatePylonHarvestProgress");

	UDarwinPylonScreendicatorBP_C_EventUpdatePylonHarvestProgress_Params params;
	params.harvestProgress = harvestProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDarwinPylonScreendicatorBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.Construct");

	UDarwinPylonScreendicatorBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.ExecuteUbergraph_DarwinPylonScreendicatorBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinPylonScreendicatorBP_C::ExecuteUbergraph_DarwinPylonScreendicatorBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinPylonScreendicatorBP.DarwinPylonScreendicatorBP_C.ExecuteUbergraph_DarwinPylonScreendicatorBP");

	UDarwinPylonScreendicatorBP_C_ExecuteUbergraph_DarwinPylonScreendicatorBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
