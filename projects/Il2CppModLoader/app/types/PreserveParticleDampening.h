#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreserveParticleDampening {
        namespace {
            app::PreserveParticleDampening__Class* type_info_ref = nullptr;
        }
        app::PreserveParticleDampening__Class** type_info = &type_info_ref;
        inline app::PreserveParticleDampening__Class* get_class() {
            return il2cpp::get_class<app::PreserveParticleDampening__Class>(type_info, "", "PreserveParticleDampening");
        }
        inline app::PreserveParticleDampening* create() {
            return il2cpp::create_object<app::PreserveParticleDampening>(get_class());
        }
    } // namespace PreserveParticleDampening
} // namespace app::classes::types