#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StomperLogic {
        namespace {
            app::StomperLogic__Class* type_info_ref = nullptr;
        }
        app::StomperLogic__Class** type_info = &type_info_ref;
        inline app::StomperLogic__Class* get_class() {
            return il2cpp::get_class<app::StomperLogic__Class>(type_info, "", "StomperLogic");
        }
        inline app::StomperLogic* create() {
            return il2cpp::create_object<app::StomperLogic>(get_class());
        }
    } // namespace StomperLogic
} // namespace app::classes::types