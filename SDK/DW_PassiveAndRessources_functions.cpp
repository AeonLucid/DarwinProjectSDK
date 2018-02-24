// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_PassiveAndRessources_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateNumberOfLeather
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           numberOfLeather                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncrement                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveAndRessources_C::EventUpdateNumberOfLeather(int* numberOfLeather, bool* bIncrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateNumberOfLeather");

	UPassiveAndRessources_C_EventUpdateNumberOfLeather_Params params;
	params.numberOfLeather = numberOfLeather;
	params.bIncrement = bIncrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateNumberOfElectronic
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           numberOfElectronic             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncrement                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveAndRessources_C::EventUpdateNumberOfElectronic(int* numberOfElectronic, bool* bIncrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateNumberOfElectronic");

	UPassiveAndRessources_C_EventUpdateNumberOfElectronic_Params params;
	params.numberOfElectronic = numberOfElectronic;
	params.bIncrement = bIncrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateNumberOfWood
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           numberOfWood                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIncrement                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveAndRessources_C::EventUpdateNumberOfWood(int* numberOfWood, bool* bIncrement)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateNumberOfWood");

	UPassiveAndRessources_C_EventUpdateNumberOfWood_Params params;
	params.numberOfWood = numberOfWood;
	params.bIncrement = bIncrement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateBootLevel
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           bootType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveAndRessources_C::EventUpdateBootLevel(EDarwinItemTypeEnum* bootType, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateBootLevel");

	UPassiveAndRessources_C_EventUpdateBootLevel_Params params;
	params.bootType = bootType;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateBootType
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           bootType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveAndRessources_C::EventUpdateBootType(EDarwinItemTypeEnum* bootType, int* MaxLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateBootType");

	UPassiveAndRessources_C_EventUpdateBootType_Params params;
	params.bootType = bootType;
	params.MaxLevel = MaxLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateArmorLevel
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveAndRessources_C::EventUpdateArmorLevel(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateArmorLevel");

	UPassiveAndRessources_C_EventUpdateArmorLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateCoatLevel
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           coatType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveAndRessources_C::EventUpdateCoatLevel(EDarwinItemTypeEnum* coatType, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateCoatLevel");

	UPassiveAndRessources_C_EventUpdateCoatLevel_Params params;
	params.coatType = coatType;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateCoatType
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           coatType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveAndRessources_C::EventUpdateCoatType(EDarwinItemTypeEnum* coatType, int* MaxLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateCoatType");

	UPassiveAndRessources_C_EventUpdateCoatType_Params params;
	params.coatType = coatType;
	params.MaxLevel = MaxLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateWeaponLevel
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           weaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveAndRessources_C::EventUpdateWeaponLevel(EDarwinItemTypeEnum* weaponType, int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateWeaponLevel");

	UPassiveAndRessources_C_EventUpdateWeaponLevel_Params params;
	params.weaponType = weaponType;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateWeaponType
// (Event, Public, BlueprintEvent)
// Parameters:
// EDarwinItemTypeEnum*           weaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MaxLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveAndRessources_C::EventUpdateWeaponType(EDarwinItemTypeEnum* weaponType, int* MaxLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveAndRessources.PassiveAndRessources_C.EventUpdateWeaponType");

	UPassiveAndRessources_C_EventUpdateWeaponType_Params params;
	params.weaponType = weaponType;
	params.MaxLevel = MaxLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveAndRessources.PassiveAndRessources_C.ExecuteUbergraph_PassiveAndRessources
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveAndRessources_C::ExecuteUbergraph_PassiveAndRessources(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveAndRessources.PassiveAndRessources_C.ExecuteUbergraph_PassiveAndRessources");

	UPassiveAndRessources_C_ExecuteUbergraph_PassiveAndRessources_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
