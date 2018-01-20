#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinGameStateBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinGameStateBP.DarwinGameStateBP_C
// 0x0068 (0x0860 - 0x07F8)
class ADarwinGameStateBP_C : public ADarwinGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07F8(0x0008) (Transient, DuplicateTransient)
	class UAkComponent*                                Ak_Gravity_Storm;                                         // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, int>                          EloScores;                                                // 0x0810(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinGameStateBP.DarwinGameStateBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void EventCheer();
	void EventBoo();
	void EventGravityStormStart();
	void EventGravityStormEnd();
	void EventGameStarted();
	void ExecuteUbergraph_DarwinGameStateBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
