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

// CameraSettings
struct CameraSettings_t3515792008;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_CameraDevice_Camer3311506418.h"

// System.Void CameraSettings::.ctor()
extern "C"  void CameraSettings__ctor_m2541513491 (CameraSettings_t3515792008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::Start()
extern "C"  void CameraSettings_Start_m1488651283 (CameraSettings_t3515792008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraSettings::IsFlashTorchEnabled()
extern "C"  bool CameraSettings_IsFlashTorchEnabled_m2247299816 (CameraSettings_t3515792008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::SwitchFlashTorch(System.Boolean)
extern "C"  void CameraSettings_SwitchFlashTorch_m3697581000 (CameraSettings_t3515792008 * __this, bool ___ON0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraSettings::IsAutofocusEnabled()
extern "C"  bool CameraSettings_IsAutofocusEnabled_m215964615 (CameraSettings_t3515792008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::SwitchAutofocus(System.Boolean)
extern "C"  void CameraSettings_SwitchAutofocus_m933463453 (CameraSettings_t3515792008 * __this, bool ___ON0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::TriggerAutofocusEvent()
extern "C"  void CameraSettings_TriggerAutofocusEvent_m3957800282 (CameraSettings_t3515792008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::SelectCamera(Vuforia.CameraDevice/CameraDirection)
extern "C"  void CameraSettings_SelectCamera_m1196636320 (CameraSettings_t3515792008 * __this, int32_t ___camDir0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraSettings::IsFrontCameraActive()
extern "C"  bool CameraSettings_IsFrontCameraActive_m1504406215 (CameraSettings_t3515792008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::OnVuforiaStarted()
extern "C"  void CameraSettings_OnVuforiaStarted_m3410174447 (CameraSettings_t3515792008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraSettings::OnPaused(System.Boolean)
extern "C"  void CameraSettings_OnPaused_m2738181493 (CameraSettings_t3515792008 * __this, bool ___paused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CameraSettings::RestoreOriginalFocusMode()
extern "C"  Il2CppObject * CameraSettings_RestoreOriginalFocusMode_m2646174709 (CameraSettings_t3515792008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraSettings::RestartCamera(Vuforia.CameraDevice/CameraDirection)
extern "C"  bool CameraSettings_RestartCamera_m2106917471 (CameraSettings_t3515792008 * __this, int32_t ___direction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
