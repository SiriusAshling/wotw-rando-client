#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowWorldMapAction {
        namespace {
            app::ShowWorldMapAction__Class* type_info_ref = nullptr;
        }
        app::ShowWorldMapAction__Class** type_info = &type_info_ref;
        inline app::ShowWorldMapAction__Class* get_class() {
            return il2cpp::get_class<app::ShowWorldMapAction__Class>(type_info, "", "ShowWorldMapAction");
        }
        inline app::ShowWorldMapAction* create() {
            return il2cpp::create_object<app::ShowWorldMapAction>(get_class());
        }
    } // namespace ShowWorldMapAction
} // namespace app::classes::types