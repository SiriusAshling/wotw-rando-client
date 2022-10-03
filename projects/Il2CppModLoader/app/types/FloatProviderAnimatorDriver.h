#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatProviderAnimatorDriver {
        namespace {
            app::FloatProviderAnimatorDriver__Class* type_info_ref = nullptr;
        }
        app::FloatProviderAnimatorDriver__Class** type_info = &type_info_ref;
        inline app::FloatProviderAnimatorDriver__Class* get_class() {
            return il2cpp::get_class<app::FloatProviderAnimatorDriver__Class>(type_info, "", "FloatProviderAnimatorDriver");
        }
        inline app::FloatProviderAnimatorDriver* create() {
            return il2cpp::create_object<app::FloatProviderAnimatorDriver>(get_class());
        }
    } // namespace FloatProviderAnimatorDriver
} // namespace app::classes::types
