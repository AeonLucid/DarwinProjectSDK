// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CageBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CageBP.CageBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACageBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CageBP.CageBP_C.UserConstructionScript");

	ACageBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CageBP.CageBP_C.EventCraftableToolDestroyed
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ACageBP_C::EventCraftableToolDestroyed(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function CageBP.CageBP_C.EventCraftableToolDestroyed");

	ACageBP_C_EventCraftableToolDestroyed_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CageBP.CageBP_C.EventCraftableToolDestroyedDedicatedServer
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ACageBP_C::EventCraftableToolDestroyedDedicatedServer(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function CageBP.CageBP_C.EventCraftableToolDestroyedDedicatedServer");

	ACageBP_C_EventCraftableToolDestroyedDedicatedServer_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CageBP.CageBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACageBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CageBP.CageBP_C.ReceiveBeginPlay");

	ACageBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CageBP.CageBP_C.EventCraftableToolSprungDedicatedServer
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       characterTarget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACageBP_C::EventCraftableToolSprungDedicatedServer(class ADarwinCharacter** characterTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CageBP.CageBP_C.EventCraftableToolSprungDedicatedServer");

	ACageBP_C_EventCraftableToolSprungDedicatedServer_Params params;
	params.characterTarget = characterTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CageBP.CageBP_C.EventCraftableToolSprung
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       characterTarget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACageBP_C::EventCraftableToolSprung(class ADarwinCharacter** characterTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CageBP.CageBP_C.EventCraftableToolSprung");

	ACageBP_C_EventCraftableToolSprung_Params params;
	params.characterTarget = characterTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CageBP.CageBP_C.EventUpdateWaveTime
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACageBP_C::EventUpdateWaveTime(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CageBP.CageBP_C.EventUpdateWaveTime");

	ACageBP_C_EventUpdateWaveTime_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CageBP.CageBP_C.EventInitializeMeshArray
// (Event, Public, BlueprintEvent)

void ACageBP_C::EventInitializeMeshArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function CageBP.CageBP_C.EventInitializeMeshArray");

	ACageBP_C_EventInitializeMeshArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CageBP.CageBP_C.EventSpawnFallingSnow
// (Event, Public, BlueprintEvent)

void ACageBP_C::EventSpawnFallingSnow()
{
	static auto fn = UObject::FindObject<UFunction>("Function CageBP.CageBP_C.EventSpawnFallingSnow");

	ACageBP_C_EventSpawnFallingSnow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CageBP.CageBP_C.ExecuteUbergraph_CageBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACageBP_C::ExecuteUbergraph_CageBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CageBP.CageBP_C.ExecuteUbergraph_CageBP");

	ACageBP_C_ExecuteUbergraph_CageBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
