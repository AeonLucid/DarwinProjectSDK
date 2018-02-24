// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DPW_RobotBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DPW_RobotBP.DPW_RobotBP_C.Delivery
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADPW_RobotBP_C::Delivery(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function DPW_RobotBP.DPW_RobotBP_C.Delivery");

	ADPW_RobotBP_C_Delivery_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DPW_RobotBP.DPW_RobotBP_C.Rotate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADPW_RobotBP_C::Rotate(float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function DPW_RobotBP.DPW_RobotBP_C.Rotate");

	ADPW_RobotBP_C_Rotate_Params params;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DPW_RobotBP.DPW_RobotBP_C.UpdateLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DistToPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           returning                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADPW_RobotBP_C::UpdateLocation(float DistToPlayer, bool returning)
{
	static auto fn = UObject::FindObject<UFunction>("Function DPW_RobotBP.DPW_RobotBP_C.UpdateLocation");

	ADPW_RobotBP_C_UpdateLocation_Params params;
	params.DistToPlayer = DistToPlayer;
	params.returning = returning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DPW_RobotBP.DPW_RobotBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADPW_RobotBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DPW_RobotBP.DPW_RobotBP_C.UserConstructionScript");

	ADPW_RobotBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DPW_RobotBP.DPW_RobotBP_C.Deliver
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADPW_RobotBP_C::Deliver(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DPW_RobotBP.DPW_RobotBP_C.Deliver");

	ADPW_RobotBP_C_Deliver_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DPW_RobotBP.DPW_RobotBP_C.RotateBox
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADPW_RobotBP_C::RotateBox(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DPW_RobotBP.DPW_RobotBP_C.RotateBox");

	ADPW_RobotBP_C_RotateBox_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DPW_RobotBP.DPW_RobotBP_C.DeliveryTranslation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          returning                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADPW_RobotBP_C::DeliveryTranslation(float* DeltaTime, bool* returning)
{
	static auto fn = UObject::FindObject<UFunction>("Function DPW_RobotBP.DPW_RobotBP_C.DeliveryTranslation");

	ADPW_RobotBP_C_DeliveryTranslation_Params params;
	params.DeltaTime = DeltaTime;
	params.returning = returning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DPW_RobotBP.DPW_RobotBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADPW_RobotBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DPW_RobotBP.DPW_RobotBP_C.ReceiveTick");

	ADPW_RobotBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DPW_RobotBP.DPW_RobotBP_C.ExecuteUbergraph_DPW_RobotBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADPW_RobotBP_C::ExecuteUbergraph_DPW_RobotBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DPW_RobotBP.DPW_RobotBP_C.ExecuteUbergraph_DPW_RobotBP");

	ADPW_RobotBP_C_ExecuteUbergraph_DPW_RobotBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
