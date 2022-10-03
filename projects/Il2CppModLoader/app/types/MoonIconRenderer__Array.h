#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonIconRenderer__Array {
        namespace {
            app::MoonIconRenderer__Array__Class* type_info_ref = nullptr;
        }
        app::MoonIconRenderer__Array__Class** type_info = &type_info_ref;
        inline app::MoonIconRenderer__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonIconRenderer__Array__Class>(type_info, "CatlikeCoding.TextBox", "MoonIconRenderer[]");
        }
        inline app::MoonIconRenderer__Array* create() {
            return il2cpp::create_object<app::MoonIconRenderer__Array>(get_class());
        }
    } // namespace MoonIconRenderer__Array
} // namespace app::classes::types
