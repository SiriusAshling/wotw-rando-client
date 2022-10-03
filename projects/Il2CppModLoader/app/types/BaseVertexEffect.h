#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseVertexEffect {
        namespace {
            app::BaseVertexEffect__Class* type_info_ref = nullptr;
        }
        app::BaseVertexEffect__Class** type_info = &type_info_ref;
        inline app::BaseVertexEffect__Class* get_class() {
            return il2cpp::get_class<app::BaseVertexEffect__Class>(type_info, "UnityEngine.UI", "BaseVertexEffect");
        }
        inline app::BaseVertexEffect* create() {
            return il2cpp::create_object<app::BaseVertexEffect>(get_class());
        }
    } // namespace BaseVertexEffect
} // namespace app::classes::types
