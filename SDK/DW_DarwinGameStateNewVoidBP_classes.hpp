#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DarwinGameStateNewVoidBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DarwinGameStateNewVoidBP.DarwinGameStateNewVoidBP_C
// 0x0010 (0x0808 - 0x07F8)
class ADarwinGameStateNewVoidBP_C : public ADarwinGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07F8(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DarwinGameStateNewVoidBP.DarwinGameStateNewVoidBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void EventCheer();
	void EventBoo();
	void ExecuteUbergraph_DarwinGameStateNewVoidBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
