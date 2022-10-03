#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeflaterManaged_DeflaterState__Enum {
        namespace {
            app::DeflaterManaged_DeflaterState__Enum__Class* type_info_ref = nullptr;
        }
        app::DeflaterManaged_DeflaterState__Enum__Class** type_info = &type_info_ref;
        inline app::DeflaterManaged_DeflaterState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DeflaterManaged_DeflaterState__Enum__Class>(type_info, "Unity.IO.Compression", "DeflaterManaged", "DeflaterState");
        }
        inline app::DeflaterManaged_DeflaterState__Enum* create() {
            return il2cpp::create_object<app::DeflaterManaged_DeflaterState__Enum>(get_class());
        }
    } // namespace DeflaterManaged_DeflaterState__Enum
} // namespace app::classes::types
