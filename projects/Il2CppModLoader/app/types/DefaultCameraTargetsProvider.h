#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultCameraTargetsProvider {
        namespace {
            app::DefaultCameraTargetsProvider__Class* type_info_ref = nullptr;
        }
        app::DefaultCameraTargetsProvider__Class** type_info = &type_info_ref;
        inline app::DefaultCameraTargetsProvider__Class* get_class() {
            return il2cpp::get_class<app::DefaultCameraTargetsProvider__Class>(type_info, "", "DefaultCameraTargetsProvider");
        }
        inline app::DefaultCameraTargetsProvider* create() {
            return il2cpp::create_object<app::DefaultCameraTargetsProvider>(get_class());
        }
    } // namespace DefaultCameraTargetsProvider
} // namespace app::classes::types