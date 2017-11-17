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

// Vuforia.ReconstructionFromTargetImpl
struct ReconstructionFromTargetImpl_t3107149249;
// Vuforia.CylinderTarget
struct CylinderTarget_t1959645577;
// Vuforia.ImageTarget
struct ImageTarget_t3520455670;
// Vuforia.MultiTarget
struct MultiTarget_t1085092180;
// Vuforia.Trackable
struct Trackable_t3781061455;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

// System.Void Vuforia.ReconstructionFromTargetImpl::.ctor(System.IntPtr)
extern "C"  void ReconstructionFromTargetImpl__ctor_m298934325 (ReconstructionFromTargetImpl_t3107149249 * __this, IntPtr_t ___nativeReconstructionPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m2137691665 (ReconstructionFromTargetImpl_t3107149249 * __this, Il2CppObject * ___cylinderTarget0, Vector3_t4282066566  ___occluderMin1, Vector3_t4282066566  ___occluderMax2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m3931279917 (ReconstructionFromTargetImpl_t3107149249 * __this, Il2CppObject * ___cylinderTarget0, Vector3_t4282066566  ___occluderMin1, Vector3_t4282066566  ___occluderMax2, Vector3_t4282066566  ___offsetToOccluderOrigin3, Quaternion_t1553702882  ___rotationToOccluderOrigin4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m2482175418 (ReconstructionFromTargetImpl_t3107149249 * __this, Il2CppObject * ___imageTarget0, Vector3_t4282066566  ___occluderMin1, Vector3_t4282066566  ___occluderMax2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m490822372 (ReconstructionFromTargetImpl_t3107149249 * __this, Il2CppObject * ___imageTarget0, Vector3_t4282066566  ___occluderMin1, Vector3_t4282066566  ___occluderMax2, Vector3_t4282066566  ___offsetToOccluderOrigin3, Quaternion_t1553702882  ___rotationToOccluderOrigin4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m2870989340 (ReconstructionFromTargetImpl_t3107149249 * __this, Il2CppObject * ___multiTarget0, Vector3_t4282066566  ___occluderMin1, Vector3_t4282066566  ___occluderMax2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m676879682 (ReconstructionFromTargetImpl_t3107149249 * __this, Il2CppObject * ___multiTarget0, Vector3_t4282066566  ___occluderMin1, Vector3_t4282066566  ___occluderMax2, Vector3_t4282066566  ___offsetToOccluderOrigin3, Quaternion_t1553702882  ___rotationToOccluderOrigin4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  Il2CppObject * ReconstructionFromTargetImpl_GetInitializationTarget_m679262140 (ReconstructionFromTargetImpl_t3107149249 * __this, Vector3_t4282066566 * ___occluderMin0, Vector3_t4282066566 * ___occluderMax1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C"  Il2CppObject * ReconstructionFromTargetImpl_GetInitializationTarget_m2838270328 (ReconstructionFromTargetImpl_t3107149249 * __this, Vector3_t4282066566 * ___occluderMin0, Vector3_t4282066566 * ___occluderMax1, Vector3_t4282066566 * ___offsetToOccluderOrigin2, Quaternion_t1553702882 * ___rotationToOccluderOrigin3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Reset()
extern "C"  bool ReconstructionFromTargetImpl_Reset_m2216929338 (ReconstructionFromTargetImpl_t3107149249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Start()
extern "C"  bool ReconstructionFromTargetImpl_Start_m3517634189 (ReconstructionFromTargetImpl_t3107149249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(System.IntPtr,Vuforia.Trackable,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  bool ReconstructionFromTargetImpl_SetInitializationTarget_m3681674799 (ReconstructionFromTargetImpl_t3107149249 * __this, IntPtr_t ___datasetPtr0, Il2CppObject * ___trackable1, Vector3_t4282066566  ___occluderMin2, Vector3_t4282066566  ___occluderMax3, Vector3_t4282066566  ___offsetToOccluderOrigin4, Quaternion_t1553702882  ___rotationToOccluderOrigin5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::get_CanAutoSetInitializationTarget()
extern "C"  bool ReconstructionFromTargetImpl_get_CanAutoSetInitializationTarget_m100261780 (ReconstructionFromTargetImpl_t3107149249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionFromTargetImpl::set_CanAutoSetInitializationTarget(System.Boolean)
extern "C"  void ReconstructionFromTargetImpl_set_CanAutoSetInitializationTarget_m1198447437 (ReconstructionFromTargetImpl_t3107149249 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
