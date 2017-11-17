#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CameraSettings
struct CameraSettings_t3515792008;
// TrackableSettings
struct TrackableSettings_t3516027976;
// MenuAnimator
struct MenuAnimator_t2649958790;
// ModelController
struct ModelController_t2545537925;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuOptions
struct  MenuOptions_t1909700639  : public MonoBehaviour_t667441552
{
public:
	// CameraSettings MenuOptions::mCamSettings
	CameraSettings_t3515792008 * ___mCamSettings_2;
	// TrackableSettings MenuOptions::mTrackableSettings
	TrackableSettings_t3516027976 * ___mTrackableSettings_3;
	// MenuAnimator MenuOptions::mMenuAnim
	MenuAnimator_t2649958790 * ___mMenuAnim_4;
	// ModelController MenuOptions::mModelController
	ModelController_t2545537925 * ___mModelController_5;

public:
	inline static int32_t get_offset_of_mCamSettings_2() { return static_cast<int32_t>(offsetof(MenuOptions_t1909700639, ___mCamSettings_2)); }
	inline CameraSettings_t3515792008 * get_mCamSettings_2() const { return ___mCamSettings_2; }
	inline CameraSettings_t3515792008 ** get_address_of_mCamSettings_2() { return &___mCamSettings_2; }
	inline void set_mCamSettings_2(CameraSettings_t3515792008 * value)
	{
		___mCamSettings_2 = value;
		Il2CppCodeGenWriteBarrier(&___mCamSettings_2, value);
	}

	inline static int32_t get_offset_of_mTrackableSettings_3() { return static_cast<int32_t>(offsetof(MenuOptions_t1909700639, ___mTrackableSettings_3)); }
	inline TrackableSettings_t3516027976 * get_mTrackableSettings_3() const { return ___mTrackableSettings_3; }
	inline TrackableSettings_t3516027976 ** get_address_of_mTrackableSettings_3() { return &___mTrackableSettings_3; }
	inline void set_mTrackableSettings_3(TrackableSettings_t3516027976 * value)
	{
		___mTrackableSettings_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableSettings_3, value);
	}

	inline static int32_t get_offset_of_mMenuAnim_4() { return static_cast<int32_t>(offsetof(MenuOptions_t1909700639, ___mMenuAnim_4)); }
	inline MenuAnimator_t2649958790 * get_mMenuAnim_4() const { return ___mMenuAnim_4; }
	inline MenuAnimator_t2649958790 ** get_address_of_mMenuAnim_4() { return &___mMenuAnim_4; }
	inline void set_mMenuAnim_4(MenuAnimator_t2649958790 * value)
	{
		___mMenuAnim_4 = value;
		Il2CppCodeGenWriteBarrier(&___mMenuAnim_4, value);
	}

	inline static int32_t get_offset_of_mModelController_5() { return static_cast<int32_t>(offsetof(MenuOptions_t1909700639, ___mModelController_5)); }
	inline ModelController_t2545537925 * get_mModelController_5() const { return ___mModelController_5; }
	inline ModelController_t2545537925 ** get_address_of_mModelController_5() { return &___mModelController_5; }
	inline void set_mModelController_5(ModelController_t2545537925 * value)
	{
		___mModelController_5 = value;
		Il2CppCodeGenWriteBarrier(&___mModelController_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
