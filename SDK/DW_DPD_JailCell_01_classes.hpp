#pragma once

// Darwin Project (open_beta_2) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_DPD_JailCell_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DPD_JailCell_01.DPD_JailCell_01_C
// 0x0010 (0x0380 - 0x0370)
class ADPD_JailCell_01_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0370(0x0008) (Transient, DuplicateTransient)
	class ACameraActor*                                CAM_Title_ExecuteUbergraph_DPD_JailCell_01_RefProperty;   // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DPD_JailCell_01.DPD_JailCell_01_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void SetTitleCam();
	void ExecuteUbergraph_DPD_JailCell_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
