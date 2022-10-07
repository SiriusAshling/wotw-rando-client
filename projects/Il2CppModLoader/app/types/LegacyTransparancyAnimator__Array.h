#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyTransparancyAnimator__Array {
        namespace {
            app::LegacyTransparancyAnimator__Array__Class* type_info_ref = nullptr;
        }
        app::LegacyTransparancyAnimator__Array__Class** type_info = &type_info_ref;
        inline app::LegacyTransparancyAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyTransparancyAnimator__Array__Class>(type_info, "", "LegacyTransparancyAnimator[]");
        }
        inline app::LegacyTransparancyAnimator__Array* create() {
            return il2cpp::create_object<app::LegacyTransparancyAnimator__Array>(get_class());
        }
    } // namespace LegacyTransparancyAnimator__Array
} // namespace app::classes::types