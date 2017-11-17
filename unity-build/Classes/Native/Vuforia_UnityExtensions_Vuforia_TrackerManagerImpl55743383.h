#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ObjectTracker
struct ObjectTracker_t455954211;
// Vuforia.MarkerTracker
struct MarkerTracker_t4028259784;
// Vuforia.TextTracker
struct TextTracker_t3721656949;
// Vuforia.SmartTerrainTracker
struct SmartTerrainTracker_t2067565974;
// Vuforia.DeviceTracker
struct DeviceTracker_t2823650348;
// Vuforia.StateManager
struct StateManager_t3262709086;

#include "Vuforia_UnityExtensions_Vuforia_TrackerManager2355365335.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackerManagerImpl
struct  TrackerManagerImpl_t55743383  : public TrackerManager_t2355365335
{
public:
	// Vuforia.ObjectTracker Vuforia.TrackerManagerImpl::mObjectTracker
	ObjectTracker_t455954211 * ___mObjectTracker_1;
	// Vuforia.MarkerTracker Vuforia.TrackerManagerImpl::mMarkerTracker
	MarkerTracker_t4028259784 * ___mMarkerTracker_2;
	// Vuforia.TextTracker Vuforia.TrackerManagerImpl::mTextTracker
	TextTracker_t3721656949 * ___mTextTracker_3;
	// Vuforia.SmartTerrainTracker Vuforia.TrackerManagerImpl::mSmartTerrainTracker
	SmartTerrainTracker_t2067565974 * ___mSmartTerrainTracker_4;
	// Vuforia.DeviceTracker Vuforia.TrackerManagerImpl::mDeviceTracker
	DeviceTracker_t2823650348 * ___mDeviceTracker_5;
	// Vuforia.StateManager Vuforia.TrackerManagerImpl::mStateManager
	StateManager_t3262709086 * ___mStateManager_6;

public:
	inline static int32_t get_offset_of_mObjectTracker_1() { return static_cast<int32_t>(offsetof(TrackerManagerImpl_t55743383, ___mObjectTracker_1)); }
	inline ObjectTracker_t455954211 * get_mObjectTracker_1() const { return ___mObjectTracker_1; }
	inline ObjectTracker_t455954211 ** get_address_of_mObjectTracker_1() { return &___mObjectTracker_1; }
	inline void set_mObjectTracker_1(ObjectTracker_t455954211 * value)
	{
		___mObjectTracker_1 = value;
		Il2CppCodeGenWriteBarrier(&___mObjectTracker_1, value);
	}

	inline static int32_t get_offset_of_mMarkerTracker_2() { return static_cast<int32_t>(offsetof(TrackerManagerImpl_t55743383, ___mMarkerTracker_2)); }
	inline MarkerTracker_t4028259784 * get_mMarkerTracker_2() const { return ___mMarkerTracker_2; }
	inline MarkerTracker_t4028259784 ** get_address_of_mMarkerTracker_2() { return &___mMarkerTracker_2; }
	inline void set_mMarkerTracker_2(MarkerTracker_t4028259784 * value)
	{
		___mMarkerTracker_2 = value;
		Il2CppCodeGenWriteBarrier(&___mMarkerTracker_2, value);
	}

	inline static int32_t get_offset_of_mTextTracker_3() { return static_cast<int32_t>(offsetof(TrackerManagerImpl_t55743383, ___mTextTracker_3)); }
	inline TextTracker_t3721656949 * get_mTextTracker_3() const { return ___mTextTracker_3; }
	inline TextTracker_t3721656949 ** get_address_of_mTextTracker_3() { return &___mTextTracker_3; }
	inline void set_mTextTracker_3(TextTracker_t3721656949 * value)
	{
		___mTextTracker_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTextTracker_3, value);
	}

	inline static int32_t get_offset_of_mSmartTerrainTracker_4() { return static_cast<int32_t>(offsetof(TrackerManagerImpl_t55743383, ___mSmartTerrainTracker_4)); }
	inline SmartTerrainTracker_t2067565974 * get_mSmartTerrainTracker_4() const { return ___mSmartTerrainTracker_4; }
	inline SmartTerrainTracker_t2067565974 ** get_address_of_mSmartTerrainTracker_4() { return &___mSmartTerrainTracker_4; }
	inline void set_mSmartTerrainTracker_4(SmartTerrainTracker_t2067565974 * value)
	{
		___mSmartTerrainTracker_4 = value;
		Il2CppCodeGenWriteBarrier(&___mSmartTerrainTracker_4, value);
	}

	inline static int32_t get_offset_of_mDeviceTracker_5() { return static_cast<int32_t>(offsetof(TrackerManagerImpl_t55743383, ___mDeviceTracker_5)); }
	inline DeviceTracker_t2823650348 * get_mDeviceTracker_5() const { return ___mDeviceTracker_5; }
	inline DeviceTracker_t2823650348 ** get_address_of_mDeviceTracker_5() { return &___mDeviceTracker_5; }
	inline void set_mDeviceTracker_5(DeviceTracker_t2823650348 * value)
	{
		___mDeviceTracker_5 = value;
		Il2CppCodeGenWriteBarrier(&___mDeviceTracker_5, value);
	}

	inline static int32_t get_offset_of_mStateManager_6() { return static_cast<int32_t>(offsetof(TrackerManagerImpl_t55743383, ___mStateManager_6)); }
	inline StateManager_t3262709086 * get_mStateManager_6() const { return ___mStateManager_6; }
	inline StateManager_t3262709086 ** get_address_of_mStateManager_6() { return &___mStateManager_6; }
	inline void set_mStateManager_6(StateManager_t3262709086 * value)
	{
		___mStateManager_6 = value;
		Il2CppCodeGenWriteBarrier(&___mStateManager_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
