#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeToken {
        namespace {
            app::DateTimeToken__Class* type_info_ref = nullptr;
        }
        app::DateTimeToken__Class** type_info = &type_info_ref;
        inline app::DateTimeToken__Class* get_class() {
            return il2cpp::get_class<app::DateTimeToken__Class>(type_info, "System", "DateTimeToken");
        }
        inline app::DateTimeToken* create() {
            return il2cpp::create_object<app::DateTimeToken>(get_class());
        }
        inline app::DateTimeToken__Boxed* box(app::DateTimeToken value) {
            return il2cpp::box_value<app::DateTimeToken__Boxed>(get_class(), value);
        }
    } // namespace DateTimeToken
} // namespace app::classes::types