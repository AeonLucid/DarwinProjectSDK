// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinJumpingComponentBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.EventLocalJump
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinJumpingComponentBP_C::EventLocalJump(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.EventLocalJump");

	UDarwinJumpingComponentBP_C_EventLocalJump_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.EventSimulatedJump
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinJumpingComponentBP_C::EventSimulatedJump(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.EventSimulatedJump");

	UDarwinJumpingComponentBP_C_EventSimulatedJump_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.EventJumpLand
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinJumpingComponentBP_C::EventJumpLand(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.EventJumpLand");

	UDarwinJumpingComponentBP_C_EventJumpLand_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinJumpingComponentBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.ReceiveTick");

	UDarwinJumpingComponentBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.EventLocalJumpThroughWindow
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinJumpingComponentBP_C::EventLocalJumpThroughWindow(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.EventLocalJumpThroughWindow");

	UDarwinJumpingComponentBP_C_EventLocalJumpThroughWindow_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.EventSimulatedJumpThroughWindow
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinJumpingComponentBP_C::EventSimulatedJumpThroughWindow(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.EventSimulatedJumpThroughWindow");

	UDarwinJumpingComponentBP_C_EventSimulatedJumpThroughWindow_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.ExecuteUbergraph_DarwinJumpingComponentBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinJumpingComponentBP_C::ExecuteUbergraph_DarwinJumpingComponentBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinJumpingComponentBP.DarwinJumpingComponentBP_C.ExecuteUbergraph_DarwinJumpingComponentBP");

	UDarwinJumpingComponentBP_C_ExecuteUbergraph_DarwinJumpingComponentBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
