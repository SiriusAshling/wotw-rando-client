#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyEntity__Array {
        namespace {
            app::LegacyEntity__Array__Class* type_info_ref = nullptr;
        }
        app::LegacyEntity__Array__Class** type_info = &type_info_ref;
        inline app::LegacyEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyEntity__Array__Class>(type_info, "", "LegacyEntity[]");
        }
        inline app::LegacyEntity__Array* create() {
            return il2cpp::create_object<app::LegacyEntity__Array>(get_class());
        }
    } // namespace LegacyEntity__Array
} // namespace app::classes::types