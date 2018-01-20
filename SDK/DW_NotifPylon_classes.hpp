#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_NotifPylon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass NotifPylon.NotifPylon_C
// 0x0008 (0x0508 - 0x0500)
class UNotifPylon_C : public UDarwinUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NotifPylon.NotifPylon_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_NotifPylon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
