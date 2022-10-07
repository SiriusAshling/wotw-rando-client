#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RetaliateShriek {
        namespace {
            app::RetaliateShriek__Class* type_info_ref = nullptr;
        }
        app::RetaliateShriek__Class** type_info = &type_info_ref;
        inline app::RetaliateShriek__Class* get_class() {
            return il2cpp::get_class<app::RetaliateShriek__Class>(type_info, "", "RetaliateShriek");
        }
        inline app::RetaliateShriek* create() {
            return il2cpp::create_object<app::RetaliateShriek>(get_class());
        }
    } // namespace RetaliateShriek
} // namespace app::classes::types