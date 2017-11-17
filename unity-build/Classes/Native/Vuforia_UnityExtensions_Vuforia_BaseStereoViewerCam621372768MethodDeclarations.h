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

// Vuforia.BaseStereoViewerCameraConfiguration
struct BaseStereoViewerCameraConfiguration_t621372768;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1849668026.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Void Vuforia.BaseStereoViewerCameraConfiguration::.ctor(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void BaseStereoViewerCameraConfiguration__ctor_m2951778420 (BaseStereoViewerCameraConfiguration_t621372768 * __this, Camera_t2727095145 * ___leftCamera0, Camera_t2727095145 * ___rightCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseStereoViewerCameraConfiguration::ConfigureVideoBackground()
extern "C"  void BaseStereoViewerCameraConfiguration_ConfigureVideoBackground_m1977076917 (BaseStereoViewerCameraConfiguration_t621372768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.BaseStereoViewerCameraConfiguration::CheckForSurfaceChanges(UnityEngine.ScreenOrientation&)
extern "C"  bool BaseStereoViewerCameraConfiguration_CheckForSurfaceChanges_m1053281630 (BaseStereoViewerCameraConfiguration_t621372768 * __this, int32_t* ___orientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseStereoViewerCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C"  void BaseStereoViewerCameraConfiguration_UpdateStereoDepth_m3138275307 (BaseStereoViewerCameraConfiguration_t621372768 * __this, Transform_t1659122786 * ___trackingReference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.BaseStereoViewerCameraConfiguration::IsStereo()
extern "C"  bool BaseStereoViewerCameraConfiguration_IsStereo_m816126466 (BaseStereoViewerCameraConfiguration_t621372768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseStereoViewerCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C"  void BaseStereoViewerCameraConfiguration_SetSkewFrustum_m2766296991 (BaseStereoViewerCameraConfiguration_t621372768 * __this, bool ___setSkewing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseStereoViewerCameraConfiguration::ResolveVideoBackgroundBehaviours()
extern "C"  void BaseStereoViewerCameraConfiguration_ResolveVideoBackgroundBehaviours_m1300088613 (BaseStereoViewerCameraConfiguration_t621372768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.BaseStereoViewerCameraConfiguration::ComputeViewPortRect(System.Int32,System.Int32)
extern "C"  void BaseStereoViewerCameraConfiguration_ComputeViewPortRect_m2137313461 (BaseStereoViewerCameraConfiguration_t621372768 * __this, int32_t ___leftCameraViewPortHeight0, int32_t ___leftCameraViewPortWidth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
