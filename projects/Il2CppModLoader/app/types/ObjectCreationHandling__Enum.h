#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectCreationHandling__Enum {
        namespace {
            app::ObjectCreationHandling__Enum__Class* type_info_ref = nullptr;
        }
        app::ObjectCreationHandling__Enum__Class** type_info = &type_info_ref;
        inline app::ObjectCreationHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::ObjectCreationHandling__Enum__Class>(type_info, "Newtonsoft.Json", "ObjectCreationHandling");
        }
        inline app::ObjectCreationHandling__Enum* create() {
            return il2cpp::create_object<app::ObjectCreationHandling__Enum>(get_class());
        }
    } // namespace ObjectCreationHandling__Enum
} // namespace app::classes::types