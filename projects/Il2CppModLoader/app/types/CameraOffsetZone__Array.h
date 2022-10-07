#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetZone__Array {
        namespace {
            app::CameraOffsetZone__Array__Class* type_info_ref = nullptr;
        }
        app::CameraOffsetZone__Array__Class** type_info = &type_info_ref;
        inline app::CameraOffsetZone__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetZone__Array__Class>(type_info, "", "CameraOffsetZone[]");
        }
        inline app::CameraOffsetZone__Array* create() {
            return il2cpp::create_object<app::CameraOffsetZone__Array>(get_class());
        }
    } // namespace CameraOffsetZone__Array
} // namespace app::classes::types