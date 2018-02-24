// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PassivePowers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassivePowers.PassivePowers_C.EventUpdateWeaponType
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           weaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassivePowers_C::EventUpdateWeaponType(EDarwinItemTypeEnum* weaponType, int* MaxLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassivePowers.PassivePowers_C.EventUpdateWeaponType");

	UPassivePowers_C_EventUpdateWeaponType_Params params;
	params.weaponType = weaponType;
	params.MaxLevel = MaxLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassivePowers.PassivePowers_C.EventUpdateBootType
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           bootType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassivePowers_C::EventUpdateBootType(EDarwinItemTypeEnum* bootType, int* MaxLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassivePowers.PassivePowers_C.EventUpdateBootType");

	UPassivePowers_C_EventUpdateBootType_Params params;
	params.bootType = bootType;
	params.MaxLevel = MaxLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassivePowers.PassivePowers_C.EventUpdateCoatType
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           coatType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassivePowers_C::EventUpdateCoatType(EDarwinItemTypeEnum* coatType, int* MaxLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassivePowers.PassivePowers_C.EventUpdateCoatType");

	UPassivePowers_C_EventUpdateCoatType_Params params;
	params.coatType = coatType;
	params.MaxLevel = MaxLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassivePowers.PassivePowers_C.EventUpdateWeaponLevel
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           weaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassivePowers_C::EventUpdateWeaponLevel(EDarwinItemTypeEnum* weaponType, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassivePowers.PassivePowers_C.EventUpdateWeaponLevel");

	UPassivePowers_C_EventUpdateWeaponLevel_Params params;
	params.weaponType = weaponType;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassivePowers.PassivePowers_C.EventUpdateBootLevel
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           bootType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassivePowers_C::EventUpdateBootLevel(EDarwinItemTypeEnum* bootType, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassivePowers.PassivePowers_C.EventUpdateBootLevel");

	UPassivePowers_C_EventUpdateBootLevel_Params params;
	params.bootType = bootType;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassivePowers.PassivePowers_C.EventUpdateCoatLevel
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           coatType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassivePowers_C::EventUpdateCoatLevel(EDarwinItemTypeEnum* coatType, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassivePowers.PassivePowers_C.EventUpdateCoatLevel");

	UPassivePowers_C_EventUpdateCoatLevel_Params params;
	params.coatType = coatType;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassivePowers.PassivePowers_C.EventUpdateArmorLevel
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassivePowers_C::EventUpdateArmorLevel(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassivePowers.PassivePowers_C.EventUpdateArmorLevel");

	UPassivePowers_C_EventUpdateArmorLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassivePowers.PassivePowers_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPassivePowers_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassivePowers.PassivePowers_C.Construct");

	UPassivePowers_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassivePowers.PassivePowers_C.ExecuteUbergraph_PassivePowers
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassivePowers_C::ExecuteUbergraph_PassivePowers(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassivePowers.PassivePowers_C.ExecuteUbergraph_PassivePowers");

	UPassivePowers_C_ExecuteUbergraph_PassivePowers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
