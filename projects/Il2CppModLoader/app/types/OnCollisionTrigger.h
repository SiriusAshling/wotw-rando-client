#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnCollisionTrigger {
        namespace {
            app::OnCollisionTrigger__Class* type_info_ref = nullptr;
        }
        app::OnCollisionTrigger__Class** type_info = &type_info_ref;
        inline app::OnCollisionTrigger__Class* get_class() {
            return il2cpp::get_class<app::OnCollisionTrigger__Class>(type_info, "", "OnCollisionTrigger");
        }
        inline app::OnCollisionTrigger* create() {
            return il2cpp::create_object<app::OnCollisionTrigger>(get_class());
        }
    } // namespace OnCollisionTrigger
} // namespace app::classes::types
