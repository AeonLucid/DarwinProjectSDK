// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MainMenuMap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainMenuMap.MainMenuMap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMainMenuMap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuMap.MainMenuMap_C.ReceiveBeginPlay");

	AMainMenuMap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenuMap.MainMenuMap_C.ExecuteUbergraph_MainMenuMap
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMainMenuMap_C::ExecuteUbergraph_MainMenuMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenuMap.MainMenuMap_C.ExecuteUbergraph_MainMenuMap");

	AMainMenuMap_C_ExecuteUbergraph_MainMenuMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
