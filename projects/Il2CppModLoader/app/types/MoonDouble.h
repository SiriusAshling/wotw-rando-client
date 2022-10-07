#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonDouble {
        namespace {
            app::MoonDouble__Class* type_info_ref = nullptr;
        }
        app::MoonDouble__Class** type_info = &type_info_ref;
        inline app::MoonDouble__Class* get_class() {
            return il2cpp::get_class<app::MoonDouble__Class>(type_info, "Moon", "MoonDouble");
        }
        inline app::MoonDouble* create() {
            return il2cpp::create_object<app::MoonDouble>(get_class());
        }
    } // namespace MoonDouble
} // namespace app::classes::types