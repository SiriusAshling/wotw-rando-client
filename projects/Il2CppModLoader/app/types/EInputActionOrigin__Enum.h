#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EInputActionOrigin__Enum {
        namespace {
            app::EInputActionOrigin__Enum__Class* type_info_ref = nullptr;
        }
        app::EInputActionOrigin__Enum__Class** type_info = &type_info_ref;
        inline app::EInputActionOrigin__Enum__Class* get_class() {
            return il2cpp::get_class<app::EInputActionOrigin__Enum__Class>(type_info, "Steamworks", "EInputActionOrigin");
        }
        inline app::EInputActionOrigin__Enum* create() {
            return il2cpp::create_object<app::EInputActionOrigin__Enum>(get_class());
        }
        inline app::EInputActionOrigin__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::EInputActionOrigin__Enum__Array>(get_class(), size);
        }
    } // namespace EInputActionOrigin__Enum
} // namespace app::classes::types
