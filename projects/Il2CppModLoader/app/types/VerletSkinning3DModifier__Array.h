#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletSkinning3DModifier__Array {
        namespace {
            app::VerletSkinning3DModifier__Array__Class* type_info_ref = nullptr;
        }
        app::VerletSkinning3DModifier__Array__Class** type_info = &type_info_ref;
        inline app::VerletSkinning3DModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletSkinning3DModifier__Array__Class>(type_info, "", "VerletSkinning3DModifier[]");
        }
        inline app::VerletSkinning3DModifier__Array* create() {
            return il2cpp::create_object<app::VerletSkinning3DModifier__Array>(get_class());
        }
    } // namespace VerletSkinning3DModifier__Array
} // namespace app::classes::types