#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_GameLogBoxCenter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass GameLogBoxCenter.GameLogBoxCenter_C
// 0x001C (0x09E4 - 0x09C8)
class UGameLogBoxCenter_C : public UDarwinCharacterWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09C8(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                NotifBox;                                                 // 0x09D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                MaxNumberOfNotif;                                         // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UpdatedDmg;                                               // 0x09DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x09DD(0x0003) MISSED OFFSET
	int                                                allyID;                                                   // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameLogBoxCenter.GameLogBoxCenter_C");
		return ptr;
	}


	void EventDamageNotification(EDarwinDamageTypeEnum* Type, float* Damage, int* attackerUniqueID, int* victimUniqueID);
	void EventDeathNotification(EDarwinDamageTypeEnum* Type, int* nbPlayersLeft, int* attackerUniqueID, int* victimUniqueID, bool* bFirstBlood);
	void EventArmorBreakNotification(EDarwinDamageTypeEnum* Type, int* attackerUniqueID, int* victimUniqueID);
	void EventPlayerAllianceFormed(int* firstPlayerID, int* secondPlayerID, bool* bBloodPact);
	void EventPlayerAllianceBroken(int* firstPlayerID, int* secondPlayerID);
	void EventPylonJustActivated(int* Index);
	void EventNewClueInfo(struct FString* Time, struct FString* playerName, EDarwinItemTypeEnum* clueType);
	void Construct();
	void Trim();
	void EventZoneNowForbidden(struct FString* zoneName);
	void EventZoneSoonForbidden(struct FString* zoneName);
	void EventNuclearBlastCountdownInitiated(struct FString* zoneName);
	void EventNuclearBlastStarted(struct FString* zoneName);
	void EventCraftableToolSprungNotification(EDarwinItemTypeEnum* ItemType, int* attackerUniqueID, int* victimUniqueID);
	void EventFirstBlood(int* attackerID, int* victimID, EDarwinDamageTypeEnum* dmgType);
	void EventBloodPactDeadNotification(EDarwinDamageTypeEnum* Type, int* attackerUniqueID, int* victimUniqueID);
	void EventBloodPactReviveNotification(int* reviverUniqueID, int* victimUniqueID);
	void EventBloodPactDuoEleminated(int* player1ID, int* player2ID);
	void ExecuteUbergraph_GameLogBoxCenter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
