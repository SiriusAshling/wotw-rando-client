#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DisabledProperty {
        namespace {
            app::DisabledProperty__Class* type_info_ref = nullptr;
        }
        app::DisabledProperty__Class** type_info = &type_info_ref;
        inline app::DisabledProperty__Class* get_class() {
            return il2cpp::get_class<app::DisabledProperty__Class>(type_info, "UberShader", "DisabledProperty");
        }
        inline app::DisabledProperty* create() {
            return il2cpp::create_object<app::DisabledProperty>(get_class());
        }
    } // namespace DisabledProperty
} // namespace app::classes::types