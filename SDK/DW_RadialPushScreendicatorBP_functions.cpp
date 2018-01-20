// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_RadialPushScreendicatorBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RadialPushScreendicatorBP.RadialPushScreendicatorBP_C.EventEnterInteractionRadius
// (Event, Public, BlueprintEvent)

void URadialPushScreendicatorBP_C::EventEnterInteractionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPushScreendicatorBP.RadialPushScreendicatorBP_C.EventEnterInteractionRadius");

	URadialPushScreendicatorBP_C_EventEnterInteractionRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPushScreendicatorBP.RadialPushScreendicatorBP_C.EventUpdateScreendication
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         arrowScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          onScreen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          behindCam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPushScreendicatorBP_C::EventUpdateScreendication(float* Angle, float* arrowScale, float* Distance, float* Opacity, bool* onScreen, bool* behindCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPushScreendicatorBP.RadialPushScreendicatorBP_C.EventUpdateScreendication");

	URadialPushScreendicatorBP_C_EventUpdateScreendication_Params params;
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


// Function RadialPushScreendicatorBP.RadialPushScreendicatorBP_C.EventLeaveInteractionRadius
// (Event, Public, BlueprintEvent)

void URadialPushScreendicatorBP_C::EventLeaveInteractionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPushScreendicatorBP.RadialPushScreendicatorBP_C.EventLeaveInteractionRadius");

	URadialPushScreendicatorBP_C_EventLeaveInteractionRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPushScreendicatorBP.RadialPushScreendicatorBP_C.ExecuteUbergraph_RadialPushScreendicatorBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPushScreendicatorBP_C::ExecuteUbergraph_RadialPushScreendicatorBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPushScreendicatorBP.RadialPushScreendicatorBP_C.ExecuteUbergraph_RadialPushScreendicatorBP");

	URadialPushScreendicatorBP_C_ExecuteUbergraph_RadialPushScreendicatorBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
