#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WindVent {
        namespace {
            app::WindVent__Class* type_info_ref = nullptr;
        }
        app::WindVent__Class** type_info = &type_info_ref;
        inline app::WindVent__Class* get_class() {
            return il2cpp::get_class<app::WindVent__Class>(type_info, "", "WindVent");
        }
        inline app::WindVent* create() {
            return il2cpp::create_object<app::WindVent>(get_class());
        }
    } // namespace WindVent
} // namespace app::classes::types