#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CachedAxisInput {
        namespace {
            app::CachedAxisInput__Class* type_info_ref = nullptr;
        }
        app::CachedAxisInput__Class** type_info = &type_info_ref;
        inline app::CachedAxisInput__Class* get_class() {
            return il2cpp::get_class<app::CachedAxisInput__Class>(type_info, "SmartInput", "CachedAxisInput");
        }
        inline app::CachedAxisInput* create() {
            return il2cpp::create_object<app::CachedAxisInput>(get_class());
        }
    } // namespace CachedAxisInput
} // namespace app::classes::types