// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinCraftingComponentBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventLocalCraftingStart
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftingComponentBP_C::EventLocalCraftingStart(EDarwinItemTypeEnum* Type, class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventLocalCraftingStart");

	UDarwinCraftingComponentBP_C_EventLocalCraftingStart_Params params;
	params.Type = Type;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventLocalCraftingEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftingComponentBP_C::EventLocalCraftingEnd(EDarwinItemTypeEnum* Type, class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventLocalCraftingEnd");

	UDarwinCraftingComponentBP_C_EventLocalCraftingEnd_Params params;
	params.Type = Type;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventLocalCraftingSuccess
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftingComponentBP_C::EventLocalCraftingSuccess(EDarwinItemTypeEnum* Type, class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventLocalCraftingSuccess");

	UDarwinCraftingComponentBP_C_EventLocalCraftingSuccess_Params params;
	params.Type = Type;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventLocalCraftingFail
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftingComponentBP_C::EventLocalCraftingFail(EDarwinItemTypeEnum* Type, class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventLocalCraftingFail");

	UDarwinCraftingComponentBP_C_EventLocalCraftingFail_Params params;
	params.Type = Type;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventSimulatedCraftingStart
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftingComponentBP_C::EventSimulatedCraftingStart(EDarwinItemTypeEnum* Type, class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventSimulatedCraftingStart");

	UDarwinCraftingComponentBP_C_EventSimulatedCraftingStart_Params params;
	params.Type = Type;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventSimulatedCraftingEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftingComponentBP_C::EventSimulatedCraftingEnd(EDarwinItemTypeEnum* Type, class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventSimulatedCraftingEnd");

	UDarwinCraftingComponentBP_C_EventSimulatedCraftingEnd_Params params;
	params.Type = Type;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventSimulatedCraftingSuccess
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftingComponentBP_C::EventSimulatedCraftingSuccess(EDarwinItemTypeEnum* Type, class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventSimulatedCraftingSuccess");

	UDarwinCraftingComponentBP_C_EventSimulatedCraftingSuccess_Params params;
	params.Type = Type;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventSimulatedCraftingFail
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ADarwinCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftingComponentBP_C::EventSimulatedCraftingFail(EDarwinItemTypeEnum* Type, class ADarwinCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.EventSimulatedCraftingFail");

	UDarwinCraftingComponentBP_C_EventSimulatedCraftingFail_Params params;
	params.Type = Type;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.ExecuteUbergraph_DarwinCraftingComponentBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinCraftingComponentBP_C::ExecuteUbergraph_DarwinCraftingComponentBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinCraftingComponentBP.DarwinCraftingComponentBP_C.ExecuteUbergraph_DarwinCraftingComponentBP");

	UDarwinCraftingComponentBP_C_ExecuteUbergraph_DarwinCraftingComponentBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
