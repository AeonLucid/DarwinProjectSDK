// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CageHPIconBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CageHPIconBP.CageHPIconBP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCageHPIconBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CageHPIconBP.CageHPIconBP_C.Tick");

	UCageHPIconBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CageHPIconBP.CageHPIconBP_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          currentHP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          wantedHP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCageHPIconBP_C::Update(float currentHP, float wantedHP)
{
	static auto fn = UObject::FindObject<UFunction>("Function CageHPIconBP.CageHPIconBP_C.Update");

	UCageHPIconBP_C_Update_Params params;
	params.currentHP = currentHP;
	params.wantedHP = wantedHP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CageHPIconBP.CageHPIconBP_C.EventCageDestro
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCage**            Cage                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCageHPIconBP_C::EventCageDestro(class ADarwinCage** Cage)
{
	static auto fn = UObject::FindObject<UFunction>("Function CageHPIconBP.CageHPIconBP_C.EventCageDestro");

	UCageHPIconBP_C_EventCageDestro_Params params;
	params.Cage = Cage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CageHPIconBP.CageHPIconBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCageHPIconBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CageHPIconBP.CageHPIconBP_C.Construct");

	UCageHPIconBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CageHPIconBP.CageHPIconBP_C.ExecuteUbergraph_CageHPIconBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCageHPIconBP_C::ExecuteUbergraph_CageHPIconBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CageHPIconBP.CageHPIconBP_C.ExecuteUbergraph_CageHPIconBP");

	UCageHPIconBP_C_ExecuteUbergraph_CageHPIconBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
