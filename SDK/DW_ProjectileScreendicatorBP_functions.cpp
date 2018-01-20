// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_ProjectileScreendicatorBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventUpdateScreendication
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         arrowScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          onScreen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          behindCam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProjectileScreendicatorBP_C::EventUpdateScreendication(float* Angle, float* arrowScale, float* Distance, float* Opacity, bool* onScreen, bool* behindCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventUpdateScreendication");

	UProjectileScreendicatorBP_C_EventUpdateScreendication_Params params;
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


// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventEnterCenter
// (Event, Public, BlueprintEvent)

void UProjectileScreendicatorBP_C::EventEnterCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventEnterCenter");

	UProjectileScreendicatorBP_C_EventEnterCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventLeaveCenter
// (Event, Public, BlueprintEvent)

void UProjectileScreendicatorBP_C::EventLeaveCenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventLeaveCenter");

	UProjectileScreendicatorBP_C_EventLeaveCenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventEnterInteractionRadius
// (Event, Public, BlueprintEvent)

void UProjectileScreendicatorBP_C::EventEnterInteractionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventEnterInteractionRadius");

	UProjectileScreendicatorBP_C_EventEnterInteractionRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventLeaveInteractionRadius
// (Event, Public, BlueprintEvent)

void UProjectileScreendicatorBP_C::EventLeaveInteractionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventLeaveInteractionRadius");

	UProjectileScreendicatorBP_C_EventLeaveInteractionRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventEnterScreen
// (Event, Public, BlueprintEvent)

void UProjectileScreendicatorBP_C::EventEnterScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventEnterScreen");

	UProjectileScreendicatorBP_C_EventEnterScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventLeaveScreen
// (Event, Public, BlueprintEvent)

void UProjectileScreendicatorBP_C::EventLeaveScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.EventLeaveScreen");

	UProjectileScreendicatorBP_C_EventLeaveScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProjectileScreendicatorBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.Construct");

	UProjectileScreendicatorBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.ExecuteUbergraph_ProjectileScreendicatorBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProjectileScreendicatorBP_C::ExecuteUbergraph_ProjectileScreendicatorBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileScreendicatorBP.ProjectileScreendicatorBP_C.ExecuteUbergraph_ProjectileScreendicatorBP");

	UProjectileScreendicatorBP_C_ExecuteUbergraph_ProjectileScreendicatorBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
