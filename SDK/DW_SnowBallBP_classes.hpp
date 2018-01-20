#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_SnowBallBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SnowBallBP.SnowBallBP_C
// 0x0018 (0x0400 - 0x03E8)
class ASnowBallBP_C : public ADarwinGrenade
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SnowBallBP.SnowBallBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void EventGrenadeExplode(struct FVector* Loc);
	void EventReflectedByForcefield(struct FVector* Loc);
	void EventHitByAxe(struct FVector* Loc);
	void ExecuteUbergraph_SnowBallBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
