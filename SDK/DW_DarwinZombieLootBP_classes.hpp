#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinZombieLootBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinZombieLootBP.DarwinZombieLootBP_C
// 0x0018 (0x0418 - 0x0400)
class ADarwinZombieLootBP_C : public ADarwinLoot
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinZombieLootBP.DarwinZombieLootBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void EventSetLootableShape();
	void ExecuteUbergraph_DarwinZombieLootBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
