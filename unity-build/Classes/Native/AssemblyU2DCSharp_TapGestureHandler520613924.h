#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MenuAnimator
struct MenuAnimator_t2649958790;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TapGestureHandler
struct  TapGestureHandler_t520613924  : public MonoBehaviour_t667441552
{
public:
	// System.Single TapGestureHandler::mTimeSinceLastTap
	float ___mTimeSinceLastTap_3;
	// MenuAnimator TapGestureHandler::mMenuAnim
	MenuAnimator_t2649958790 * ___mMenuAnim_4;
	// System.Int32 TapGestureHandler::mTapCount
	int32_t ___mTapCount_5;

public:
	inline static int32_t get_offset_of_mTimeSinceLastTap_3() { return static_cast<int32_t>(offsetof(TapGestureHandler_t520613924, ___mTimeSinceLastTap_3)); }
	inline float get_mTimeSinceLastTap_3() const { return ___mTimeSinceLastTap_3; }
	inline float* get_address_of_mTimeSinceLastTap_3() { return &___mTimeSinceLastTap_3; }
	inline void set_mTimeSinceLastTap_3(float value)
	{
		___mTimeSinceLastTap_3 = value;
	}

	inline static int32_t get_offset_of_mMenuAnim_4() { return static_cast<int32_t>(offsetof(TapGestureHandler_t520613924, ___mMenuAnim_4)); }
	inline MenuAnimator_t2649958790 * get_mMenuAnim_4() const { return ___mMenuAnim_4; }
	inline MenuAnimator_t2649958790 ** get_address_of_mMenuAnim_4() { return &___mMenuAnim_4; }
	inline void set_mMenuAnim_4(MenuAnimator_t2649958790 * value)
	{
		___mMenuAnim_4 = value;
		Il2CppCodeGenWriteBarrier(&___mMenuAnim_4, value);
	}

	inline static int32_t get_offset_of_mTapCount_5() { return static_cast<int32_t>(offsetof(TapGestureHandler_t520613924, ___mTapCount_5)); }
	inline int32_t get_mTapCount_5() const { return ___mTapCount_5; }
	inline int32_t* get_address_of_mTapCount_5() { return &___mTapCount_5; }
	inline void set_mTapCount_5(int32_t value)
	{
		___mTapCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
