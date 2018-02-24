#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinRedDeerBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinRedDeerBP.DarwinRedDeerBP_C
// 0x0030 (0x0820 - 0x07F0)
class ADarwinRedDeerBP_C : public ADarwinZombie
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07F0(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                Ak_Deer;                                                  // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Deer_Horns_01;                                         // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinRedDeerBP.DarwinRedDeerBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void EventSetAllRenderCustomDepth(bool* render);
	void EventSetAllCustomDepthStencilValue(int* Value);
	void EventHitByWeapon(class ADarwinZombie** zombie, struct FVector* Loc);
	void ExecuteUbergraph_DarwinRedDeerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
