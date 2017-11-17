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

// Vuforia.CloudRecoImageTargetImpl
struct CloudRecoImageTargetImpl_t689169466;
// System.String
struct String_t;
// Vuforia.VirtualButton
struct VirtualButton_t704206407;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton>
struct IEnumerable_1_t4005119364;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageTargetType1650423632.h"
#include "Vuforia_UnityExtensions_Vuforia_RectangleData2265684451.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButton704206407.h"

// System.Void Vuforia.CloudRecoImageTargetImpl::.ctor(System.String,System.Int32,UnityEngine.Vector3)
extern "C"  void CloudRecoImageTargetImpl__ctor_m1881274190 (CloudRecoImageTargetImpl_t689169466 * __this, String_t* ___name0, int32_t ___id1, Vector3_t4282066566  ___size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetType Vuforia.CloudRecoImageTargetImpl::get_ImageTargetType()
extern "C"  int32_t CloudRecoImageTargetImpl_get_ImageTargetType_m1396872904 (CloudRecoImageTargetImpl_t689169466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.CloudRecoImageTargetImpl::GetSize()
extern "C"  Vector3_t4282066566  CloudRecoImageTargetImpl_GetSize_m1887844865 (CloudRecoImageTargetImpl_t689169466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CloudRecoImageTargetImpl::SetSize(UnityEngine.Vector3)
extern "C"  void CloudRecoImageTargetImpl_SetSize_m7268786 (CloudRecoImageTargetImpl_t689169466 * __this, Vector3_t4282066566  ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.CloudRecoImageTargetImpl::CreateVirtualButton(System.String,Vuforia.RectangleData)
extern "C"  VirtualButton_t704206407 * CloudRecoImageTargetImpl_CreateVirtualButton_m894540126 (CloudRecoImageTargetImpl_t689169466 * __this, String_t* ___name0, RectangleData_t2265684451  ___area1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.CloudRecoImageTargetImpl::GetVirtualButtonByName(System.String)
extern "C"  VirtualButton_t704206407 * CloudRecoImageTargetImpl_GetVirtualButtonByName_m3985521785 (CloudRecoImageTargetImpl_t689169466 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.VirtualButton> Vuforia.CloudRecoImageTargetImpl::GetVirtualButtons()
extern "C"  Il2CppObject* CloudRecoImageTargetImpl_GetVirtualButtons_m500059667 (CloudRecoImageTargetImpl_t689169466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::DestroyVirtualButton(Vuforia.VirtualButton)
extern "C"  bool CloudRecoImageTargetImpl_DestroyVirtualButton_m3642529006 (CloudRecoImageTargetImpl_t689169466 * __this, VirtualButton_t704206407 * ___vb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::StartExtendedTracking()
extern "C"  bool CloudRecoImageTargetImpl_StartExtendedTracking_m2427751396 (CloudRecoImageTargetImpl_t689169466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CloudRecoImageTargetImpl::StopExtendedTracking()
extern "C"  bool CloudRecoImageTargetImpl_StopExtendedTracking_m1320974786 (CloudRecoImageTargetImpl_t689169466 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
