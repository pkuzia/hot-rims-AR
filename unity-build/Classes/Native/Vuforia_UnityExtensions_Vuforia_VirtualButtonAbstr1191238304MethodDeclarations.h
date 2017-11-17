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

// Vuforia.VirtualButtonAbstractBehaviour
struct VirtualButtonAbstractBehaviour_t1191238304;
// System.String
struct String_t;
// Vuforia.VirtualButton
struct VirtualButton_t704206407;
// Vuforia.IVirtualButtonEventHandler
struct IVirtualButtonEventHandler_t2952053798;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t2347335889;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_String7231557.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButton_Sens1019632289.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "Vuforia_UnityExtensions_Vuforia_VirtualButton704206407.h"

// System.String Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButtonName()
extern "C"  String_t* VirtualButtonAbstractBehaviour_get_VirtualButtonName_m1249475962 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_Pressed()
extern "C"  bool VirtualButtonAbstractBehaviour_get_Pressed_m2409061669 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_HasUpdatedPose()
extern "C"  bool VirtualButtonAbstractBehaviour_get_HasUpdatedPose_m1225594545 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::get_UnregisterOnDestroy()
extern "C"  bool VirtualButtonAbstractBehaviour_get_UnregisterOnDestroy_m2237307650 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::set_UnregisterOnDestroy(System.Boolean)
extern "C"  void VirtualButtonAbstractBehaviour_set_UnregisterOnDestroy_m2517339255 (VirtualButtonAbstractBehaviour_t1191238304 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton Vuforia.VirtualButtonAbstractBehaviour::get_VirtualButton()
extern "C"  VirtualButton_t704206407 * VirtualButtonAbstractBehaviour_get_VirtualButton_m1243004304 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::.ctor()
extern "C"  void VirtualButtonAbstractBehaviour__ctor_m2203851456 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::RegisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C"  void VirtualButtonAbstractBehaviour_RegisterEventHandler_m2754464967 (VirtualButtonAbstractBehaviour_t1191238304 * __this, Il2CppObject * ___eventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UnregisterEventHandler(Vuforia.IVirtualButtonEventHandler)
extern "C"  bool VirtualButtonAbstractBehaviour_UnregisterEventHandler_m1357918546 (VirtualButtonAbstractBehaviour_t1191238304 * __this, Il2CppObject * ___eventHandler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::CalculateButtonArea(UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C"  bool VirtualButtonAbstractBehaviour_CalculateButtonArea_m2844320277 (VirtualButtonAbstractBehaviour_t1191238304 * __this, Vector2_t4282066565 * ___topLeft0, Vector2_t4282066565 * ___bottomRight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateAreaRectangle()
extern "C"  bool VirtualButtonAbstractBehaviour_UpdateAreaRectangle_m2064957189 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateSensitivity()
extern "C"  bool VirtualButtonAbstractBehaviour_UpdateSensitivity_m1916999554 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdateEnabled()
extern "C"  bool VirtualButtonAbstractBehaviour_UpdateEnabled_m3443197092 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::UpdatePose()
extern "C"  bool VirtualButtonAbstractBehaviour_UpdatePose_m821956592 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnTrackerUpdated(System.Boolean)
extern "C"  void VirtualButtonAbstractBehaviour_OnTrackerUpdated_m825860765 (VirtualButtonAbstractBehaviour_t1191238304 * __this, bool ___pressed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.VirtualButtonAbstractBehaviour::GetImageTargetBehaviour()
extern "C"  ImageTargetAbstractBehaviour_t2347335889 * VirtualButtonAbstractBehaviour_GetImageTargetBehaviour_m4243465093 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::SetVirtualButtonName(System.String)
extern "C"  void VirtualButtonAbstractBehaviour_SetVirtualButtonName_m3217263160 (VirtualButtonAbstractBehaviour_t1191238304 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VirtualButton/Sensitivity Vuforia.VirtualButtonAbstractBehaviour::get_Sensitivity()
extern "C"  int32_t VirtualButtonAbstractBehaviour_get_Sensitivity_m1907020162 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::set_Sensitivity(Vuforia.VirtualButton/Sensitivity)
extern "C"  void VirtualButtonAbstractBehaviour_set_Sensitivity_m3083161425 (VirtualButtonAbstractBehaviour_t1191238304 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.VirtualButtonAbstractBehaviour::get_PreviousTransform()
extern "C"  Matrix4x4_t1651859333  VirtualButtonAbstractBehaviour_get_PreviousTransform_m4139217071 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::set_PreviousTransform(UnityEngine.Matrix4x4)
extern "C"  void VirtualButtonAbstractBehaviour_set_PreviousTransform_m964695748 (VirtualButtonAbstractBehaviour_t1191238304 * __this, Matrix4x4_t1651859333  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.VirtualButtonAbstractBehaviour::get_PreviousParent()
extern "C"  GameObject_t3674682005 * VirtualButtonAbstractBehaviour_get_PreviousParent_m2969914881 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::set_PreviousParent(UnityEngine.GameObject)
extern "C"  void VirtualButtonAbstractBehaviour_set_PreviousParent_m4294717370 (VirtualButtonAbstractBehaviour_t1191238304 * __this, GameObject_t3674682005 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::InitializeVirtualButton(Vuforia.VirtualButton)
extern "C"  void VirtualButtonAbstractBehaviour_InitializeVirtualButton_m3322871478 (VirtualButtonAbstractBehaviour_t1191238304 * __this, VirtualButton_t704206407 * ___virtualButton0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::SetPosAndScaleFromButtonArea(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool VirtualButtonAbstractBehaviour_SetPosAndScaleFromButtonArea_m2070634762 (VirtualButtonAbstractBehaviour_t1191238304 * __this, Vector2_t4282066565  ___topLeft0, Vector2_t4282066565  ___bottomRight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::LateUpdate()
extern "C"  void VirtualButtonAbstractBehaviour_LateUpdate_m1419503507 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDisable()
extern "C"  void VirtualButtonAbstractBehaviour_OnDisable_m4233629479 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnDestroy()
extern "C"  void VirtualButtonAbstractBehaviour_OnDestroy_m2116194233 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VirtualButtonAbstractBehaviour::OnValidate()
extern "C"  void VirtualButtonAbstractBehaviour_OnValidate_m3968882457 (VirtualButtonAbstractBehaviour_t1191238304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VirtualButtonAbstractBehaviour::Equals(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  bool VirtualButtonAbstractBehaviour_Equals_m446130622 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___vec10, Vector2_t4282066565  ___vec21, float ___threshold2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
