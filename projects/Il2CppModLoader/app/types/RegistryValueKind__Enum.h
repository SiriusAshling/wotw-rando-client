#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegistryValueKind__Enum {
        namespace {
            app::RegistryValueKind__Enum__Class* type_info_ref = nullptr;
        }
        app::RegistryValueKind__Enum__Class** type_info = &type_info_ref;
        inline app::RegistryValueKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::RegistryValueKind__Enum__Class>(type_info, "Microsoft.Win32", "RegistryValueKind");
        }
        inline app::RegistryValueKind__Enum* create() {
            return il2cpp::create_object<app::RegistryValueKind__Enum>(get_class());
        }
    } // namespace RegistryValueKind__Enum
} // namespace app::classes::types