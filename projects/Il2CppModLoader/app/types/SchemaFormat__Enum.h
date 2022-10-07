#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SchemaFormat__Enum {
        namespace {
            app::SchemaFormat__Enum__Class* type_info_ref = nullptr;
        }
        app::SchemaFormat__Enum__Class** type_info = &type_info_ref;
        inline app::SchemaFormat__Enum__Class* get_class() {
            return il2cpp::get_class<app::SchemaFormat__Enum__Class>(type_info, "System.Data", "SchemaFormat");
        }
        inline app::SchemaFormat__Enum* create() {
            return il2cpp::create_object<app::SchemaFormat__Enum>(get_class());
        }
    } // namespace SchemaFormat__Enum
} // namespace app::classes::types