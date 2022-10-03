#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoMethodInfo {
        namespace {
            app::MonoMethodInfo__Class* type_info_ref = nullptr;
        }
        app::MonoMethodInfo__Class** type_info = &type_info_ref;
        inline app::MonoMethodInfo__Class* get_class() {
            return il2cpp::get_class<app::MonoMethodInfo__Class>(type_info, "System.Reflection", "MonoMethodInfo");
        }
        inline app::MonoMethodInfo* create() {
            return il2cpp::create_object<app::MonoMethodInfo>(get_class());
        }
        inline app::MonoMethodInfo__Boxed* box(app::MonoMethodInfo value) {
            return il2cpp::box_value<app::MonoMethodInfo__Boxed>(get_class(), value);
        }
    } // namespace MonoMethodInfo
} // namespace app::classes::types
