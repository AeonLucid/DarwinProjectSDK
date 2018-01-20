// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_FriendlyCraftableToolIcon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FriendlyCraftableToolIcon.FriendlyCraftableToolIcon_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADarwinCraftableTool*    CraftableTool                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Loc                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           AllyTool                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendlyCraftableToolIcon_C::Initialize(class ADarwinCraftableTool* CraftableTool, const struct FVector2D& Loc, bool AllyTool)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendlyCraftableToolIcon.FriendlyCraftableToolIcon_C.Initialize");

	UFriendlyCraftableToolIcon_C_Initialize_Params params;
	params.CraftableTool = CraftableTool;
	params.Loc = Loc;
	params.AllyTool = AllyTool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendlyCraftableToolIcon.FriendlyCraftableToolIcon_C.ToMapCoord
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InLoc                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D               outLoc                         (Parm, OutParm, IsPlainOldData)

void UFriendlyCraftableToolIcon_C::ToMapCoord(const struct FVector2D& InLoc, struct FVector2D* outLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendlyCraftableToolIcon.FriendlyCraftableToolIcon_C.ToMapCoord");

	UFriendlyCraftableToolIcon_C_ToMapCoord_Params params;
	params.InLoc = InLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outLoc != nullptr)
		*outLoc = params.outLoc;
}


// Function FriendlyCraftableToolIcon.FriendlyCraftableToolIcon_C.EventFriendlyCraftableToolMinimapEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADarwinCraftableTool**   tool                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendlyCraftableToolIcon_C::EventFriendlyCraftableToolMinimapEnd(class ADarwinCraftableTool** tool)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendlyCraftableToolIcon.FriendlyCraftableToolIcon_C.EventFriendlyCraftableToolMinimapEnd");

	UFriendlyCraftableToolIcon_C_EventFriendlyCraftableToolMinimapEnd_Params params;
	params.tool = tool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendlyCraftableToolIcon.FriendlyCraftableToolIcon_C.ExecuteUbergraph_FriendlyCraftableToolIcon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendlyCraftableToolIcon_C::ExecuteUbergraph_FriendlyCraftableToolIcon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendlyCraftableToolIcon.FriendlyCraftableToolIcon_C.ExecuteUbergraph_FriendlyCraftableToolIcon");

	UFriendlyCraftableToolIcon_C_ExecuteUbergraph_FriendlyCraftableToolIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
