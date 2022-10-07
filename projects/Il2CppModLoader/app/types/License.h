#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace License {
        namespace {
            app::License__Class* type_info_ref = nullptr;
        }
        app::License__Class** type_info = &type_info_ref;
        inline app::License__Class* get_class() {
            return il2cpp::get_class<app::License__Class>(type_info, "System.ComponentModel", "License");
        }
        inline app::License* create() {
            return il2cpp::create_object<app::License>(get_class());
        }
    } // namespace License
} // namespace app::classes::types