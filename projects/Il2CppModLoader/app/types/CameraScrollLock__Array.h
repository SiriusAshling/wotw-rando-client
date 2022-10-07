#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraScrollLock__Array {
        namespace {
            app::CameraScrollLock__Array__Class* type_info_ref = nullptr;
        }
        app::CameraScrollLock__Array__Class** type_info = &type_info_ref;
        inline app::CameraScrollLock__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraScrollLock__Array__Class>(type_info, "", "CameraScrollLock[]");
        }
        inline app::CameraScrollLock__Array* create() {
            return il2cpp::create_object<app::CameraScrollLock__Array>(get_class());
        }
    } // namespace CameraScrollLock__Array
} // namespace app::classes::types