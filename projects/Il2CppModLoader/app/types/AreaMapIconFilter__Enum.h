#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AreaMapIconFilter__Enum {
        namespace {
            app::AreaMapIconFilter__Enum__Class* type_info_ref = nullptr;
        }
        app::AreaMapIconFilter__Enum__Class** type_info = &type_info_ref;
        inline app::AreaMapIconFilter__Enum__Class* get_class() {
            return il2cpp::get_class<app::AreaMapIconFilter__Enum__Class>(type_info, "", "AreaMapIconFilter");
        }
        inline app::AreaMapIconFilter__Enum* create() {
            return il2cpp::create_object<app::AreaMapIconFilter__Enum>(get_class());
        }
    } // namespace AreaMapIconFilter__Enum
} // namespace app::classes::types
