// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinGliderComponentBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventStartGlidingSimulated
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinGliderComponentBP_C::EventStartGlidingSimulated(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventStartGlidingSimulated");

	UDarwinGliderComponentBP_C_EventStartGlidingSimulated_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventStopGlidingLocal
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinGliderComponentBP_C::EventStopGlidingLocal(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventStopGlidingLocal");

	UDarwinGliderComponentBP_C_EventStopGlidingLocal_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventStopGlidingSimulated
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinGliderComponentBP_C::EventStopGlidingSimulated(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventStopGlidingSimulated");

	UDarwinGliderComponentBP_C_EventStopGlidingSimulated_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventStartGlidingLocal
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinGliderComponentBP_C::EventStartGlidingLocal(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventStartGlidingLocal");

	UDarwinGliderComponentBP_C_EventStartGlidingLocal_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventGliderLandedLocal
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinGliderComponentBP_C::EventGliderLandedLocal(class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventGliderLandedLocal");

	UDarwinGliderComponentBP_C_EventGliderLandedLocal_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventGliderLandedSimulated
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinGliderComponentBP_C::EventGliderLandedSimulated(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.EventGliderLandedSimulated");

	UDarwinGliderComponentBP_C_EventGliderLandedSimulated_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.ExecuteUbergraph_DarwinGliderComponentBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinGliderComponentBP_C::ExecuteUbergraph_DarwinGliderComponentBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinGliderComponentBP.DarwinGliderComponentBP_C.ExecuteUbergraph_DarwinGliderComponentBP");

	UDarwinGliderComponentBP_C_ExecuteUbergraph_DarwinGliderComponentBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
