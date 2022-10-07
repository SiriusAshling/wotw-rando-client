#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_PhysicsResetInterpolatedTransformPosition {
        namespace {
            app::EarlyUpdate_PhysicsResetInterpolatedTransformPosition__Class* type_info_ref = nullptr;
        }
        app::EarlyUpdate_PhysicsResetInterpolatedTransformPosition__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_PhysicsResetInterpolatedTransformPosition__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_PhysicsResetInterpolatedTransformPosition__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "PhysicsResetInterpolatedTransformPosition");
        }
        inline app::EarlyUpdate_PhysicsResetInterpolatedTransformPosition* create() {
            return il2cpp::create_object<app::EarlyUpdate_PhysicsResetInterpolatedTransformPosition>(get_class());
        }
        inline app::EarlyUpdate_PhysicsResetInterpolatedTransformPosition__Boxed* box(app::EarlyUpdate_PhysicsResetInterpolatedTransformPosition value) {
            return il2cpp::box_value<app::EarlyUpdate_PhysicsResetInterpolatedTransformPosition__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_PhysicsResetInterpolatedTransformPosition
} // namespace app::classes::types