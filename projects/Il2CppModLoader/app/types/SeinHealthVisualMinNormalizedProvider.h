#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinHealthVisualMinNormalizedProvider {
        namespace {
            app::SeinHealthVisualMinNormalizedProvider__Class* type_info_ref = nullptr;
        }
        app::SeinHealthVisualMinNormalizedProvider__Class** type_info = &type_info_ref;
        inline app::SeinHealthVisualMinNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinHealthVisualMinNormalizedProvider__Class>(type_info, "", "SeinHealthVisualMinNormalizedProvider");
        }
        inline app::SeinHealthVisualMinNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinHealthVisualMinNormalizedProvider>(get_class());
        }
    } // namespace SeinHealthVisualMinNormalizedProvider
} // namespace app::classes::types
