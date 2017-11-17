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

// Vuforia.OrientedBoundingBox
struct OrientedBoundingBox_t2236164205;
struct OrientedBoundingBox_t2236164205_marshaled_pinvoke;
struct OrientedBoundingBox_t2236164205_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_OrientedBoundingBo2236164205.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void Vuforia.OrientedBoundingBox::.ctor(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  void OrientedBoundingBox__ctor_m2337649358 (OrientedBoundingBox_t2236164205 * __this, Vector2_t4282066565  ___center0, Vector2_t4282066565  ___halfExtents1, float ___rotation2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.OrientedBoundingBox::get_Center()
extern "C"  Vector2_t4282066565  OrientedBoundingBox_get_Center_m1008687394 (OrientedBoundingBox_t2236164205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.OrientedBoundingBox::set_Center(UnityEngine.Vector2)
extern "C"  void OrientedBoundingBox_set_Center_m1376587913 (OrientedBoundingBox_t2236164205 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.OrientedBoundingBox::get_HalfExtents()
extern "C"  Vector2_t4282066565  OrientedBoundingBox_get_HalfExtents_m2756318411 (OrientedBoundingBox_t2236164205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.OrientedBoundingBox::set_HalfExtents(UnityEngine.Vector2)
extern "C"  void OrientedBoundingBox_set_HalfExtents_m1438928510 (OrientedBoundingBox_t2236164205 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.OrientedBoundingBox::get_Rotation()
extern "C"  float OrientedBoundingBox_get_Rotation_m3061546554 (OrientedBoundingBox_t2236164205 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.OrientedBoundingBox::set_Rotation(System.Single)
extern "C"  void OrientedBoundingBox_set_Rotation_m1641663025 (OrientedBoundingBox_t2236164205 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct OrientedBoundingBox_t2236164205;
struct OrientedBoundingBox_t2236164205_marshaled_pinvoke;

extern "C" void OrientedBoundingBox_t2236164205_marshal_pinvoke(const OrientedBoundingBox_t2236164205& unmarshaled, OrientedBoundingBox_t2236164205_marshaled_pinvoke& marshaled);
extern "C" void OrientedBoundingBox_t2236164205_marshal_pinvoke_back(const OrientedBoundingBox_t2236164205_marshaled_pinvoke& marshaled, OrientedBoundingBox_t2236164205& unmarshaled);
extern "C" void OrientedBoundingBox_t2236164205_marshal_pinvoke_cleanup(OrientedBoundingBox_t2236164205_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct OrientedBoundingBox_t2236164205;
struct OrientedBoundingBox_t2236164205_marshaled_com;

extern "C" void OrientedBoundingBox_t2236164205_marshal_com(const OrientedBoundingBox_t2236164205& unmarshaled, OrientedBoundingBox_t2236164205_marshaled_com& marshaled);
extern "C" void OrientedBoundingBox_t2236164205_marshal_com_back(const OrientedBoundingBox_t2236164205_marshaled_com& marshaled, OrientedBoundingBox_t2236164205& unmarshaled);
extern "C" void OrientedBoundingBox_t2236164205_marshal_com_cleanup(OrientedBoundingBox_t2236164205_marshaled_com& marshaled);
