// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinSpear_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinSpear.DarwinSpear_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADarwinSpear_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinSpear.DarwinSpear_C.UserConstructionScript");

	ADarwinSpear_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinSpear.DarwinSpear_C.EventHitStaticMesh
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADarwinSpear_C::EventHitStaticMesh(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinSpear.DarwinSpear_C.EventHitStaticMesh");

	ADarwinSpear_C_EventHitStaticMesh_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinSpear.DarwinSpear_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADarwinSpear_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinSpear.DarwinSpear_C.ReceiveBeginPlay");

	ADarwinSpear_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinSpear.DarwinSpear_C.EventReflectedByForcefield
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADarwinSpear_C::EventReflectedByForcefield(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinSpear.DarwinSpear_C.EventReflectedByForcefield");

	ADarwinSpear_C_EventReflectedByForcefield_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinSpear.DarwinSpear_C.EventEmitVisualSoundFX
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADarwinSpear_C::EventEmitVisualSoundFX(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinSpear.DarwinSpear_C.EventEmitVisualSoundFX");

	ADarwinSpear_C_EventEmitVisualSoundFX_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinSpear.DarwinSpear_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinSpear_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinSpear.DarwinSpear_C.ReceiveEndPlay");

	ADarwinSpear_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinSpear.DarwinSpear_C.EventUpdateLightIntensity
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinSpear_C::EventUpdateLightIntensity(float* Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinSpear.DarwinSpear_C.EventUpdateLightIntensity");

	ADarwinSpear_C_EventUpdateLightIntensity_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinSpear.DarwinSpear_C.EventImpactExplosion
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADarwinSpear_C::EventImpactExplosion(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinSpear.DarwinSpear_C.EventImpactExplosion");

	ADarwinSpear_C_EventImpactExplosion_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinSpear.DarwinSpear_C.EventEmitHitFX
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADarwinSpear_C::EventEmitHitFX(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinSpear.DarwinSpear_C.EventEmitHitFX");

	ADarwinSpear_C_EventEmitHitFX_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinSpear.DarwinSpear_C.EventSpawnImpactDecal
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FTransform*             Transform                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ADarwinSpear_C::EventSpawnImpactDecal(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinSpear.DarwinSpear_C.EventSpawnImpactDecal");

	ADarwinSpear_C_EventSpawnImpactDecal_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinSpear.DarwinSpear_C.EventImpactBlood
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 hit_actor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADarwinSpear_C::EventImpactBlood(class AActor** hit_actor, struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinSpear.DarwinSpear_C.EventImpactBlood");

	ADarwinSpear_C_EventImpactBlood_Params params;
	params.hit_actor = hit_actor;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinSpear.DarwinSpear_C.EventEmitToonFX
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADarwinSpear_C::EventEmitToonFX(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinSpear.DarwinSpear_C.EventEmitToonFX");

	ADarwinSpear_C_EventEmitToonFX_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinSpear.DarwinSpear_C.EventEmitXplosionFX
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Loc                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADarwinSpear_C::EventEmitXplosionFX(struct FVector* Loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinSpear.DarwinSpear_C.EventEmitXplosionFX");

	ADarwinSpear_C_EventEmitXplosionFX_Params params;
	params.Loc = Loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinSpear.DarwinSpear_C.ExecuteUbergraph_DarwinSpear
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADarwinSpear_C::ExecuteUbergraph_DarwinSpear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinSpear.DarwinSpear_C.ExecuteUbergraph_DarwinSpear");

	ADarwinSpear_C_ExecuteUbergraph_DarwinSpear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
