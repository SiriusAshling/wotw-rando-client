#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GradientAlphaKey {
        namespace {
            app::GradientAlphaKey__Class* type_info_ref = nullptr;
        }
        app::GradientAlphaKey__Class** type_info = &type_info_ref;
        inline app::GradientAlphaKey__Class* get_class() {
            return il2cpp::get_class<app::GradientAlphaKey__Class>(type_info, "UnityEngine", "GradientAlphaKey");
        }
        inline app::GradientAlphaKey* create() {
            return il2cpp::create_object<app::GradientAlphaKey>(get_class());
        }
        inline app::GradientAlphaKey__Boxed* box(app::GradientAlphaKey value) {
            return il2cpp::box_value<app::GradientAlphaKey__Boxed>(get_class(), value);
        }
        inline app::GradientAlphaKey__Array* create_array(int size) {
            return il2cpp::array_new<app::GradientAlphaKey__Array>(get_class(), size);
        }
    } // namespace GradientAlphaKey
} // namespace app::classes::types
