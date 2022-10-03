#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FoxBehaviour {
        namespace {
            app::FoxBehaviour__Class* type_info_ref = nullptr;
        }
        app::FoxBehaviour__Class** type_info = &type_info_ref;
        inline app::FoxBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FoxBehaviour__Class>(type_info, "", "FoxBehaviour");
        }
        inline app::FoxBehaviour* create() {
            return il2cpp::create_object<app::FoxBehaviour>(get_class());
        }
    } // namespace FoxBehaviour
} // namespace app::classes::types
