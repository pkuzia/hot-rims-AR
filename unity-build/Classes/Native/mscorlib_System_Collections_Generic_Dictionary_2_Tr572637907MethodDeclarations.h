#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>
struct Transform_1_t572637907;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24030510692.h"
#include "Vuforia_UnityExtensions_Vuforia_WebCamProfile_Prof1961690790.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4165652396_gshared (Transform_1_t572637907 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m4165652396(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t572637907 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4165652396_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t4030510692  Transform_1_Invoke_m3224213324_gshared (Transform_1_t572637907 * __this, Il2CppObject * ___key0, ProfileData_t1961690790  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3224213324(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t4030510692  (*) (Transform_1_t572637907 *, Il2CppObject *, ProfileData_t1961690790 , const MethodInfo*))Transform_1_Invoke_m3224213324_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2621851383_gshared (Transform_1_t572637907 * __this, Il2CppObject * ___key0, ProfileData_t1961690790  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2621851383(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t572637907 *, Il2CppObject *, ProfileData_t1961690790 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2621851383_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t4030510692  Transform_1_EndInvoke_m1839579582_gshared (Transform_1_t572637907 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1839579582(__this, ___result0, method) ((  KeyValuePair_2_t4030510692  (*) (Transform_1_t572637907 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1839579582_gshared)(__this, ___result0, method)
