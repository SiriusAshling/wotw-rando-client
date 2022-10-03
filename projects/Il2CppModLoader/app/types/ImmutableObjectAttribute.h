#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ImmutableObjectAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ImmutableObjectAttribute__Class** type_info;
        inline app::ImmutableObjectAttribute__Class* get_class() {
            return il2cpp::get_class<app::ImmutableObjectAttribute__Class>(type_info, "System.ComponentModel", "ImmutableObjectAttribute");
        }
        inline app::ImmutableObjectAttribute* create() {
            return il2cpp::create_object<app::ImmutableObjectAttribute>(get_class());
        }
    } // namespace ImmutableObjectAttribute
} // namespace app::classes::types
