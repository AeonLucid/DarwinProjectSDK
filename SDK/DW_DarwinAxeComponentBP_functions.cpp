// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinAxeComponentBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventStartWindup
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinAxeComponentBP_C::EventStartWindup(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventStartWindup");

	UDarwinAxeComponentBP_C_EventStartWindup_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventStartStartSwing
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinAxeComponentBP_C::EventStartStartSwing(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventStartStartSwing");

	UDarwinAxeComponentBP_C_EventStartStartSwing_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventHitEnemy
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBackHit                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAxeComponentBP_C::EventHitEnemy(class ADarwinCharacter** Character, bool* bBackHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventHitEnemy");

	UDarwinAxeComponentBP_C_EventHitEnemy_Params params;
	params.Character = Character;
	params.bBackHit = bBackHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventReflectedByForcefield
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinAxeComponentBP_C::EventReflectedByForcefield(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventReflectedByForcefield");

	UDarwinAxeComponentBP_C_EventReflectedByForcefield_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventHitArmor
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinAxeComponentBP_C::EventHitArmor(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventHitArmor");

	UDarwinAxeComponentBP_C_EventHitArmor_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventHitZombie
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinZombie**          zombie                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAxeComponentBP_C::EventHitZombie(class ADarwinZombie** zombie)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventHitZombie");

	UDarwinAxeComponentBP_C_EventHitZombie_Params params;
	params.zombie = zombie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventStartDamageWindow
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinAxeComponentBP_C::EventStartDamageWindow(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventStartDamageWindow");

	UDarwinAxeComponentBP_C_EventStartDamageWindow_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventBlocked
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinAxeComponentBP_C::EventBlocked(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventBlocked");

	UDarwinAxeComponentBP_C_EventBlocked_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventStartWindupRadialForce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinAxeComponentBP_C::EventStartWindupRadialForce(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventStartWindupRadialForce");

	UDarwinAxeComponentBP_C_EventStartWindupRadialForce_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventHitWall
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinAxeComponentBP_C::EventHitWall(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventHitWall");

	UDarwinAxeComponentBP_C_EventHitWall_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventHitCage
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinAxeComponentBP_C::EventHitCage(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventHitCage");

	UDarwinAxeComponentBP_C_EventHitCage_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventSpawnLightning
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinAxeComponentBP_C::EventSpawnLightning(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventSpawnLightning");

	UDarwinAxeComponentBP_C_EventSpawnLightning_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventDragonPunch
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UDarwinAxeComponentBP_C::EventDragonPunch(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.EventDragonPunch");

	UDarwinAxeComponentBP_C_EventDragonPunch_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.ExecuteUbergraph_DarwinAxeComponentBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinAxeComponentBP_C::ExecuteUbergraph_DarwinAxeComponentBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinAxeComponentBP.DarwinAxeComponentBP_C.ExecuteUbergraph_DarwinAxeComponentBP");

	UDarwinAxeComponentBP_C_ExecuteUbergraph_DarwinAxeComponentBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
