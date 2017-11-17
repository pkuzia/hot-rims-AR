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

// Vuforia.DedicatedEyewearCameraConfiguration
struct DedicatedEyewearCameraConfiguration_t1181820154;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1849668026.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"

// System.Void Vuforia.DedicatedEyewearCameraConfiguration::.ctor(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void DedicatedEyewearCameraConfiguration__ctor_m1125978766 (DedicatedEyewearCameraConfiguration_t1181820154 * __this, Camera_t2727095145 * ___leftCamera0, Camera_t2727095145 * ___rightCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::Init()
extern "C"  void DedicatedEyewearCameraConfiguration_Init_m2275763804 (DedicatedEyewearCameraConfiguration_t1181820154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::ConfigureVideoBackground()
extern "C"  void DedicatedEyewearCameraConfiguration_ConfigureVideoBackground_m2085257551 (DedicatedEyewearCameraConfiguration_t1181820154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DedicatedEyewearCameraConfiguration::CheckForSurfaceChanges(UnityEngine.ScreenOrientation&)
extern "C"  bool DedicatedEyewearCameraConfiguration_CheckForSurfaceChanges_m217315064 (DedicatedEyewearCameraConfiguration_t1181820154 * __this, int32_t* ___orientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C"  void DedicatedEyewearCameraConfiguration_UpdateStereoDepth_m3870549765 (DedicatedEyewearCameraConfiguration_t1181820154 * __this, Transform_t1659122786 * ___trackingReference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DedicatedEyewearCameraConfiguration::IsStereo()
extern "C"  bool DedicatedEyewearCameraConfiguration_IsStereo_m2889368220 (DedicatedEyewearCameraConfiguration_t1181820154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void DedicatedEyewearCameraConfiguration_ApplyCorrectedProjectionMatrix_m250203866 (DedicatedEyewearCameraConfiguration_t1181820154 * __this, Matrix4x4_t1651859333  ___projectionMatrix0, bool ___primaryCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C"  void DedicatedEyewearCameraConfiguration_ResolveVideoBackgroundBehaviours_m287785407 (DedicatedEyewearCameraConfiguration_t1181820154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DedicatedEyewearCameraConfiguration::CameraParameterChanged()
extern "C"  bool DedicatedEyewearCameraConfiguration_CameraParameterChanged_m2398548394 (DedicatedEyewearCameraConfiguration_t1181820154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::UpdateProjection()
extern "C"  void DedicatedEyewearCameraConfiguration_UpdateProjection_m532612804 (DedicatedEyewearCameraConfiguration_t1181820154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::ApplyMatrix(UnityEngine.Camera,UnityEngine.Matrix4x4)
extern "C"  void DedicatedEyewearCameraConfiguration_ApplyMatrix_m1887059901 (DedicatedEyewearCameraConfiguration_t1181820154 * __this, Camera_t2727095145 * ___cam0, Matrix4x4_t1651859333  ___inputMatrix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DedicatedEyewearCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C"  void DedicatedEyewearCameraConfiguration_SetSkewFrustum_m324349753 (DedicatedEyewearCameraConfiguration_t1181820154 * __this, bool ___setSkewing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
