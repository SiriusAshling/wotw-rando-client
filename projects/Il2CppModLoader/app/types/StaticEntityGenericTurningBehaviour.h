#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StaticEntityGenericTurningBehaviour {
        namespace {
            app::StaticEntityGenericTurningBehaviour__Class* type_info_ref = nullptr;
        }
        app::StaticEntityGenericTurningBehaviour__Class** type_info = &type_info_ref;
        inline app::StaticEntityGenericTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StaticEntityGenericTurningBehaviour__Class>(type_info, "", "StaticEntityGenericTurningBehaviour");
        }
        inline app::StaticEntityGenericTurningBehaviour* create() {
            return il2cpp::create_object<app::StaticEntityGenericTurningBehaviour>(get_class());
        }
    } // namespace StaticEntityGenericTurningBehaviour
} // namespace app::classes::types