#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.EyewearCalibrationProfileManager
struct EyewearCalibrationProfileManager_t846303360;
// Vuforia.EyewearUserCalibrator
struct EyewearUserCalibrator_t945107814;

#include "Vuforia_UnityExtensions_Vuforia_EyewearDevice390522832.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.PlayModeEyewearDevice
struct  PlayModeEyewearDevice_t2622852633  : public EyewearDevice_t390522832
{
public:
	// Vuforia.EyewearCalibrationProfileManager Vuforia.PlayModeEyewearDevice::mProfileManager
	EyewearCalibrationProfileManager_t846303360 * ___mProfileManager_1;
	// Vuforia.EyewearUserCalibrator Vuforia.PlayModeEyewearDevice::mCalibrator
	EyewearUserCalibrator_t945107814 * ___mCalibrator_2;
	// System.Boolean Vuforia.PlayModeEyewearDevice::mDummyPredictiveTracking
	bool ___mDummyPredictiveTracking_3;

public:
	inline static int32_t get_offset_of_mProfileManager_1() { return static_cast<int32_t>(offsetof(PlayModeEyewearDevice_t2622852633, ___mProfileManager_1)); }
	inline EyewearCalibrationProfileManager_t846303360 * get_mProfileManager_1() const { return ___mProfileManager_1; }
	inline EyewearCalibrationProfileManager_t846303360 ** get_address_of_mProfileManager_1() { return &___mProfileManager_1; }
	inline void set_mProfileManager_1(EyewearCalibrationProfileManager_t846303360 * value)
	{
		___mProfileManager_1 = value;
		Il2CppCodeGenWriteBarrier(&___mProfileManager_1, value);
	}

	inline static int32_t get_offset_of_mCalibrator_2() { return static_cast<int32_t>(offsetof(PlayModeEyewearDevice_t2622852633, ___mCalibrator_2)); }
	inline EyewearUserCalibrator_t945107814 * get_mCalibrator_2() const { return ___mCalibrator_2; }
	inline EyewearUserCalibrator_t945107814 ** get_address_of_mCalibrator_2() { return &___mCalibrator_2; }
	inline void set_mCalibrator_2(EyewearUserCalibrator_t945107814 * value)
	{
		___mCalibrator_2 = value;
		Il2CppCodeGenWriteBarrier(&___mCalibrator_2, value);
	}

	inline static int32_t get_offset_of_mDummyPredictiveTracking_3() { return static_cast<int32_t>(offsetof(PlayModeEyewearDevice_t2622852633, ___mDummyPredictiveTracking_3)); }
	inline bool get_mDummyPredictiveTracking_3() const { return ___mDummyPredictiveTracking_3; }
	inline bool* get_address_of_mDummyPredictiveTracking_3() { return &___mDummyPredictiveTracking_3; }
	inline void set_mDummyPredictiveTracking_3(bool value)
	{
		___mDummyPredictiveTracking_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
