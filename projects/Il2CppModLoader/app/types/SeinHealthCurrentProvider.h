#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinHealthCurrentProvider {
        namespace {
            app::SeinHealthCurrentProvider__Class* type_info_ref = nullptr;
        }
        app::SeinHealthCurrentProvider__Class** type_info = &type_info_ref;
        inline app::SeinHealthCurrentProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinHealthCurrentProvider__Class>(type_info, "", "SeinHealthCurrentProvider");
        }
        inline app::SeinHealthCurrentProvider* create() {
            return il2cpp::create_object<app::SeinHealthCurrentProvider>(get_class());
        }
    } // namespace SeinHealthCurrentProvider
} // namespace app::classes::types