#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MortarCreep {
        namespace {
            app::MortarCreep__Class* type_info_ref = nullptr;
        }
        app::MortarCreep__Class** type_info = &type_info_ref;
        inline app::MortarCreep__Class* get_class() {
            return il2cpp::get_class<app::MortarCreep__Class>(type_info, "", "MortarCreep");
        }
        inline app::MortarCreep* create() {
            return il2cpp::create_object<app::MortarCreep>(get_class());
        }
    } // namespace MortarCreep
} // namespace app::classes::types