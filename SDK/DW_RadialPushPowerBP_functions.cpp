// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_RadialPushPowerBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RadialPushPowerBP.RadialPushPowerBP_C.EventLocalPowerOff
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPushPowerBP_C::EventLocalPowerOff(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPushPowerBP.RadialPushPowerBP_C.EventLocalPowerOff");

	URadialPushPowerBP_C_EventLocalPowerOff_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPushPowerBP.RadialPushPowerBP_C.EventLocalPowerActivate
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPushPowerBP_C::EventLocalPowerActivate(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPushPowerBP.RadialPushPowerBP_C.EventLocalPowerActivate");

	URadialPushPowerBP_C_EventLocalPowerActivate_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPushPowerBP.RadialPushPowerBP_C.EventSimulatedPowerActivate
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void URadialPushPowerBP_C::EventSimulatedPowerActivate(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPushPowerBP.RadialPushPowerBP_C.EventSimulatedPowerActivate");

	URadialPushPowerBP_C_EventSimulatedPowerActivate_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPushPowerBP.RadialPushPowerBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPushPowerBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPushPowerBP.RadialPushPowerBP_C.ReceiveTick");

	URadialPushPowerBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPushPowerBP.RadialPushPowerBP_C.EventLocalPowerOn
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPushPowerBP_C::EventLocalPowerOn(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPushPowerBP.RadialPushPowerBP_C.EventLocalPowerOn");

	URadialPushPowerBP_C_EventLocalPowerOn_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPushPowerBP.RadialPushPowerBP_C.EventSimulatedPowerOff
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void URadialPushPowerBP_C::EventSimulatedPowerOff(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPushPowerBP.RadialPushPowerBP_C.EventSimulatedPowerOff");

	URadialPushPowerBP_C_EventSimulatedPowerOff_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPushPowerBP.RadialPushPowerBP_C.EventSimulatedPowerOn
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void URadialPushPowerBP_C::EventSimulatedPowerOn(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPushPowerBP.RadialPushPowerBP_C.EventSimulatedPowerOn");

	URadialPushPowerBP_C_EventSimulatedPowerOn_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPushPowerBP.RadialPushPowerBP_C.ExecuteUbergraph_RadialPushPowerBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPushPowerBP_C::ExecuteUbergraph_RadialPushPowerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPushPowerBP.RadialPushPowerBP_C.ExecuteUbergraph_RadialPushPowerBP");

	URadialPushPowerBP_C_ExecuteUbergraph_RadialPushPowerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
