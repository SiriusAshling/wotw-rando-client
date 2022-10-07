#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseSettings {
        namespace {
            app::WwiseSettings__Class* type_info_ref = nullptr;
        }
        app::WwiseSettings__Class** type_info = &type_info_ref;
        inline app::WwiseSettings__Class* get_class() {
            return il2cpp::get_class<app::WwiseSettings__Class>(type_info, "", "WwiseSettings");
        }
        inline app::WwiseSettings* create() {
            return il2cpp::create_object<app::WwiseSettings>(get_class());
        }
    } // namespace WwiseSettings
} // namespace app::classes::types