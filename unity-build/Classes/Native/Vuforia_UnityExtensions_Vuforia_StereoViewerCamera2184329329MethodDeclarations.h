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

// Vuforia.StereoViewerCameraConfiguration
struct StereoViewerCameraConfiguration_t2184329329;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"

// System.Void Vuforia.StereoViewerCameraConfiguration::.ctor(UnityEngine.Camera,UnityEngine.Camera,System.Single,System.Boolean)
extern "C"  void StereoViewerCameraConfiguration__ctor_m209402579 (StereoViewerCameraConfiguration_t2184329329 * __this, Camera_t2727095145 * ___leftCamera0, Camera_t2727095145 * ___rightCamera1, float ___cameraOffset2, bool ___isDistorted3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoViewerCameraConfiguration::ApplyCorrectedProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  void StereoViewerCameraConfiguration_ApplyCorrectedProjectionMatrix_m3486085265 (StereoViewerCameraConfiguration_t2184329329 * __this, Matrix4x4_t1651859333  ___projectionMatrix0, bool ___primaryCamera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoViewerCameraConfiguration::SetDistortion(System.Boolean)
extern "C"  void StereoViewerCameraConfiguration_SetDistortion_m3176483541 (StereoViewerCameraConfiguration_t2184329329 * __this, bool ___isDistorted0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoViewerCameraConfiguration::ConfigureVideoBackground()
extern "C"  void StereoViewerCameraConfiguration_ConfigureVideoBackground_m3404670918 (StereoViewerCameraConfiguration_t2184329329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.StereoViewerCameraConfiguration::CameraParameterChanged()
extern "C"  bool StereoViewerCameraConfiguration_CameraParameterChanged_m2340126945 (StereoViewerCameraConfiguration_t2184329329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StereoViewerCameraConfiguration::UpdateProjection()
extern "C"  void StereoViewerCameraConfiguration_UpdateProjection_m1525748795 (StereoViewerCameraConfiguration_t2184329329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
