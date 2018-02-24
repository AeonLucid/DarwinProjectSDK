// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinFootprintComponentBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DarwinFootprintComponentBP.DarwinFootprintComponentBP_C.EventSimulatedFootStepSound
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       CharacterOwner                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFootprintTypeEnum*            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinFootprintComponentBP_C::EventSimulatedFootStepSound(class ADarwinCharacter** CharacterOwner, EFootprintTypeEnum* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFootprintComponentBP.DarwinFootprintComponentBP_C.EventSimulatedFootStepSound");

	UDarwinFootprintComponentBP_C_EventSimulatedFootStepSound_Params params;
	params.CharacterOwner = CharacterOwner;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFootprintComponentBP.DarwinFootprintComponentBP_C.EventLocalFootStepSound
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCharacter**       CharacterOwner                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFootprintTypeEnum*            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinFootprintComponentBP_C::EventLocalFootStepSound(class ADarwinCharacter** CharacterOwner, EFootprintTypeEnum* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFootprintComponentBP.DarwinFootprintComponentBP_C.EventLocalFootStepSound");

	UDarwinFootprintComponentBP_C_EventLocalFootStepSound_Params params;
	params.CharacterOwner = CharacterOwner;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DarwinFootprintComponentBP.DarwinFootprintComponentBP_C.ExecuteUbergraph_DarwinFootprintComponentBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDarwinFootprintComponentBP_C::ExecuteUbergraph_DarwinFootprintComponentBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DarwinFootprintComponentBP.DarwinFootprintComponentBP_C.ExecuteUbergraph_DarwinFootprintComponentBP");

	UDarwinFootprintComponentBP_C_ExecuteUbergraph_DarwinFootprintComponentBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
