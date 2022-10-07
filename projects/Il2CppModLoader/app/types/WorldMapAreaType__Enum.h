#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldMapAreaType__Enum {
        namespace {
            app::WorldMapAreaType__Enum__Class* type_info_ref = nullptr;
        }
        app::WorldMapAreaType__Enum__Class** type_info = &type_info_ref;
        inline app::WorldMapAreaType__Enum__Class* get_class() {
            return il2cpp::get_class<app::WorldMapAreaType__Enum__Class>(type_info, "", "WorldMapAreaType");
        }
        inline app::WorldMapAreaType__Enum* create() {
            return il2cpp::create_object<app::WorldMapAreaType__Enum>(get_class());
        }
    } // namespace WorldMapAreaType__Enum
} // namespace app::classes::types