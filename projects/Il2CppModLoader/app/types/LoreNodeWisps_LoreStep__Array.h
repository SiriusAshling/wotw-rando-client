#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoreNodeWisps_LoreStep__Array {
        namespace {
            app::LoreNodeWisps_LoreStep__Array__Class* type_info_ref = nullptr;
        }
        app::LoreNodeWisps_LoreStep__Array__Class** type_info = &type_info_ref;
        inline app::LoreNodeWisps_LoreStep__Array__Class* get_class() {
            return il2cpp::get_class<app::LoreNodeWisps_LoreStep__Array__Class>(type_info, "", "LoreNodeWisps+LoreStep[]");
        }
        inline app::LoreNodeWisps_LoreStep__Array* create() {
            return il2cpp::create_object<app::LoreNodeWisps_LoreStep__Array>(get_class());
        }
    } // namespace LoreNodeWisps_LoreStep__Array
} // namespace app::classes::types