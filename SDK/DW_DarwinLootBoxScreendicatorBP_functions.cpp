// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinLootBoxScreendicatorBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventUpdateScreendication
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         arrowScale                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          onScreen                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          behindCam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinLootBoxScreendicatorBP_C::EventUpdateScreendication(float* Angle, float* arrowScale, float* Distance, float* Opacity, bool* onScreen, bool* behindCam)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventUpdateScreendication");

	UDarwinLootBoxScreendicatorBP_C_EventUpdateScreendication_Params params;
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


// Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventEnterScreen
// (Event, Public, BlueprintEvent)

void UDarwinLootBoxScreendicatorBP_C::EventEnterScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventEnterScreen");

	UDarwinLootBoxScreendicatorBP_C_EventEnterScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventLeaveScreen
// (Event, Public, BlueprintEvent)

void UDarwinLootBoxScreendicatorBP_C::EventLeaveScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventLeaveScreen");

	UDarwinLootBoxScreendicatorBP_C_EventLeaveScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventEnterInteractionRadius
// (Event, Public, BlueprintEvent)

void UDarwinLootBoxScreendicatorBP_C::EventEnterInteractionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventEnterInteractionRadius");

	UDarwinLootBoxScreendicatorBP_C_EventEnterInteractionRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventLeaveInteractionRadius
// (Event, Public, BlueprintEvent)

void UDarwinLootBoxScreendicatorBP_C::EventLeaveInteractionRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventLeaveInteractionRadius");

	UDarwinLootBoxScreendicatorBP_C_EventLeaveInteractionRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinLootBoxScreendicatorBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.Tick");

	UDarwinLootBoxScreendicatorBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventIsDeadDeer
// (Event, Public, BlueprintEvent)

void UDarwinLootBoxScreendicatorBP_C::EventIsDeadDeer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.EventIsDeadDeer");

	UDarwinLootBoxScreendicatorBP_C_EventIsDeadDeer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.ExecuteUbergraph_DarwinLootBoxScreendicatorBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinLootBoxScreendicatorBP_C::ExecuteUbergraph_DarwinLootBoxScreendicatorBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinLootBoxScreendicatorBP.DarwinLootBoxScreendicatorBP_C.ExecuteUbergraph_DarwinLootBoxScreendicatorBP");

	UDarwinLootBoxScreendicatorBP_C_ExecuteUbergraph_DarwinLootBoxScreendicatorBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
