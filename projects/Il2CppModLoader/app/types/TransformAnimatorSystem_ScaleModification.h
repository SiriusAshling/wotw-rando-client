#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransformAnimatorSystem_ScaleModification {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TransformAnimatorSystem_ScaleModification__Class** type_info;
        inline app::TransformAnimatorSystem_ScaleModification__Class* get_class() {
            return il2cpp::get_nested_class<app::TransformAnimatorSystem_ScaleModification__Class>(type_info, "Moon.Timeline", "TransformAnimatorSystem", "ScaleModification");
        }
        inline app::TransformAnimatorSystem_ScaleModification* create() {
            return il2cpp::create_object<app::TransformAnimatorSystem_ScaleModification>(get_class());
        }
        inline app::TransformAnimatorSystem_ScaleModification__Boxed* box(app::TransformAnimatorSystem_ScaleModification value) {
            return il2cpp::box_value<app::TransformAnimatorSystem_ScaleModification__Boxed>(get_class(), value);
        }
    } // namespace TransformAnimatorSystem_ScaleModification
} // namespace app::classes::types