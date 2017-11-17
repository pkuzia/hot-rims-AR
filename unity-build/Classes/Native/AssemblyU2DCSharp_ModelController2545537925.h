#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModelController
struct  ModelController_t2545537925  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ModelController::rimModels
	List_1_t747900261 * ___rimModels_2;
	// UnityEngine.GameObject ModelController::mUserDefinedTarget
	GameObject_t3674682005 * ___mUserDefinedTarget_3;
	// System.Boolean ModelController::animating
	bool ___animating_4;
	// UnityEngine.GameObject ModelController::mObject
	GameObject_t3674682005 * ___mObject_5;
	// System.String ModelController::mModelName
	String_t* ___mModelName_6;

public:
	inline static int32_t get_offset_of_rimModels_2() { return static_cast<int32_t>(offsetof(ModelController_t2545537925, ___rimModels_2)); }
	inline List_1_t747900261 * get_rimModels_2() const { return ___rimModels_2; }
	inline List_1_t747900261 ** get_address_of_rimModels_2() { return &___rimModels_2; }
	inline void set_rimModels_2(List_1_t747900261 * value)
	{
		___rimModels_2 = value;
		Il2CppCodeGenWriteBarrier(&___rimModels_2, value);
	}

	inline static int32_t get_offset_of_mUserDefinedTarget_3() { return static_cast<int32_t>(offsetof(ModelController_t2545537925, ___mUserDefinedTarget_3)); }
	inline GameObject_t3674682005 * get_mUserDefinedTarget_3() const { return ___mUserDefinedTarget_3; }
	inline GameObject_t3674682005 ** get_address_of_mUserDefinedTarget_3() { return &___mUserDefinedTarget_3; }
	inline void set_mUserDefinedTarget_3(GameObject_t3674682005 * value)
	{
		___mUserDefinedTarget_3 = value;
		Il2CppCodeGenWriteBarrier(&___mUserDefinedTarget_3, value);
	}

	inline static int32_t get_offset_of_animating_4() { return static_cast<int32_t>(offsetof(ModelController_t2545537925, ___animating_4)); }
	inline bool get_animating_4() const { return ___animating_4; }
	inline bool* get_address_of_animating_4() { return &___animating_4; }
	inline void set_animating_4(bool value)
	{
		___animating_4 = value;
	}

	inline static int32_t get_offset_of_mObject_5() { return static_cast<int32_t>(offsetof(ModelController_t2545537925, ___mObject_5)); }
	inline GameObject_t3674682005 * get_mObject_5() const { return ___mObject_5; }
	inline GameObject_t3674682005 ** get_address_of_mObject_5() { return &___mObject_5; }
	inline void set_mObject_5(GameObject_t3674682005 * value)
	{
		___mObject_5 = value;
		Il2CppCodeGenWriteBarrier(&___mObject_5, value);
	}

	inline static int32_t get_offset_of_mModelName_6() { return static_cast<int32_t>(offsetof(ModelController_t2545537925, ___mModelName_6)); }
	inline String_t* get_mModelName_6() const { return ___mModelName_6; }
	inline String_t** get_address_of_mModelName_6() { return &___mModelName_6; }
	inline void set_mModelName_6(String_t* value)
	{
		___mModelName_6 = value;
		Il2CppCodeGenWriteBarrier(&___mModelName_6, value);
	}
};

struct ModelController_t2545537925_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> ModelController::<>f__switch$map1
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map1_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_7() { return static_cast<int32_t>(offsetof(ModelController_t2545537925_StaticFields, ___U3CU3Ef__switchU24map1_7)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map1_7() const { return ___U3CU3Ef__switchU24map1_7; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map1_7() { return &___U3CU3Ef__switchU24map1_7; }
	inline void set_U3CU3Ef__switchU24map1_7(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map1_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
