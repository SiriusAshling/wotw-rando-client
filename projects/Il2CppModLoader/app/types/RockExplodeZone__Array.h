#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockExplodeZone__Array {
        namespace {
            app::RockExplodeZone__Array__Class* type_info_ref = nullptr;
        }
        app::RockExplodeZone__Array__Class** type_info = &type_info_ref;
        inline app::RockExplodeZone__Array__Class* get_class() {
            return il2cpp::get_class<app::RockExplodeZone__Array__Class>(type_info, "", "RockExplodeZone[]");
        }
        inline app::RockExplodeZone__Array* create() {
            return il2cpp::create_object<app::RockExplodeZone__Array>(get_class());
        }
    } // namespace RockExplodeZone__Array
} // namespace app::classes::types
