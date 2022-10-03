#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericPuppetID__Enum {
        namespace {
            app::GenericPuppetID__Enum__Class* type_info_ref = nullptr;
        }
        app::GenericPuppetID__Enum__Class** type_info = &type_info_ref;
        inline app::GenericPuppetID__Enum__Class* get_class() {
            return il2cpp::get_class<app::GenericPuppetID__Enum__Class>(type_info, "", "GenericPuppetID");
        }
        inline app::GenericPuppetID__Enum* create() {
            return il2cpp::create_object<app::GenericPuppetID__Enum>(get_class());
        }
    } // namespace GenericPuppetID__Enum
} // namespace app::classes::types
