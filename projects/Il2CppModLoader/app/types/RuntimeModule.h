#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeModule {
        namespace {
            app::RuntimeModule__Class* type_info_ref = nullptr;
        }
        app::RuntimeModule__Class** type_info = &type_info_ref;
        inline app::RuntimeModule__Class* get_class() {
            return il2cpp::get_class<app::RuntimeModule__Class>(type_info, "System.Reflection", "RuntimeModule");
        }
        inline app::RuntimeModule* create() {
            return il2cpp::create_object<app::RuntimeModule>(get_class());
        }
    } // namespace RuntimeModule
} // namespace app::classes::types
