#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetKeyboardTransformAbsolute {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_SetKeyboardTransformAbsolute * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::IVROverlay_SetKeyboardTransformAbsolute * this_ptr, app::ETrackingUniverseOrigin__Enum e_tracking_origin, app::HmdMatrix34_t* pmat_tracking_origin_to_keyboard_transform))
    IL2CPP_REGISTER_METHOD(0x02D7E780, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_SetKeyboardTransformAbsolute * this_ptr, app::ETrackingUniverseOrigin__Enum e_tracking_origin, app::HmdMatrix34_t* pmat_tracking_origin_to_keyboard_transform, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::IVROverlay_SetKeyboardTransformAbsolute * this_ptr, app::HmdMatrix34_t* pmat_tracking_origin_to_keyboard_transform, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__SetKeyboardTransformAbsolute
