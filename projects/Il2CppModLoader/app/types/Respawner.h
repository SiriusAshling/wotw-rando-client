#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Respawner {
        namespace {
            app::Respawner__Class* type_info_ref = nullptr;
        }
        app::Respawner__Class** type_info = &type_info_ref;
        inline app::Respawner__Class* get_class() {
            return il2cpp::get_class<app::Respawner__Class>(type_info, "", "Respawner");
        }
        inline app::Respawner* create() {
            return il2cpp::create_object<app::Respawner>(get_class());
        }
    } // namespace Respawner
} // namespace app::classes::types