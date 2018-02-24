// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NewTurretBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewTurretBP.NewTurretBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANewTurretBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewTurretBP.NewTurretBP_C.UserConstructionScript");

	ANewTurretBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewTurretBP.NewTurretBP_C.EventTurretShoot
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                fromLoc                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                toLoc                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// ETurretHitType*                hitType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewTurretBP_C::EventTurretShoot(struct FVector* fromLoc, struct FVector* toLoc, ETurretHitType* hitType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewTurretBP.NewTurretBP_C.EventTurretShoot");

	ANewTurretBP_C_EventTurretShoot_Params params;
	params.fromLoc = fromLoc;
	params.toLoc = toLoc;
	params.hitType = hitType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewTurretBP.NewTurretBP_C.EventTurretMakeSound
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ANewTurretBP_C::EventTurretMakeSound(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewTurretBP.NewTurretBP_C.EventTurretMakeSound");

	ANewTurretBP_C_EventTurretMakeSound_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewTurretBP.NewTurretBP_C.EventUpdateTurretRotation
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FRotator*               rot                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ANewTurretBP_C::EventUpdateTurretRotation(struct FRotator* rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewTurretBP.NewTurretBP_C.EventUpdateTurretRotation");

	ANewTurretBP_C_EventUpdateTurretRotation_Params params;
	params.rot = rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewTurretBP.NewTurretBP_C.EventCraftableToolDestroyed
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ANewTurretBP_C::EventCraftableToolDestroyed(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewTurretBP.NewTurretBP_C.EventCraftableToolDestroyed");

	ANewTurretBP_C_EventCraftableToolDestroyed_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewTurretBP.NewTurretBP_C.EventInitializeMeshArray
// (Event, Public, BlueprintEvent)

void ANewTurretBP_C::EventInitializeMeshArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewTurretBP.NewTurretBP_C.EventInitializeMeshArray");

	ANewTurretBP_C_EventInitializeMeshArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewTurretBP.NewTurretBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANewTurretBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewTurretBP.NewTurretBP_C.ReceiveBeginPlay");

	ANewTurretBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewTurretBP.NewTurretBP_C.EventUpdateConeOpacity
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Opacity                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewTurretBP_C::EventUpdateConeOpacity(float* Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewTurretBP.NewTurretBP_C.EventUpdateConeOpacity");

	ANewTurretBP_C_EventUpdateConeOpacity_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewTurretBP.NewTurretBP_C.EventUpdateConeSize
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewTurretBP_C::EventUpdateConeSize(float* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewTurretBP.NewTurretBP_C.EventUpdateConeSize");

	ANewTurretBP_C_EventUpdateConeSize_Params params;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewTurretBP.NewTurretBP_C.EventDeployTurret
// (Event, Public, BlueprintEvent)

void ANewTurretBP_C::EventDeployTurret()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewTurretBP.NewTurretBP_C.EventDeployTurret");

	ANewTurretBP_C_EventDeployTurret_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewTurretBP.NewTurretBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewTurretBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewTurretBP.NewTurretBP_C.ReceiveTick");

	ANewTurretBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewTurretBP.NewTurretBP_C.EventTurretIsNowDeployed
// (Event, Public, BlueprintEvent)

void ANewTurretBP_C::EventTurretIsNowDeployed()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewTurretBP.NewTurretBP_C.EventTurretIsNowDeployed");

	ANewTurretBP_C_EventTurretIsNowDeployed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewTurretBP.NewTurretBP_C.EventCraftableToolDestroyedDedicatedServer
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ANewTurretBP_C::EventCraftableToolDestroyedDedicatedServer(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewTurretBP.NewTurretBP_C.EventCraftableToolDestroyedDedicatedServer");

	ANewTurretBP_C_EventCraftableToolDestroyedDedicatedServer_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewTurretBP.NewTurretBP_C.ExecuteUbergraph_NewTurretBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANewTurretBP_C::ExecuteUbergraph_NewTurretBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewTurretBP.NewTurretBP_C.ExecuteUbergraph_NewTurretBP");

	ANewTurretBP_C_ExecuteUbergraph_NewTurretBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
