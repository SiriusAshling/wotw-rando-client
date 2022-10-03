#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MapStone {
        namespace {
            app::MapStone__Class* type_info_ref = nullptr;
        }
        app::MapStone__Class** type_info = &type_info_ref;
        inline app::MapStone__Class* get_class() {
            return il2cpp::get_class<app::MapStone__Class>(type_info, "", "MapStone");
        }
        inline app::MapStone* create() {
            return il2cpp::create_object<app::MapStone>(get_class());
        }
    } // namespace MapStone
} // namespace app::classes::types
