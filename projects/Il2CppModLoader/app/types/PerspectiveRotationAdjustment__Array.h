#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PerspectiveRotationAdjustment__Array {
        namespace {
            app::PerspectiveRotationAdjustment__Array__Class* type_info_ref = nullptr;
        }
        app::PerspectiveRotationAdjustment__Array__Class** type_info = &type_info_ref;
        inline app::PerspectiveRotationAdjustment__Array__Class* get_class() {
            return il2cpp::get_class<app::PerspectiveRotationAdjustment__Array__Class>(type_info, "", "PerspectiveRotationAdjustment[]");
        }
        inline app::PerspectiveRotationAdjustment__Array* create() {
            return il2cpp::create_object<app::PerspectiveRotationAdjustment__Array>(get_class());
        }
    } // namespace PerspectiveRotationAdjustment__Array
} // namespace app::classes::types
