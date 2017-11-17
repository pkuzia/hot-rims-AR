#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.RawImage
struct RawImage_t821930207;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SamplesLoadingScreen
struct  SamplesLoadingScreen_t1647700831  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean SamplesLoadingScreen::mChangeLevel
	bool ___mChangeLevel_2;
	// UnityEngine.UI.RawImage SamplesLoadingScreen::mUISpinner
	RawImage_t821930207 * ___mUISpinner_3;

public:
	inline static int32_t get_offset_of_mChangeLevel_2() { return static_cast<int32_t>(offsetof(SamplesLoadingScreen_t1647700831, ___mChangeLevel_2)); }
	inline bool get_mChangeLevel_2() const { return ___mChangeLevel_2; }
	inline bool* get_address_of_mChangeLevel_2() { return &___mChangeLevel_2; }
	inline void set_mChangeLevel_2(bool value)
	{
		___mChangeLevel_2 = value;
	}

	inline static int32_t get_offset_of_mUISpinner_3() { return static_cast<int32_t>(offsetof(SamplesLoadingScreen_t1647700831, ___mUISpinner_3)); }
	inline RawImage_t821930207 * get_mUISpinner_3() const { return ___mUISpinner_3; }
	inline RawImage_t821930207 ** get_address_of_mUISpinner_3() { return &___mUISpinner_3; }
	inline void set_mUISpinner_3(RawImage_t821930207 * value)
	{
		___mUISpinner_3 = value;
		Il2CppCodeGenWriteBarrier(&___mUISpinner_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
