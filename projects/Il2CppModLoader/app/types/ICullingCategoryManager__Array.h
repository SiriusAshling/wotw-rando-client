#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICullingCategoryManager__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICullingCategoryManager__Array__Class** type_info;
        inline app::ICullingCategoryManager__Array__Class* get_class() {
            return il2cpp::get_class<app::ICullingCategoryManager__Array__Class>(type_info, "Moon.Rendering", "ICullingCategoryManager[]");
        }
        inline app::ICullingCategoryManager__Array* create() {
            return il2cpp::create_object<app::ICullingCategoryManager__Array>(get_class());
        }
    } // namespace ICullingCategoryManager__Array
} // namespace app::classes::types
