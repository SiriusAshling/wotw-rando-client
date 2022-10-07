#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateParseHandling__Enum {
        namespace {
            app::DateParseHandling__Enum__Class* type_info_ref = nullptr;
        }
        app::DateParseHandling__Enum__Class** type_info = &type_info_ref;
        inline app::DateParseHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::DateParseHandling__Enum__Class>(type_info, "Newtonsoft.Json", "DateParseHandling");
        }
        inline app::DateParseHandling__Enum* create() {
            return il2cpp::create_object<app::DateParseHandling__Enum>(get_class());
        }
    } // namespace DateParseHandling__Enum
} // namespace app::classes::types