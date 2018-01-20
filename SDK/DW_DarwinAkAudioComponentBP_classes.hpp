#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinAkAudioComponentBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C
// 0x0008 (0x0140 - 0x0138)
class UDarwinAkAudioComponentBP_C : public UDarwinAkAudioComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0138(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinAkAudioComponentBP.DarwinAkAudioComponentBP_C");
		return ptr;
	}


	void EventEnterMainMenu(class AActor** Actor);
	void EventLeaveMainMenu(class AActor** Actor);
	void EventEnterLobby(class AActor** Actor);
	void EventLeaveLobby(class AActor** Actor);
	void EventEnterGameWorld(class AActor** Actor);
	void EventLeaveGameWorld(class AActor** Actor);
	void EventLocalStormIntensity(class AActor** Pawn, float* Intensity);
	void EventEnterSuddenDeath(class AActor** Pawn);
	void EventLeaveSuddenDeath(class AActor** Pawn);
	void EventLocalTimeOfDay(class AActor** Pawn, float* Hours, float* Minutes, float* Seconds);
	void EventLocalStormSoundStart(class AActor** Pawn);
	void EventLoadSoundBank();
	void EventGameIsAboutToStart(class AActor** Pawn);
	void EventGameIsAboutToStartCountdown(int* secondsLeft, class AActor** Pawn);
	void CutOffLobbyMusic();
	void ExecuteUbergraph_DarwinAkAudioComponentBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
