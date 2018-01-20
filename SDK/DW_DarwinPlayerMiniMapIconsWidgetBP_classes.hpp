#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinPlayerMiniMapIconsWidgetBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C
// 0x001C (0x09C4 - 0x09A8)
class UDarwinPlayerMiniMapIconsWidgetBP_C : public UDarwinCharacterWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09A8(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      AllyIcon;                                                 // 0x09B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      PlayerIcon;                                               // 0x09B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                allyID;                                                   // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DarwinPlayerMiniMapIconsWidgetBP.DarwinPlayerMiniMapIconsWidgetBP_C");
		return ptr;
	}


	void EventUpdateCharacterLocation(struct FVector2D* Loc, float* Yaw);
	void EventUpdateAllianceLocation(struct FVector2D* Loc, struct FVector2D* worldLoc, float* Yaw, bool* bAllyIsDead);
	void EventAllianceStart(int* allyID);
	void EventAllianceEnd(int* allyID);
	void EventDeathNotification(EDarwinDamageTypeEnum* Type, int* nbPlayersLeft, int* attackerUniqueID, int* victimUniqueID, bool* bFirstBlood);
	void ExecuteUbergraph_DarwinPlayerMiniMapIconsWidgetBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
