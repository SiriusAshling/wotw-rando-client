#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayErrorNameFromEnum {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_GetOverlayErrorNameFromEnum * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00F52080, void*, Invoke, (app::IVROverlay_GetOverlayErrorNameFromEnum * this_ptr, app::EVROverlayError__Enum error))
    IL2CPP_REGISTER_METHOD(0x02D7AA60, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_GetOverlayErrorNameFromEnum * this_ptr, app::EVROverlayError__Enum error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F52480, void*, EndInvoke, (app::IVROverlay_GetOverlayErrorNameFromEnum * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__GetOverlayErrorNameFromEnum
