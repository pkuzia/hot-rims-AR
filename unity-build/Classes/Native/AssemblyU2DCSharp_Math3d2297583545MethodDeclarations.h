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

// Math3d
struct Math3d_t2297583545;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"

// System.Void Math3d::.ctor()
extern "C"  void Math3d__ctor_m840543490 (Math3d_t2297583545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Math3d::.cctor()
extern "C"  void Math3d__cctor_m4099915499 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Math3d::Init()
extern "C"  void Math3d_Init_m3165239570 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::AddVectorLength(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t4282066566  Math3d_AddVectorLength_m3249358606 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___vector0, float ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::SetVectorLength(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t4282066566  Math3d_SetVectorLength_m1540271405 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___vector0, float ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Math3d::SubtractRotation(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t1553702882  Math3d_SubtractRotation_m1572926314 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___B0, Quaternion_t1553702882  ___A1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Math3d::PlanePlaneIntersection(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Math3d_PlanePlaneIntersection_m870088531 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566 * ___linePoint0, Vector3_t4282066566 * ___lineVec1, Vector3_t4282066566  ___plane1Normal2, Vector3_t4282066566  ___plane1Position3, Vector3_t4282066566  ___plane2Normal4, Vector3_t4282066566  ___plane2Position5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Math3d::LinePlaneIntersection(UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Math3d_LinePlaneIntersection_m2213830652 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566 * ___intersection0, Vector3_t4282066566  ___linePoint1, Vector3_t4282066566  ___lineVec2, Vector3_t4282066566  ___planeNormal3, Vector3_t4282066566  ___planePoint4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Math3d::LineLineIntersection(UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Math3d_LineLineIntersection_m2362346758 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566 * ___intersection0, Vector3_t4282066566  ___linePoint11, Vector3_t4282066566  ___lineVec12, Vector3_t4282066566  ___linePoint23, Vector3_t4282066566  ___lineVec24, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Math3d::ClosestPointsOnTwoLines(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Math3d_ClosestPointsOnTwoLines_m4110364792 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566 * ___closestPointLine10, Vector3_t4282066566 * ___closestPointLine21, Vector3_t4282066566  ___linePoint12, Vector3_t4282066566  ___lineVec13, Vector3_t4282066566  ___linePoint24, Vector3_t4282066566  ___lineVec25, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Math3d::InverseSignQuaternion(UnityEngine.Quaternion)
extern "C"  Quaternion_t1553702882  Math3d_InverseSignQuaternion_m3702809838 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Math3d::AreQuaternionsClose(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  bool Math3d_AreQuaternionsClose_m3964416067 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___q10, Quaternion_t1553702882  ___q21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::ProjectPointOnLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  Math3d_ProjectPointOnLine_m1043686713 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___linePoint0, Vector3_t4282066566  ___lineVec1, Vector3_t4282066566  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::ProjectPointOnLineSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  Math3d_ProjectPointOnLineSegment_m3634633200 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___linePoint10, Vector3_t4282066566  ___linePoint21, Vector3_t4282066566  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::ProjectPointOnPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  Math3d_ProjectPointOnPlane_m1907607059 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___planeNormal0, Vector3_t4282066566  ___planePoint1, Vector3_t4282066566  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::ProjectVectorOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  Math3d_ProjectVectorOnPlane_m2546612271 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___planeNormal0, Vector3_t4282066566  ___vector1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Math3d::SignedDistancePlanePoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Math3d_SignedDistancePlanePoint_m376077804 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___planeNormal0, Vector3_t4282066566  ___planePoint1, Vector3_t4282066566  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Math3d::SignedDotProduct(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Math3d_SignedDotProduct_m593258767 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___vectorA0, Vector3_t4282066566  ___vectorB1, Vector3_t4282066566  ___normal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Math3d::AngleVectorPlane(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Math3d_AngleVectorPlane_m3582993816 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___vector0, Vector3_t4282066566  ___normal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Math3d::DotProductAngle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Math3d_DotProductAngle_m1887079915 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___vec10, Vector3_t4282066566  ___vec21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Math3d::PlaneFrom3Points(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Math3d_PlaneFrom3Points_m3975096653 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566 * ___planeNormal0, Vector3_t4282066566 * ___planePoint1, Vector3_t4282066566  ___pointA2, Vector3_t4282066566  ___pointB3, Vector3_t4282066566  ___pointC4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::GetForwardVector(UnityEngine.Quaternion)
extern "C"  Vector3_t4282066566  Math3d_GetForwardVector_m3164468473 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::GetUpVector(UnityEngine.Quaternion)
extern "C"  Vector3_t4282066566  Math3d_GetUpVector_m3421635109 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::GetRightVector(UnityEngine.Quaternion)
extern "C"  Vector3_t4282066566  Math3d_GetRightVector_m3667185488 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Math3d::QuaternionFromMatrix(UnityEngine.Matrix4x4)
extern "C"  Quaternion_t1553702882  Math3d_QuaternionFromMatrix_m188998599 (Il2CppObject * __this /* static, unused */, Matrix4x4_t1651859333  ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::PositionFromMatrix(UnityEngine.Matrix4x4)
extern "C"  Vector3_t4282066566  Math3d_PositionFromMatrix_m3403258026 (Il2CppObject * __this /* static, unused */, Matrix4x4_t1651859333  ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Math3d::LookRotationExtended(UnityEngine.GameObject&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Math3d_LookRotationExtended_m2121489800 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 ** ___gameObjectInOut0, Vector3_t4282066566  ___alignWithVector1, Vector3_t4282066566  ___alignWithNormal2, Vector3_t4282066566  ___customForward3, Vector3_t4282066566  ___customUp4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Math3d::TransformWithParent(UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  void Math3d_TransformWithParent_m4190112144 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882 * ___childRotation0, Vector3_t4282066566 * ___childPosition1, Quaternion_t1553702882  ___parentRotation2, Vector3_t4282066566  ___parentPosition3, Quaternion_t1553702882  ___startParentRotation4, Vector3_t4282066566  ___startParentPosition5, Quaternion_t1553702882  ___startChildRotation6, Vector3_t4282066566  ___startChildPosition7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Math3d::PreciseAlign(UnityEngine.GameObject&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Math3d_PreciseAlign_m1035580634 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 ** ___gameObjectInOut0, Vector3_t4282066566  ___alignWithVector1, Vector3_t4282066566  ___alignWithNormal2, Vector3_t4282066566  ___alignWithPosition3, Vector3_t4282066566  ___triangleForward4, Vector3_t4282066566  ___triangleNormal5, Vector3_t4282066566  ___trianglePosition6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Math3d::VectorsToTransform(UnityEngine.GameObject&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Math3d_VectorsToTransform_m744663850 (Math3d_t2297583545 * __this, GameObject_t3674682005 ** ___gameObjectInOut0, Vector3_t4282066566  ___positionVector1, Vector3_t4282066566  ___directionVector2, Vector3_t4282066566  ___normalVector3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Math3d::PointOnWhichSideOfLineSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  int32_t Math3d_PointOnWhichSideOfLineSegment_m2431546058 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___linePoint10, Vector3_t4282066566  ___linePoint21, Vector3_t4282066566  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Math3d::MouseDistanceToLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Math3d_MouseDistanceToLine_m3058095759 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___linePoint10, Vector3_t4282066566  ___linePoint21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Math3d::MouseDistanceToCircle(UnityEngine.Vector3,System.Single)
extern "C"  float Math3d_MouseDistanceToCircle_m465723525 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___point0, float ___radius1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Math3d::IsLineInRectangle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Math3d_IsLineInRectangle_m4054819104 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___linePoint10, Vector3_t4282066566  ___linePoint21, Vector3_t4282066566  ___rectA2, Vector3_t4282066566  ___rectB3, Vector3_t4282066566  ___rectC4, Vector3_t4282066566  ___rectD5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Math3d::IsPointInRectangle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Math3d_IsPointInRectangle_m25296779 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___point0, Vector3_t4282066566  ___rectA1, Vector3_t4282066566  ___rectC2, Vector3_t4282066566  ___rectB3, Vector3_t4282066566  ___rectD4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Math3d::AreLineSegmentsCrossing(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Math3d_AreLineSegmentsCrossing_m3083775548 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___pointA10, Vector3_t4282066566  ___pointA21, Vector3_t4282066566  ___pointB12, Vector3_t4282066566  ___pointB23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Math3d::AverageQuaternion(UnityEngine.Vector4&,UnityEngine.Quaternion,UnityEngine.Quaternion,System.Int32)
extern "C"  void Math3d_AverageQuaternion_m4227128648 (Il2CppObject * __this /* static, unused */, Vector4_t4282066567 * ___cumulative0, Quaternion_t1553702882  ___newRotation1, Quaternion_t1553702882  ___firstRotation2, int32_t ___addAmount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Math3d::NormalizeQuaternion(System.Single,System.Single,System.Single,System.Single)
extern "C"  Quaternion_t1553702882  Math3d_NormalizeQuaternion_m3713280471 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___z2, float ___w3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
