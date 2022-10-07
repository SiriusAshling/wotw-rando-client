#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RetaliateShriekSettings {
        namespace {
            app::RetaliateShriekSettings__Class* type_info_ref = nullptr;
        }
        app::RetaliateShriekSettings__Class** type_info = &type_info_ref;
        inline app::RetaliateShriekSettings__Class* get_class() {
            return il2cpp::get_class<app::RetaliateShriekSettings__Class>(type_info, "", "RetaliateShriekSettings");
        }
        inline app::RetaliateShriekSettings* create() {
            return il2cpp::create_object<app::RetaliateShriekSettings>(get_class());
        }
    } // namespace RetaliateShriekSettings
} // namespace app::classes::types