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

// Vuforia.OrientedBoundingBox3D
struct OrientedBoundingBox3D_t90420510;
struct OrientedBoundingBox3D_t90420510_marshaled_pinvoke;
struct OrientedBoundingBox3D_t90420510_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox390420510.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void Vuforia.OrientedBoundingBox3D::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  void OrientedBoundingBox3D__ctor_m3710316605 (OrientedBoundingBox3D_t90420510 * __this, Vector3_t4282066566  ___center0, Vector3_t4282066566  ___halfExtents1, float ___rotationY2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.OrientedBoundingBox3D::get_Center()
extern "C"  Vector3_t4282066566  OrientedBoundingBox3D_get_Center_m3304348564 (OrientedBoundingBox3D_t90420510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.OrientedBoundingBox3D::set_Center(UnityEngine.Vector3)
extern "C"  void OrientedBoundingBox3D_set_Center_m3639495639 (OrientedBoundingBox3D_t90420510 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.OrientedBoundingBox3D::get_HalfExtents()
extern "C"  Vector3_t4282066566  OrientedBoundingBox3D_get_HalfExtents_m2228144537 (OrientedBoundingBox3D_t90420510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.OrientedBoundingBox3D::set_HalfExtents(UnityEngine.Vector3)
extern "C"  void OrientedBoundingBox3D_set_HalfExtents_m4054038734 (OrientedBoundingBox3D_t90420510 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.OrientedBoundingBox3D::get_RotationY()
extern "C"  float OrientedBoundingBox3D_get_RotationY_m4054452016 (OrientedBoundingBox3D_t90420510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.OrientedBoundingBox3D::set_RotationY(System.Single)
extern "C"  void OrientedBoundingBox3D_set_RotationY_m1618726139 (OrientedBoundingBox3D_t90420510 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct OrientedBoundingBox3D_t90420510;
struct OrientedBoundingBox3D_t90420510_marshaled_pinvoke;

extern "C" void OrientedBoundingBox3D_t90420510_marshal_pinvoke(const OrientedBoundingBox3D_t90420510& unmarshaled, OrientedBoundingBox3D_t90420510_marshaled_pinvoke& marshaled);
extern "C" void OrientedBoundingBox3D_t90420510_marshal_pinvoke_back(const OrientedBoundingBox3D_t90420510_marshaled_pinvoke& marshaled, OrientedBoundingBox3D_t90420510& unmarshaled);
extern "C" void OrientedBoundingBox3D_t90420510_marshal_pinvoke_cleanup(OrientedBoundingBox3D_t90420510_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct OrientedBoundingBox3D_t90420510;
struct OrientedBoundingBox3D_t90420510_marshaled_com;

extern "C" void OrientedBoundingBox3D_t90420510_marshal_com(const OrientedBoundingBox3D_t90420510& unmarshaled, OrientedBoundingBox3D_t90420510_marshaled_com& marshaled);
extern "C" void OrientedBoundingBox3D_t90420510_marshal_com_back(const OrientedBoundingBox3D_t90420510_marshaled_com& marshaled, OrientedBoundingBox3D_t90420510& unmarshaled);
extern "C" void OrientedBoundingBox3D_t90420510_marshal_com_cleanup(OrientedBoundingBox3D_t90420510_marshaled_com& marshaled);
