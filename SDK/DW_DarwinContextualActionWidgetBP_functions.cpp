// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinContextualActionWidgetBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.KeyBinding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDarwinContextualActionWidgetBP_C::KeyBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.KeyBinding");

	UDarwinContextualActionWidgetBP_C_KeyBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.set Gamepad Button
// (Public, BlueprintCallable, BlueprintEvent)

void UDarwinContextualActionWidgetBP_C::set_Gamepad_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.set Gamepad Button");

	UDarwinContextualActionWidgetBP_C_set_Gamepad_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.EventCanPickupStuff
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                playerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          bBoolPactRevive                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinContextualActionWidgetBP_C::EventCanPickupStuff(EDarwinItemTypeEnum* Type, struct FString* playerName, bool* bBoolPactRevive)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.EventCanPickupStuff");

	UDarwinContextualActionWidgetBP_C_EventCanPickupStuff_Params params;
	params.Type = Type;
	params.playerName = playerName;
	params.bBoolPactRevive = bBoolPactRevive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.EventTeleportAimStart
// (Event, Public, BlueprintEvent)

void UDarwinContextualActionWidgetBP_C::EventTeleportAimStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.EventTeleportAimStart");

	UDarwinContextualActionWidgetBP_C_EventTeleportAimStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.EventTeleportAimEnd
// (Event, Public, BlueprintEvent)

void UDarwinContextualActionWidgetBP_C::EventTeleportAimEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.EventTeleportAimEnd");

	UDarwinContextualActionWidgetBP_C_EventTeleportAimEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDarwinContextualActionWidgetBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.Construct");

	UDarwinContextualActionWidgetBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.EventInputRebindSucceeded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName*                  ActionToRebind                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText*                  NewKeyName                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDarwinContextualActionWidgetBP_C::EventInputRebindSucceeded(struct FName* ActionToRebind, struct FText* NewKeyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.EventInputRebindSucceeded");

	UDarwinContextualActionWidgetBP_C_EventInputRebindSucceeded_Params params;
	params.ActionToRebind = ActionToRebind;
	params.NewKeyName = NewKeyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.EventInputResetToDefault
// (Event, Public, BlueprintEvent)

void UDarwinContextualActionWidgetBP_C::EventInputResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.EventInputResetToDefault");

	UDarwinContextualActionWidgetBP_C_EventInputResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.ExecuteUbergraph_DarwinContextualActionWidgetBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinContextualActionWidgetBP_C::ExecuteUbergraph_DarwinContextualActionWidgetBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinContextualActionWidgetBP.DarwinContextualActionWidgetBP_C.ExecuteUbergraph_DarwinContextualActionWidgetBP");

	UDarwinContextualActionWidgetBP_C_ExecuteUbergraph_DarwinContextualActionWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
