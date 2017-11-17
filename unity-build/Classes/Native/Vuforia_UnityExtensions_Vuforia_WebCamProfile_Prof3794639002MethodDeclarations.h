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

// System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t2782109160;
// Vuforia.WebCamProfile/ProfileCollection
struct ProfileCollection_t3794639002;
struct ProfileCollection_t3794639002_marshaled_pinvoke;
struct ProfileCollection_t3794639002_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_WebCamProfile_Prof3794639002.h"
#include "Vuforia_UnityExtensions_Vuforia_WebCamProfile_Prof1961690790.h"

// System.Void Vuforia.WebCamProfile/ProfileCollection::.ctor(Vuforia.WebCamProfile/ProfileData,System.Collections.Generic.Dictionary`2<System.String,Vuforia.WebCamProfile/ProfileData>)
extern "C"  void ProfileCollection__ctor_m1940478563 (ProfileCollection_t3794639002 * __this, ProfileData_t1961690790  ___defaultProfile0, Dictionary_2_t2782109160 * ___profiles1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ProfileCollection_t3794639002;
struct ProfileCollection_t3794639002_marshaled_pinvoke;

extern "C" void ProfileCollection_t3794639002_marshal_pinvoke(const ProfileCollection_t3794639002& unmarshaled, ProfileCollection_t3794639002_marshaled_pinvoke& marshaled);
extern "C" void ProfileCollection_t3794639002_marshal_pinvoke_back(const ProfileCollection_t3794639002_marshaled_pinvoke& marshaled, ProfileCollection_t3794639002& unmarshaled);
extern "C" void ProfileCollection_t3794639002_marshal_pinvoke_cleanup(ProfileCollection_t3794639002_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ProfileCollection_t3794639002;
struct ProfileCollection_t3794639002_marshaled_com;

extern "C" void ProfileCollection_t3794639002_marshal_com(const ProfileCollection_t3794639002& unmarshaled, ProfileCollection_t3794639002_marshaled_com& marshaled);
extern "C" void ProfileCollection_t3794639002_marshal_com_back(const ProfileCollection_t3794639002_marshaled_com& marshaled, ProfileCollection_t3794639002& unmarshaled);
extern "C" void ProfileCollection_t3794639002_marshal_com_cleanup(ProfileCollection_t3794639002_marshaled_com& marshaled);
