#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CurrentSystemTimeZone {
        namespace {
            app::CurrentSystemTimeZone__Class* type_info_ref = nullptr;
        }
        app::CurrentSystemTimeZone__Class** type_info = &type_info_ref;
        inline app::CurrentSystemTimeZone__Class* get_class() {
            return il2cpp::get_class<app::CurrentSystemTimeZone__Class>(type_info, "System", "CurrentSystemTimeZone");
        }
        inline app::CurrentSystemTimeZone* create() {
            return il2cpp::create_object<app::CurrentSystemTimeZone>(get_class());
        }
    } // namespace CurrentSystemTimeZone
} // namespace app::classes::types
