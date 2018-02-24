// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_BP_LootDoor01_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LootDoor01.BP_LootDoor01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LootDoor01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDoor01.BP_LootDoor01_C.UserConstructionScript");

	ABP_LootDoor01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootDoor01.BP_LootDoor01_C.LootDoorOpen01
// (BlueprintCallable, BlueprintEvent)

void ABP_LootDoor01_C::LootDoorOpen01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDoor01.BP_LootDoor01_C.LootDoorOpen01");

	ABP_LootDoor01_C_LootDoorOpen01_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LootDoor01.BP_LootDoor01_C.ExecuteUbergraph_BP_LootDoor01
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LootDoor01_C::ExecuteUbergraph_BP_LootDoor01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootDoor01.BP_LootDoor01_C.ExecuteUbergraph_BP_LootDoor01");

	ABP_LootDoor01_C_ExecuteUbergraph_BP_LootDoor01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
