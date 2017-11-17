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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderBuffer3529837690.h"
#include "UnityEngine_UnityEngine_CubemapFace2005084858.h"

// System.Void UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,UnityEngine.CubemapFace,System.Int32)
extern "C"  void Graphics_Internal_SetRTSimple_m3769646199 (Il2CppObject * __this /* static, unused */, RenderBuffer_t3529837690 * ___color0, RenderBuffer_t3529837690 * ___depth1, int32_t ___mip2, int32_t ___face3, int32_t ___depthSlice4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer,System.Int32,UnityEngine.CubemapFace,System.Int32)
extern "C"  void Graphics_SetRenderTargetImpl_m3786045502 (Il2CppObject * __this /* static, unused */, RenderBuffer_t3529837690  ___colorBuffer0, RenderBuffer_t3529837690  ___depthBuffer1, int32_t ___mipLevel2, int32_t ___face3, int32_t ___depthSlice4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer)
extern "C"  void Graphics_SetRenderTarget_m1691358557 (Il2CppObject * __this /* static, unused */, RenderBuffer_t3529837690  ___colorBuffer0, RenderBuffer_t3529837690  ___depthBuffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
