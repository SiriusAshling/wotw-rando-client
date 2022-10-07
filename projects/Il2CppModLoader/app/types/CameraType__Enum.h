#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraType__Enum {
        namespace {
            app::CameraType__Enum__Class* type_info_ref = nullptr;
        }
        app::CameraType__Enum__Class** type_info = &type_info_ref;
        inline app::CameraType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CameraType__Enum__Class>(type_info, "UnityEngine", "CameraType");
        }
        inline app::CameraType__Enum* create() {
            return il2cpp::create_object<app::CameraType__Enum>(get_class());
        }
    } // namespace CameraType__Enum
} // namespace app::classes::types