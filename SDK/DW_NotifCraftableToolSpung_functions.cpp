// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifCraftableToolSpung_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NotifCraftableToolSpung.NotifCraftableToolSpung_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            attackerID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            victimID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDarwinItemTypeEnum            ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifCraftableToolSpung_C::Initialize(int attackerID, int victimID, EDarwinItemTypeEnum ItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifCraftableToolSpung.NotifCraftableToolSpung_C.Initialize");

	UNotifCraftableToolSpung_C_Initialize_Params params;
	params.attackerID = attackerID;
	params.victimID = victimID;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifCraftableToolSpung.NotifCraftableToolSpung_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNotifCraftableToolSpung_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifCraftableToolSpung.NotifCraftableToolSpung_C.Construct");

	UNotifCraftableToolSpung_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NotifCraftableToolSpung.NotifCraftableToolSpung_C.ExecuteUbergraph_NotifCraftableToolSpung
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNotifCraftableToolSpung_C::ExecuteUbergraph_NotifCraftableToolSpung(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NotifCraftableToolSpung.NotifCraftableToolSpung_C.ExecuteUbergraph_NotifCraftableToolSpung");

	UNotifCraftableToolSpung_C_ExecuteUbergraph_NotifCraftableToolSpung_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
