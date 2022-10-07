#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartBody {
        namespace {
            app::CartBody__Class* type_info_ref = nullptr;
        }
        app::CartBody__Class** type_info = &type_info_ref;
        inline app::CartBody__Class* get_class() {
            return il2cpp::get_class<app::CartBody__Class>(type_info, "", "CartBody");
        }
        inline app::CartBody* create() {
            return il2cpp::create_object<app::CartBody>(get_class());
        }
    } // namespace CartBody
} // namespace app::classes::types