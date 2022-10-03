#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightBakingOutput {
        namespace {
            app::LightBakingOutput__Class* type_info_ref = nullptr;
        }
        app::LightBakingOutput__Class** type_info = &type_info_ref;
        inline app::LightBakingOutput__Class* get_class() {
            return il2cpp::get_class<app::LightBakingOutput__Class>(type_info, "UnityEngine", "LightBakingOutput");
        }
        inline app::LightBakingOutput* create() {
            return il2cpp::create_object<app::LightBakingOutput>(get_class());
        }
        inline app::LightBakingOutput__Boxed* box(app::LightBakingOutput value) {
            return il2cpp::box_value<app::LightBakingOutput__Boxed>(get_class(), value);
        }
    } // namespace LightBakingOutput
} // namespace app::classes::types
