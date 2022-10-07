#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReferenceLoopHandling__Enum {
        namespace {
            app::ReferenceLoopHandling__Enum__Class* type_info_ref = nullptr;
        }
        app::ReferenceLoopHandling__Enum__Class** type_info = &type_info_ref;
        inline app::ReferenceLoopHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::ReferenceLoopHandling__Enum__Class>(type_info, "Newtonsoft.Json", "ReferenceLoopHandling");
        }
        inline app::ReferenceLoopHandling__Enum* create() {
            return il2cpp::create_object<app::ReferenceLoopHandling__Enum>(get_class());
        }
    } // namespace ReferenceLoopHandling__Enum
} // namespace app::classes::types