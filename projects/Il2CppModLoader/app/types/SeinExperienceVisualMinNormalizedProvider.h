#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinExperienceVisualMinNormalizedProvider {
        namespace {
            app::SeinExperienceVisualMinNormalizedProvider__Class* type_info_ref = nullptr;
        }
        app::SeinExperienceVisualMinNormalizedProvider__Class** type_info = &type_info_ref;
        inline app::SeinExperienceVisualMinNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinExperienceVisualMinNormalizedProvider__Class>(type_info, "", "SeinExperienceVisualMinNormalizedProvider");
        }
        inline app::SeinExperienceVisualMinNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinExperienceVisualMinNormalizedProvider>(get_class());
        }
    } // namespace SeinExperienceVisualMinNormalizedProvider
} // namespace app::classes::types