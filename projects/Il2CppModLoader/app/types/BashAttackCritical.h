#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BashAttackCritical {
        namespace {
            app::BashAttackCritical__Class* type_info_ref = nullptr;
        }
        app::BashAttackCritical__Class** type_info = &type_info_ref;
        inline app::BashAttackCritical__Class* get_class() {
            return il2cpp::get_class<app::BashAttackCritical__Class>(type_info, "", "BashAttackCritical");
        }
        inline app::BashAttackCritical* create() {
            return il2cpp::create_object<app::BashAttackCritical>(get_class());
        }
    } // namespace BashAttackCritical
} // namespace app::classes::types