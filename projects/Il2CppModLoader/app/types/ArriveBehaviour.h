#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArriveBehaviour {
        namespace {
            app::ArriveBehaviour__Class* type_info_ref = nullptr;
        }
        app::ArriveBehaviour__Class** type_info = &type_info_ref;
        inline app::ArriveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ArriveBehaviour__Class>(type_info, "Moon", "ArriveBehaviour");
        }
        inline app::ArriveBehaviour* create() {
            return il2cpp::create_object<app::ArriveBehaviour>(get_class());
        }
    } // namespace ArriveBehaviour
} // namespace app::classes::types