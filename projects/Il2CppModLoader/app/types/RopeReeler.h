#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RopeReeler {
        namespace {
            app::RopeReeler__Class* type_info_ref = nullptr;
        }
        app::RopeReeler__Class** type_info = &type_info_ref;
        inline app::RopeReeler__Class* get_class() {
            return il2cpp::get_class<app::RopeReeler__Class>(type_info, "", "RopeReeler");
        }
        inline app::RopeReeler* create() {
            return il2cpp::create_object<app::RopeReeler>(get_class());
        }
    } // namespace RopeReeler
} // namespace app::classes::types
