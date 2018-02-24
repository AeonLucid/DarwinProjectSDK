#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinPlayerNumber_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DarwinPlayerNumber.DarwinPlayerNumber_C
// 0x0014 (0x0544 - 0x0530)
class UDarwinPlayerNumber_C : public UDarwinDroneWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0530(0x0008) (Transient, DuplicateTransient)
	class UTextBlock*                                  playerIndex;                                              // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                DarwinUniqueID;                                           // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DarwinPlayerNumber.DarwinPlayerNumber_C");
		return ptr;
	}


	void Initialize(int playerID);
	void EventUpdatePlayerGradient(struct FDarwinColorGradient* payerGradient, int* playerID);
	void EventUpdatePlayerIndex(int* playerID, int* playerIndex);
	void ExecuteUbergraph_DarwinPlayerNumber(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
