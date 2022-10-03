#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeZoneHandling__Enum {
        namespace {
            app::DateTimeZoneHandling__Enum__Class* type_info_ref = nullptr;
        }
        app::DateTimeZoneHandling__Enum__Class** type_info = &type_info_ref;
        inline app::DateTimeZoneHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::DateTimeZoneHandling__Enum__Class>(type_info, "Newtonsoft.Json", "DateTimeZoneHandling");
        }
        inline app::DateTimeZoneHandling__Enum* create() {
            return il2cpp::create_object<app::DateTimeZoneHandling__Enum>(get_class());
        }
    } // namespace DateTimeZoneHandling__Enum
} // namespace app::classes::types
