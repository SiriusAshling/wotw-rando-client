#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MetaballRenderer {
        namespace {
            app::MetaballRenderer__Class* type_info_ref = nullptr;
        }
        app::MetaballRenderer__Class** type_info = &type_info_ref;
        inline app::MetaballRenderer__Class* get_class() {
            return il2cpp::get_class<app::MetaballRenderer__Class>(type_info, "Metaballs2D", "MetaballRenderer");
        }
        inline app::MetaballRenderer* create() {
            return il2cpp::create_object<app::MetaballRenderer>(get_class());
        }
    } // namespace MetaballRenderer
} // namespace app::classes::types
