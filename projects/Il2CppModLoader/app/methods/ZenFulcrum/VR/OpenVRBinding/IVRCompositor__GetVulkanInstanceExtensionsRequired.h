#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetVulkanInstanceExtensionsRequired {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_GetVulkanInstanceExtensionsRequired * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02D79D50, uint32_t, Invoke, (app::IVRCompositor_GetVulkanInstanceExtensionsRequired * this_ptr, app::StringBuilder * pch_value, uint32_t un_buffer_size))
    IL2CPP_REGISTER_METHOD(0x02F42AA0, app::IAsyncResult *, BeginInvoke, (app::IVRCompositor_GetVulkanInstanceExtensionsRequired * this_ptr, app::StringBuilder * pch_value, uint32_t un_buffer_size, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVRCompositor_GetVulkanInstanceExtensionsRequired * this_ptr, app::IAsyncResult * result))
}