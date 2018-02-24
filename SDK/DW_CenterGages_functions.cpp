// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_CenterGages_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CenterGages.CenterGages_C.Key Binding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCenterGages_C::Key_Binding()
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterGages.CenterGages_C.Key Binding");

	UCenterGages_C_Key_Binding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterGages.CenterGages_C.EventUpdateStamina
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         staminaNormalized              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCenterGages_C::EventUpdateStamina(float* staminaNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterGages.CenterGages_C.EventUpdateStamina");

	UCenterGages_C_EventUpdateStamina_Params params;
	params.staminaNormalized = staminaNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterGages.CenterGages_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCenterGages_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterGages.CenterGages_C.Tick");

	UCenterGages_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterGages.CenterGages_C.EventGameHasStarted
// (Event, Public, BlueprintEvent)

void UCenterGages_C::EventGameHasStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterGages.CenterGages_C.EventGameHasStarted");

	UCenterGages_C_EventGameHasStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterGages.CenterGages_C.EventGameStartsNow
// (Event, Public, BlueprintEvent)

void UCenterGages_C::EventGameStartsNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterGages.CenterGages_C.EventGameStartsNow");

	UCenterGages_C_EventGameStartsNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterGages.CenterGages_C.EventUpdateColdFactor
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         coldFactorNormalized           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCenterGages_C::EventUpdateColdFactor(float* coldFactorNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterGages.CenterGages_C.EventUpdateColdFactor");

	UCenterGages_C_EventUpdateColdFactor_Params params;
	params.coldFactorNormalized = coldFactorNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterGages.CenterGages_C.EventInputSourceChanged
// (Event, Public, BlueprintEvent)

void UCenterGages_C::EventInputSourceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterGages.CenterGages_C.EventInputSourceChanged");

	UCenterGages_C_EventInputSourceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterGages.CenterGages_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCenterGages_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterGages.CenterGages_C.Construct");

	UCenterGages_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterGages.CenterGages_C.EventInputRebindSucceeded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  ActionToRebind                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText*                  NewKeyName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCenterGages_C::EventInputRebindSucceeded(struct FName* ActionToRebind, struct FText* NewKeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterGages.CenterGages_C.EventInputRebindSucceeded");

	UCenterGages_C_EventInputRebindSucceeded_Params params;
	params.ActionToRebind = ActionToRebind;
	params.NewKeyName = NewKeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterGages.CenterGages_C.EventInputResetToDefault
// (Event, Public, BlueprintEvent)

void UCenterGages_C::EventInputResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterGages.CenterGages_C.EventInputResetToDefault");

	UCenterGages_C_EventInputResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CenterGages.CenterGages_C.ExecuteUbergraph_CenterGages
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCenterGages_C::ExecuteUbergraph_CenterGages(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CenterGages.CenterGages_C.ExecuteUbergraph_CenterGages");

	UCenterGages_C_ExecuteUbergraph_CenterGages_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
