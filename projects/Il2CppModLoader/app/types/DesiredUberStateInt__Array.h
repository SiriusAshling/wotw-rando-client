#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateInt__Array {
        namespace {
            app::DesiredUberStateInt__Array__Class* type_info_ref = nullptr;
        }
        app::DesiredUberStateInt__Array__Class** type_info = &type_info_ref;
        inline app::DesiredUberStateInt__Array__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateInt__Array__Class>(type_info, "", "DesiredUberStateInt[]");
        }
        inline app::DesiredUberStateInt__Array* create() {
            return il2cpp::create_object<app::DesiredUberStateInt__Array>(get_class());
        }
    } // namespace DesiredUberStateInt__Array
} // namespace app::classes::types
