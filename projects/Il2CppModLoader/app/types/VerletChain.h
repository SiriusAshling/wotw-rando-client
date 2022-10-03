#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletChain {
        namespace {
            app::VerletChain__Class* type_info_ref = nullptr;
        }
        app::VerletChain__Class** type_info = &type_info_ref;
        inline app::VerletChain__Class* get_class() {
            return il2cpp::get_class<app::VerletChain__Class>(type_info, "", "VerletChain");
        }
        inline app::VerletChain* create() {
            return il2cpp::create_object<app::VerletChain>(get_class());
        }
    } // namespace VerletChain
} // namespace app::classes::types
