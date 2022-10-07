#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BufferType__Enum {
        namespace {
            app::BufferType__Enum__Class* type_info_ref = nullptr;
        }
        app::BufferType__Enum__Class** type_info = &type_info_ref;
        inline app::BufferType__Enum__Class* get_class() {
            return il2cpp::get_class<app::BufferType__Enum__Class>(type_info, "System.Net", "BufferType");
        }
        inline app::BufferType__Enum* create() {
            return il2cpp::create_object<app::BufferType__Enum>(get_class());
        }
    } // namespace BufferType__Enum
} // namespace app::classes::types