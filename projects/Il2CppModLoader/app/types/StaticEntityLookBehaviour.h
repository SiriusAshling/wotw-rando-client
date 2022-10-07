#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StaticEntityLookBehaviour {
        namespace {
            app::StaticEntityLookBehaviour__Class* type_info_ref = nullptr;
        }
        app::StaticEntityLookBehaviour__Class** type_info = &type_info_ref;
        inline app::StaticEntityLookBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StaticEntityLookBehaviour__Class>(type_info, "", "StaticEntityLookBehaviour");
        }
        inline app::StaticEntityLookBehaviour* create() {
            return il2cpp::create_object<app::StaticEntityLookBehaviour>(get_class());
        }
    } // namespace StaticEntityLookBehaviour
} // namespace app::classes::types