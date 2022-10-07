#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MapmakerUIDetails {
        namespace {
            app::MapmakerUIDetails__Class* type_info_ref = nullptr;
        }
        app::MapmakerUIDetails__Class** type_info = &type_info_ref;
        inline app::MapmakerUIDetails__Class* get_class() {
            return il2cpp::get_class<app::MapmakerUIDetails__Class>(type_info, "", "MapmakerUIDetails");
        }
        inline app::MapmakerUIDetails* create() {
            return il2cpp::create_object<app::MapmakerUIDetails>(get_class());
        }
    } // namespace MapmakerUIDetails
} // namespace app::classes::types