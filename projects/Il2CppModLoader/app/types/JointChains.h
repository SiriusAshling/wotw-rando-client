#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JointChains {
        namespace {
            app::JointChains__Class* type_info_ref = nullptr;
        }
        app::JointChains__Class** type_info = &type_info_ref;
        inline app::JointChains__Class* get_class() {
            return il2cpp::get_class<app::JointChains__Class>(type_info, "Moon", "JointChains");
        }
        inline app::JointChains* create() {
            return il2cpp::create_object<app::JointChains>(get_class());
        }
    } // namespace JointChains
} // namespace app::classes::types