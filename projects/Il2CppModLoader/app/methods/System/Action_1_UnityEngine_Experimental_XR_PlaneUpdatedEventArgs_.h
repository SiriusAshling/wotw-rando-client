#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Action_1_UnityEngine_Experimental_XR_PlaneUpdatedEventArgs_ {
    IL2CPP_REGISTER_METHOD(0x02C0AFB0, void, Invoke, (app::Action_1_UnityEngine_Experimental_XR_PlaneUpdatedEventArgs_ * this_ptr, app::PlaneUpdatedEventArgs obj))
    IL2CPP_REGISTER_METHODINFO(0x04790710, Action_1_UnityEngine_Experimental_XR_PlaneUpdatedEventArgs__Invoke__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_UnityEngine_Experimental_XR_PlaneUpdatedEventArgs_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C0B8C0, app::IAsyncResult*, BeginInvoke, (app::Action_1_UnityEngine_Experimental_XR_PlaneUpdatedEventArgs_ * this_ptr, app::PlaneUpdatedEventArgs obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_UnityEngine_Experimental_XR_PlaneUpdatedEventArgs_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_UnityEngine_Experimental_XR_PlaneUpdatedEventArgs_
