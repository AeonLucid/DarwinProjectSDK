#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinMiniMapIconContainerWidgetBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C
// 0x0018 (0x09E0 - 0x09C8)
class UDarwinMiniMapIconContainerWidgetBP_C : public UDarwinCharacterWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09C8(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_1;                                                  // 0x09D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    Overlay_1;                                                // 0x09D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DarwinMiniMapIconContainerWidgetBP.DarwinMiniMapIconContainerWidgetBP_C");
		return ptr;
	}


	void ToMapCoord(const struct FVector2D& InLoc, struct FVector2D* outLoc);
	void EventClueStart(int* targetCharacterID, EDarwinItemTypeEnum* clueType);
	void EventManHuntStart(int* targetCharacterID, struct FVector2D* Loc);
	void EventFriendlyCraftableToolMinimapStart(struct FVector2D* Loc, struct FVector* worldLoc, class ADarwinCraftableTool** tool, bool* bAllyTool);
	void EventGameStartsNow();
	void EventWardPing(struct FVector2D* Loc, struct FVector* worldLoc);
	void EventPredatorPing(int* targetCharacterID, struct FVector2D* Loc, struct FVector* worldLoc);
	void EventPredatorPulse(struct FVector2D* Loc, struct FVector* worldLoc);
	void EventStartCampFire(class ADarwinCampFire** campFire, struct FVector2D* Loc);
	void EventPoopStart(int* targetDeerID);
	void ExecuteUbergraph_DarwinMiniMapIconContainerWidgetBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
