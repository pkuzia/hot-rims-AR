#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_ConfigUI_UIPresetsEnum3177121928.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ConfigUI
struct  ConfigUI_t3779471734  : public MonoBehaviour_t667441552
{
public:
	// ConfigUI/UIPresetsEnum ConfigUI::UIPresets
	int32_t ___UIPresets_2;
	// UnityEngine.UI.Text ConfigUI::SamplesTitle
	Text_t9039225 * ___SamplesTitle_3;
	// UnityEngine.GameObject ConfigUI::ExtendedTracking
	GameObject_t3674682005 * ___ExtendedTracking_4;
	// UnityEngine.GameObject ConfigUI::Autofocus
	GameObject_t3674682005 * ___Autofocus_5;
	// UnityEngine.GameObject ConfigUI::Flash
	GameObject_t3674682005 * ___Flash_6;

public:
	inline static int32_t get_offset_of_UIPresets_2() { return static_cast<int32_t>(offsetof(ConfigUI_t3779471734, ___UIPresets_2)); }
	inline int32_t get_UIPresets_2() const { return ___UIPresets_2; }
	inline int32_t* get_address_of_UIPresets_2() { return &___UIPresets_2; }
	inline void set_UIPresets_2(int32_t value)
	{
		___UIPresets_2 = value;
	}

	inline static int32_t get_offset_of_SamplesTitle_3() { return static_cast<int32_t>(offsetof(ConfigUI_t3779471734, ___SamplesTitle_3)); }
	inline Text_t9039225 * get_SamplesTitle_3() const { return ___SamplesTitle_3; }
	inline Text_t9039225 ** get_address_of_SamplesTitle_3() { return &___SamplesTitle_3; }
	inline void set_SamplesTitle_3(Text_t9039225 * value)
	{
		___SamplesTitle_3 = value;
		Il2CppCodeGenWriteBarrier(&___SamplesTitle_3, value);
	}

	inline static int32_t get_offset_of_ExtendedTracking_4() { return static_cast<int32_t>(offsetof(ConfigUI_t3779471734, ___ExtendedTracking_4)); }
	inline GameObject_t3674682005 * get_ExtendedTracking_4() const { return ___ExtendedTracking_4; }
	inline GameObject_t3674682005 ** get_address_of_ExtendedTracking_4() { return &___ExtendedTracking_4; }
	inline void set_ExtendedTracking_4(GameObject_t3674682005 * value)
	{
		___ExtendedTracking_4 = value;
		Il2CppCodeGenWriteBarrier(&___ExtendedTracking_4, value);
	}

	inline static int32_t get_offset_of_Autofocus_5() { return static_cast<int32_t>(offsetof(ConfigUI_t3779471734, ___Autofocus_5)); }
	inline GameObject_t3674682005 * get_Autofocus_5() const { return ___Autofocus_5; }
	inline GameObject_t3674682005 ** get_address_of_Autofocus_5() { return &___Autofocus_5; }
	inline void set_Autofocus_5(GameObject_t3674682005 * value)
	{
		___Autofocus_5 = value;
		Il2CppCodeGenWriteBarrier(&___Autofocus_5, value);
	}

	inline static int32_t get_offset_of_Flash_6() { return static_cast<int32_t>(offsetof(ConfigUI_t3779471734, ___Flash_6)); }
	inline GameObject_t3674682005 * get_Flash_6() const { return ___Flash_6; }
	inline GameObject_t3674682005 ** get_address_of_Flash_6() { return &___Flash_6; }
	inline void set_Flash_6(GameObject_t3674682005 * value)
	{
		___Flash_6 = value;
		Il2CppCodeGenWriteBarrier(&___Flash_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
