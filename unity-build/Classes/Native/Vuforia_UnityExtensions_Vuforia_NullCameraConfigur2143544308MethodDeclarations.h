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

// Vuforia.NullCameraConfiguration
struct NullCameraConfiguration_t2143544308;
// System.Action
struct Action_t3771233898;
// Vuforia.WebCamAbstractBehaviour
struct WebCamAbstractBehaviour_t725705546;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera134001414.h"
#include "Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vi2868837278.h"
#include "System_Core_System_Action3771233898.h"
#include "Vuforia_UnityExtensions_Vuforia_WebCamAbstractBehav725705546.h"
#include "UnityEngine_UnityEngine_ScreenOrientation1849668026.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"

// System.Void Vuforia.NullCameraConfiguration::Init()
extern "C"  void NullCameraConfiguration_Init_m3999178198 (NullCameraConfiguration_t2143544308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::InitCameraDevice(Vuforia.CameraDevice/CameraDeviceMode,Vuforia.VuforiaRenderer/VideoBackgroundReflection,System.Action)
extern "C"  void NullCameraConfiguration_InitCameraDevice_m3456827712 (NullCameraConfiguration_t2143544308 * __this, int32_t ___cameraDeviceMode0, int32_t ___mirrorVideoBackground1, Action_t3771233898 * ___onVideoBackgroundConfigChanged2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ConfigureVideoBackground()
extern "C"  void NullCameraConfiguration_ConfigureVideoBackground_m707213257 (NullCameraConfiguration_t2143544308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::UpdatePlayModeParameters(Vuforia.WebCamAbstractBehaviour,System.Single)
extern "C"  void NullCameraConfiguration_UpdatePlayModeParameters_m867822451 (NullCameraConfiguration_t2143544308 * __this, WebCamAbstractBehaviour_t725705546 * ___webCamBehaviour0, float ___cameraOffset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.NullCameraConfiguration::CheckForSurfaceChanges(UnityEngine.ScreenOrientation&)
extern "C"  bool NullCameraConfiguration_CheckForSurfaceChanges_m4276254578 (NullCameraConfiguration_t2143544308 * __this, int32_t* ___orientation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::UpdateStereoDepth(UnityEngine.Transform)
extern "C"  void NullCameraConfiguration_UpdateStereoDepth_m4088053759 (NullCameraConfiguration_t2143544308 * __this, Transform_t1659122786 * ___trackingReference0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.NullCameraConfiguration::IsStereo()
extern "C"  bool NullCameraConfiguration_IsStereo_m327455254 (NullCameraConfiguration_t2143544308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ResetBackgroundPlane(System.Boolean)
extern "C"  void NullCameraConfiguration_ResetBackgroundPlane_m1568451644 (NullCameraConfiguration_t2143544308 * __this, bool ___disable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.NullCameraConfiguration::get_VideoBackgroundMirrored()
extern "C"  int32_t NullCameraConfiguration_get_VideoBackgroundMirrored_m27850223 (NullCameraConfiguration_t2143544308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::set_VideoBackgroundMirrored(Vuforia.VuforiaRenderer/VideoBackgroundReflection)
extern "C"  void NullCameraConfiguration_set_VideoBackgroundMirrored_m2521420302 (NullCameraConfiguration_t2143544308 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void NullCameraConfiguration_ApplyCorrectedProjectionMatrix_m1873923284 (NullCameraConfiguration_t2143544308 * __this, Matrix4x4_t1651859333  ___projectionMatrix0, bool ___primaryCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::SetSkewFrustum(System.Boolean)
extern "C"  void NullCameraConfiguration_SetSkewFrustum_m2124290227 (NullCameraConfiguration_t2143544308 * __this, bool ___setSkewing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.NullCameraConfiguration::get_VideoBackgroundViewportRect()
extern "C"  Rect_t4241904616  NullCameraConfiguration_get_VideoBackgroundViewportRect_m3080033222 (NullCameraConfiguration_t2143544308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.NullCameraConfiguration::get_EyewearUserCalibrationProfileId()
extern "C"  int32_t NullCameraConfiguration_get_EyewearUserCalibrationProfileId_m967747732 (NullCameraConfiguration_t2143544308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::set_EyewearUserCalibrationProfileId(System.Int32)
extern "C"  void NullCameraConfiguration_set_EyewearUserCalibrationProfileId_m2940574117 (NullCameraConfiguration_t2143544308 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::SetCameraParameterChanged()
extern "C"  void NullCameraConfiguration_SetCameraParameterChanged_m1312883950 (NullCameraConfiguration_t2143544308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullCameraConfiguration::.ctor()
extern "C"  void NullCameraConfiguration__ctor_m922837182 (NullCameraConfiguration_t2143544308 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
