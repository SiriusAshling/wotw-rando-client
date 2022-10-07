#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrogChaseBehaviour {
        namespace {
            app::FrogChaseBehaviour__Class* type_info_ref = nullptr;
        }
        app::FrogChaseBehaviour__Class** type_info = &type_info_ref;
        inline app::FrogChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FrogChaseBehaviour__Class>(type_info, "", "FrogChaseBehaviour");
        }
        inline app::FrogChaseBehaviour* create() {
            return il2cpp::create_object<app::FrogChaseBehaviour>(get_class());
        }
    } // namespace FrogChaseBehaviour
} // namespace app::classes::types