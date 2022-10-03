#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeNameHandling__Enum {
        namespace {
            app::TypeNameHandling__Enum__Class* type_info_ref = nullptr;
        }
        app::TypeNameHandling__Enum__Class** type_info = &type_info_ref;
        inline app::TypeNameHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::TypeNameHandling__Enum__Class>(type_info, "Newtonsoft.Json", "TypeNameHandling");
        }
        inline app::TypeNameHandling__Enum* create() {
            return il2cpp::create_object<app::TypeNameHandling__Enum>(get_class());
        }
    } // namespace TypeNameHandling__Enum
} // namespace app::classes::types
