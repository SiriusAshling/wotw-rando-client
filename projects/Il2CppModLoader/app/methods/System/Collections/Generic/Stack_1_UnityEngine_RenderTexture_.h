#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Stack_1_UnityEngine_RenderTexture_ {
    IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, (app::Stack_1_UnityEngine_RenderTexture_ * this_ptr, app::RenderTexture * item))
    IL2CPP_REGISTER_METHODINFO(0x0476C7D8, Stack_1_UnityEngine_RenderTexture__Push__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::RenderTexture *, Pop, (app::Stack_1_UnityEngine_RenderTexture_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04778228, Stack_1_UnityEngine_RenderTexture__Pop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_UnityEngine_RenderTexture_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04712C08, Stack_1_UnityEngine_RenderTexture__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Stack_1_UnityEngine_RenderTexture_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047149D8, Stack_1_UnityEngine_RenderTexture___ctor__MethodInfo)
}