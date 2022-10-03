#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardEntityReactions {
        namespace {
            app::LizardEntityReactions__Class* type_info_ref = nullptr;
        }
        app::LizardEntityReactions__Class** type_info = &type_info_ref;
        inline app::LizardEntityReactions__Class* get_class() {
            return il2cpp::get_class<app::LizardEntityReactions__Class>(type_info, "", "LizardEntityReactions");
        }
        inline app::LizardEntityReactions* create() {
            return il2cpp::create_object<app::LizardEntityReactions>(get_class());
        }
    } // namespace LizardEntityReactions
} // namespace app::classes::types
