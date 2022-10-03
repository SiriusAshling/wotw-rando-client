#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicLightSource {
        namespace {
            app::DynamicLightSource__Class* type_info_ref = nullptr;
        }
        app::DynamicLightSource__Class** type_info = &type_info_ref;
        inline app::DynamicLightSource__Class* get_class() {
            return il2cpp::get_class<app::DynamicLightSource__Class>(type_info, "", "DynamicLightSource");
        }
        inline app::DynamicLightSource* create() {
            return il2cpp::create_object<app::DynamicLightSource>(get_class());
        }
    } // namespace DynamicLightSource
} // namespace app::classes::types
