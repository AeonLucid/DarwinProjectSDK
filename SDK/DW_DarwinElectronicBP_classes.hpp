#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinElectronicBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinElectronicBP.DarwinElectronicBP_C
// 0x0020 (0x0410 - 0x03F0)
class ADarwinElectronicBP_C : public ADarwinRessource
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             Audio;                                                    // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                Ak_Harvest_Electronic1;                                   // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinElectronicBP.DarwinElectronicBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void EventSimulatedHarvestStart(class ADarwinRessource** ressource);
	void EventLocalHarvestStart(class ADarwinCharacter** Character);
	void EventLocalHarvestFail(class ADarwinCharacter** Character);
	void EventSimulatedHarvestFail(class ADarwinRessource** ressource);
	void EventLocalHarvestSuccess(class ADarwinCharacter** Character);
	void EventSimulatedHarvestSuccess(class ADarwinRessource** ressource);
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ReceiveActorEndOverlap(class AActor** OtherActor);
	void ExecuteUbergraph_DarwinElectronicBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
