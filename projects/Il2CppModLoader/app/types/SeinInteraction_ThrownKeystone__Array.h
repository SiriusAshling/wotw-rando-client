#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinInteraction_ThrownKeystone__Array {
        namespace {
            app::SeinInteraction_ThrownKeystone__Array__Class* type_info_ref = nullptr;
        }
        app::SeinInteraction_ThrownKeystone__Array__Class** type_info = &type_info_ref;
        inline app::SeinInteraction_ThrownKeystone__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinInteraction_ThrownKeystone__Array__Class>(type_info, "", "SeinInteraction+ThrownKeystone[]");
        }
        inline app::SeinInteraction_ThrownKeystone__Array* create() {
            return il2cpp::create_object<app::SeinInteraction_ThrownKeystone__Array>(get_class());
        }
    } // namespace SeinInteraction_ThrownKeystone__Array
} // namespace app::classes::types