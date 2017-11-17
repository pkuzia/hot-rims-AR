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

// Vuforia.VuMarkTargetImpl
struct VuMarkTargetImpl_t582244383;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// Vuforia.VuMarkTemplateImpl
struct VuMarkTemplateImpl_t3963422856;
// System.String
struct String_t;
// Vuforia.InstanceId
struct InstanceId_t543794962;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t1567136584;
// Vuforia.Image
struct Image_t2247677317;
// Vuforia.ImageImpl
struct ImageImpl_t2172378181;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_InstanceIdType3974384748.h"
#include "Vuforia_UnityExtensions_Vuforia_VuMarkTemplateImpl3963422856.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_725431450.h"
#include "Vuforia_UnityExtensions_Vuforia_ImageImpl2172378181.h"

// System.Void Vuforia.VuMarkTargetImpl::.ctor(System.Int32,System.Byte[],System.UInt64,Vuforia.InstanceIdType,System.UInt32,Vuforia.VuMarkTemplateImpl)
extern "C"  void VuMarkTargetImpl__ctor_m3370695386 (VuMarkTargetImpl_t582244383 * __this, int32_t ___id0, ByteU5BU5D_t4260760469* ___buffer1, uint64_t ___numericValue2, int32_t ___dataType3, uint32_t ___dataLength4, VuMarkTemplateImpl_t3963422856 * ___template5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.VuMarkTargetImpl::GetSize()
extern "C"  Vector3_t4282066566  VuMarkTargetImpl_GetSize_m1077113340 (VuMarkTargetImpl_t582244383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::SetSize(UnityEngine.Vector3)
extern "C"  void VuMarkTargetImpl_SetSize_m3126716375 (VuMarkTargetImpl_t582244383 * __this, Vector3_t4282066566  ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkTargetImpl::StartExtendedTracking()
extern "C"  bool VuMarkTargetImpl_StartExtendedTracking_m158103711 (VuMarkTargetImpl_t582244383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkTargetImpl::StopExtendedTracking()
extern "C"  bool VuMarkTargetImpl_StopExtendedTracking_m3880159655 (VuMarkTargetImpl_t582244383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuMarkTargetImpl::get_Name()
extern "C"  String_t* VuMarkTargetImpl_get_Name_m1748306170 (VuMarkTargetImpl_t582244383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuMarkTargetImpl::get_ID()
extern "C"  int32_t VuMarkTargetImpl_get_ID_m3480653843 (VuMarkTargetImpl_t582244383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.InstanceId Vuforia.VuMarkTargetImpl::get_InstanceId()
extern "C"  Il2CppObject * VuMarkTargetImpl_get_InstanceId_m1796015707 (VuMarkTargetImpl_t582244383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkTemplate Vuforia.VuMarkTargetImpl::get_Template()
extern "C"  Il2CppObject * VuMarkTargetImpl_get_Template_m245671119 (VuMarkTargetImpl_t582244383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.VuMarkTargetImpl::get_InstanceImage()
extern "C"  Image_t2247677317 * VuMarkTargetImpl_get_InstanceImage_m2096189016 (VuMarkTargetImpl_t582244383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuMarkTargetImpl::CallNativeGetInstanceImage()
extern "C"  int32_t VuMarkTargetImpl_CallNativeGetInstanceImage_m248450708 (VuMarkTargetImpl_t582244383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::CreateInstanceImage()
extern "C"  void VuMarkTargetImpl_CreateInstanceImage_m3974124713 (VuMarkTargetImpl_t582244383 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::SetImageValues(Vuforia.VuforiaManagerImpl/ImageHeaderData,Vuforia.ImageImpl)
extern "C"  void VuMarkTargetImpl_SetImageValues_m2217910177 (Il2CppObject * __this /* static, unused */, ImageHeaderData_t725431450  ___imageHeader0, ImageImpl_t2172378181 * ___image1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::AllocateImage(Vuforia.ImageImpl)
extern "C"  void VuMarkTargetImpl_AllocateImage_m2314529126 (Il2CppObject * __this /* static, unused */, ImageImpl_t2172378181 * ___image0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
