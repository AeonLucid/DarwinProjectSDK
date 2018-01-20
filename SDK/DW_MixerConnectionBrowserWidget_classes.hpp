#pragma once

// Darwin Project (0.11974) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "DW_MixerConnectionBrowserWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MixerConnectionBrowserWidget.MixerConnectionBrowserWidget_C
// 0x0010 (0x0598 - 0x0588)
class UMixerConnectionBrowserWidget_C : public UDarwinMainMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0588(0x0008) (Transient, DuplicateTransient)
	class UDarwinMixerConnectionBrowserWidget*         MixerConnectionBrowser;                                   // 0x0590(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MixerConnectionBrowserWidget.MixerConnectionBrowserWidget_C");
		return ptr;
	}


	void EventOpenMixerConnectionBrowser();
	void BndEvt__MixerConnectionBrowser_K2Node_ComponentBoundEvent_11_OnLoginFlowCompletedEvent__DelegateSignature();
	void EventMenuBack();
	void ExecuteUbergraph_MixerConnectionBrowserWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
