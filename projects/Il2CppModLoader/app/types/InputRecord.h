#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputRecord {
        namespace {
            app::InputRecord__Class* type_info_ref = nullptr;
        }
        app::InputRecord__Class** type_info = &type_info_ref;
        inline app::InputRecord__Class* get_class() {
            return il2cpp::get_class<app::InputRecord__Class>(type_info, "System", "InputRecord");
        }
        inline app::InputRecord* create() {
            return il2cpp::create_object<app::InputRecord>(get_class());
        }
        inline app::InputRecord__Boxed* box(app::InputRecord value) {
            return il2cpp::box_value<app::InputRecord__Boxed>(get_class(), value);
        }
    } // namespace InputRecord
} // namespace app::classes::types
