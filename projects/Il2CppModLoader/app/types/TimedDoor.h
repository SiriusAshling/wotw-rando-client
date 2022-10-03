#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimedDoor {
        namespace {
            app::TimedDoor__Class* type_info_ref = nullptr;
        }
        app::TimedDoor__Class** type_info = &type_info_ref;
        inline app::TimedDoor__Class* get_class() {
            return il2cpp::get_class<app::TimedDoor__Class>(type_info, "", "TimedDoor");
        }
        inline app::TimedDoor* create() {
            return il2cpp::create_object<app::TimedDoor>(get_class());
        }
    } // namespace TimedDoor
} // namespace app::classes::types
