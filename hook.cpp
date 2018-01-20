#include "hook.h"
#include "PatternFinder.hpp"
#include <Windows.h>
#include <cstdint>

bool hook::initialize()
{
	if (!this->initialize_objects())
	{
		return false;
	}

	if (!this->initialize_names())
	{
		return false;
	}

	if (!this->initialize_gworld())
	{
		return false;
	}

	return true;
}

bool hook::initialize_objects() const
{
	const auto address = FindPattern(GetModuleHandleW(nullptr), reinterpret_cast<const unsigned char*>("\x48\x8D\x0D\x00\x00\x00\x00\xE8\x00\x00\x00\x00\x89\x43\x04\x48\x83\xC4\x20\x5B\xC3"), "xxx????x????xxxxxxxxx");
	if (address == -1)
	{
		return false;
	}

	const auto offset = *reinterpret_cast<uint32_t*>(address + 3);
	SDK::UObject::GObjects = reinterpret_cast<decltype(SDK::UObject::GObjects)>(address + 7 + offset);

	return true;
}

bool hook::initialize_names() const
{
	const auto address = FindPattern(GetModuleHandleW(nullptr), reinterpret_cast<const unsigned char*>("\x48\x8B\x35\x00\x00\x00\x00\x41\x0F\xB7\xC4\x4D\x8D\xA5\x00\x00\x00\x00\x49"), "xxx????xxxxxxx????x");
	if (address == -1)
	{
		return false;
	}

	const auto offset = *reinterpret_cast<uint32_t*>(address + 3);
	SDK::FName::GNames = reinterpret_cast<decltype(SDK::FName::GNames)>(*reinterpret_cast<uintptr_t*>(address + 7 + offset));

	return true;
}

bool hook::initialize_gworld()
{
	const auto address = FindPattern(GetModuleHandleW(nullptr), reinterpret_cast<const unsigned char*>("\x48\x8B\x05\x00\x00\x00\x00\x4C\x8B\xC3\x0F\x1F\x40\x00"), "xxx????xxxxxxx");
	if (address == -1)
	{
		return false;
	}

	const auto offset = *reinterpret_cast<uint32_t*>(address + 3);
	this->m_UWorld = reinterpret_cast<SDK::UWorld**>(address + 7 + offset);

	return true;
}
