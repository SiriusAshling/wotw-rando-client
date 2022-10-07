#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnparentTrailRenderer {
        namespace {
            app::UnparentTrailRenderer__Class* type_info_ref = nullptr;
        }
        app::UnparentTrailRenderer__Class** type_info = &type_info_ref;
        inline app::UnparentTrailRenderer__Class* get_class() {
            return il2cpp::get_class<app::UnparentTrailRenderer__Class>(type_info, "", "UnparentTrailRenderer");
        }
        inline app::UnparentTrailRenderer* create() {
            return il2cpp::create_object<app::UnparentTrailRenderer>(get_class());
        }
        inline app::UnparentTrailRenderer__Array* create_array(int size) {
            return il2cpp::array_new<app::UnparentTrailRenderer__Array>(get_class(), size);
        }
        inline app::UnparentTrailRenderer__Array* create_array(const std::vector<app::UnparentTrailRenderer*>& items) {
            return il2cpp::array_new<app::UnparentTrailRenderer__Array>(get_class(), items);
        }
    } // namespace UnparentTrailRenderer
} // namespace app::classes::types