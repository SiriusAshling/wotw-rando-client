#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugIdleBehaviour {
        namespace {
            app::SneezeSlugIdleBehaviour__Class* type_info_ref = nullptr;
        }
        app::SneezeSlugIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::SneezeSlugIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugIdleBehaviour__Class>(type_info, "", "SneezeSlugIdleBehaviour");
        }
        inline app::SneezeSlugIdleBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugIdleBehaviour>(get_class());
        }
    } // namespace SneezeSlugIdleBehaviour
} // namespace app::classes::types
