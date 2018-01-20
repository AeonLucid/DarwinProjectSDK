// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_LobbyDroneBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyDroneBP.LobbyDroneBP_C.InitFromBPValues
// (Public, BlueprintCallable, BlueprintEvent)

void ALobbyDroneBP_C::InitFromBPValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.InitFromBPValues");

	ALobbyDroneBP_C_InitFromBPValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDroneBP.LobbyDroneBP_C.GetDroneTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData)

void ALobbyDroneBP_C::GetDroneTransform(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.GetDroneTransform");

	ALobbyDroneBP_C_GetDroneTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function LobbyDroneBP.LobbyDroneBP_C.GetRandIntInRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Int                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyDroneBP_C::GetRandIntInRange(int Min, int Max, int* Int)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.GetRandIntInRange");

	ALobbyDroneBP_C_GetRandIntInRange_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Int != nullptr)
		*Int = params.Int;
}


// Function LobbyDroneBP.LobbyDroneBP_C.GetRandRotator
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotator                        (Parm, OutParm, IsPlainOldData)

void ALobbyDroneBP_C::GetRandRotator(struct FRotator* Rotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.GetRandRotator");

	ALobbyDroneBP_C_GetRandRotator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rotator != nullptr)
		*Rotator = params.Rotator;
}


// Function LobbyDroneBP.LobbyDroneBP_C.GetRandFloatInRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Random                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALobbyDroneBP_C::GetRandFloatInRange(float Min, float Max, float* Random)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.GetRandFloatInRange");

	ALobbyDroneBP_C_GetRandFloatInRange_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Random != nullptr)
		*Random = params.Random;
}


// Function LobbyDroneBP.LobbyDroneBP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALobbyDroneBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.UserConstructionScript");

	ALobbyDroneBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDroneBP.LobbyDroneBP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ALobbyDroneBP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.ReceiveDestroyed");

	ALobbyDroneBP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDroneBP.LobbyDroneBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyDroneBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.ReceiveTick");

	ALobbyDroneBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDroneBP.LobbyDroneBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALobbyDroneBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.ReceiveBeginPlay");

	ALobbyDroneBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDroneBP.LobbyDroneBP_C.EventHitted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                hit_direction                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ALobbyDroneBP_C::EventHitted(struct FVector* hit_direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.EventHitted");

	ALobbyDroneBP_C_EventHitted_Params params;
	params.hit_direction = hit_direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDroneBP.LobbyDroneBP_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ALobbyDroneBP_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.ReceiveHit");

	ALobbyDroneBP_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDroneBP.LobbyDroneBP_C.explosion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyDroneBP_C::explosion(const struct FVector& Direction, float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.explosion");

	ALobbyDroneBP_C_explosion_Params params;
	params.Direction = Direction;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDroneBP.LobbyDroneBP_C.EventUpdateDroneRelativeLocation
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ALobbyDroneBP_C::EventUpdateDroneRelativeLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.EventUpdateDroneRelativeLocation");

	ALobbyDroneBP_C_EventUpdateDroneRelativeLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDroneBP.LobbyDroneBP_C.EventUpdateDroneRelativeRotation
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FRotator*               Rotation                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ALobbyDroneBP_C::EventUpdateDroneRelativeRotation(struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.EventUpdateDroneRelativeRotation");

	ALobbyDroneBP_C_EventUpdateDroneRelativeRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDroneBP.LobbyDroneBP_C.EventSpawnTrail
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           drone_type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyDroneBP_C::EventSpawnTrail(int* drone_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.EventSpawnTrail");

	ALobbyDroneBP_C_EventSpawnTrail_Params params;
	params.drone_type = drone_type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDroneBP.LobbyDroneBP_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            drone_type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyDroneBP_C::CustomEvent(int drone_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.CustomEvent");

	ALobbyDroneBP_C_CustomEvent_Params params;
	params.drone_type = drone_type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDroneBP.LobbyDroneBP_C.EventKillTrail
// (Event, Public, BlueprintEvent)

void ALobbyDroneBP_C::EventKillTrail()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.EventKillTrail");

	ALobbyDroneBP_C_EventKillTrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDroneBP.LobbyDroneBP_C.EventUpdateDroneMaterial
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           MaterialIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyDroneBP_C::EventUpdateDroneMaterial(int* MaterialIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.EventUpdateDroneMaterial");

	ALobbyDroneBP_C_EventUpdateDroneMaterial_Params params;
	params.MaterialIndex = MaterialIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyDroneBP.LobbyDroneBP_C.ExecuteUbergraph_LobbyDroneBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALobbyDroneBP_C::ExecuteUbergraph_LobbyDroneBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyDroneBP.LobbyDroneBP_C.ExecuteUbergraph_LobbyDroneBP");

	ALobbyDroneBP_C_ExecuteUbergraph_LobbyDroneBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
