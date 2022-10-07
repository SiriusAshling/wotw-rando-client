#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinHealthVisualMinProvider {
        namespace {
            app::SeinHealthVisualMinProvider__Class* type_info_ref = nullptr;
        }
        app::SeinHealthVisualMinProvider__Class** type_info = &type_info_ref;
        inline app::SeinHealthVisualMinProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinHealthVisualMinProvider__Class>(type_info, "", "SeinHealthVisualMinProvider");
        }
        inline app::SeinHealthVisualMinProvider* create() {
            return il2cpp::create_object<app::SeinHealthVisualMinProvider>(get_class());
        }
    } // namespace SeinHealthVisualMinProvider
} // namespace app::classes::types