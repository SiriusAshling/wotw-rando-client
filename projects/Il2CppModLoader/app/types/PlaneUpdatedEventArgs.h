#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlaneUpdatedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlaneUpdatedEventArgs__Class** type_info;
        inline app::PlaneUpdatedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::PlaneUpdatedEventArgs__Class>(type_info, "UnityEngine.Experimental.XR", "PlaneUpdatedEventArgs");
        }
        inline app::PlaneUpdatedEventArgs* create() {
            return il2cpp::create_object<app::PlaneUpdatedEventArgs>(get_class());
        }
        inline app::PlaneUpdatedEventArgs__Boxed* box(app::PlaneUpdatedEventArgs value) {
            return il2cpp::box_value<app::PlaneUpdatedEventArgs__Boxed>(get_class(), value);
        }
    } // namespace PlaneUpdatedEventArgs
} // namespace app::classes::types
