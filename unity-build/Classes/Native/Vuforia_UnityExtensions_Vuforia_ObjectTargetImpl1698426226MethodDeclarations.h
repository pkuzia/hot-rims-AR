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

// Vuforia.ObjectTargetImpl
struct ObjectTargetImpl_t1698426226;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t2095838082;
// Vuforia.DataSetImpl
struct DataSetImpl_t1837478850;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "Vuforia_UnityExtensions_Vuforia_DataSet2095838082.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void Vuforia.ObjectTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C"  void ObjectTargetImpl__ctor_m2633370435 (ObjectTargetImpl_t1698426226 * __this, String_t* ___name0, int32_t ___id1, DataSet_t2095838082 * ___dataSet2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::GetSize()
extern "C"  Vector3_t4282066566  ObjectTargetImpl_GetSize_m3609549513 (ObjectTargetImpl_t1698426226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetImpl::SetSize(UnityEngine.Vector3)
extern "C"  void ObjectTargetImpl_SetSize_m1521199594 (ObjectTargetImpl_t1698426226 * __this, Vector3_t4282066566  ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StartExtendedTracking()
extern "C"  bool ObjectTargetImpl_StartExtendedTracking_m4087117484 (ObjectTargetImpl_t1698426226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StopExtendedTracking()
extern "C"  bool ObjectTargetImpl_StopExtendedTracking_m3175618042 (ObjectTargetImpl_t1698426226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::get_DataSet()
extern "C"  DataSetImpl_t1837478850 * ObjectTargetImpl_get_DataSet_m2558858676 (ObjectTargetImpl_t1698426226 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
