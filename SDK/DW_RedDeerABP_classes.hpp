#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_RedDeerABP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass RedDeerABP.RedDeerABP_C
// 0x0496 (0x0856 - 0x03C0)
class URedDeerABP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_20C7AAC2472DA335C069D0B7F0E81B22;      // 0x03C8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_676D06FF491D6AF685AE169FDC7DCD51;// 0x0410(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7263FF38492C9FF2AB8237A5453FC037;// 0x0538(0x0128)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_70965B264282286EB7A9339117EB796F;// 0x0660(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A0FFA4BF4FCB5541A17470B0DC32FC23;// 0x0730(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D0BDFD604B32361CE1325F98EDC33C1D;// 0x0778(0x00D8)
	float                                              MovementBlend;                                            // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFalling;                                                // 0x0854(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isDead;                                                   // 0x0855(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RedDeerABP.RedDeerABP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_RedDeerABP_AnimGraphNode_BlendListByBool_70965B264282286EB7A9339117EB796F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RedDeerABP_AnimGraphNode_BlendSpacePlayer_7263FF38492C9FF2AB8237A5453FC037();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_RedDeerABP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
