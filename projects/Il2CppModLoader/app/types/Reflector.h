#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Reflector {
        namespace {
            app::Reflector__Class* type_info_ref = nullptr;
        }
        app::Reflector__Class** type_info = &type_info_ref;
        inline app::Reflector__Class* get_class() {
            return il2cpp::get_class<app::Reflector__Class>(type_info, "", "Reflector");
        }
        inline app::Reflector* create() {
            return il2cpp::create_object<app::Reflector>(get_class());
        }
    } // namespace Reflector
} // namespace app::classes::types