#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WindowManager {
        namespace {
            app::WindowManager__Class* type_info_ref = nullptr;
        }
        app::WindowManager__Class** type_info = &type_info_ref;
        inline app::WindowManager__Class* get_class() {
            return il2cpp::get_class<app::WindowManager__Class>(type_info, "", "WindowManager");
        }
        inline app::WindowManager* create() {
            return il2cpp::create_object<app::WindowManager>(get_class());
        }
    } // namespace WindowManager
} // namespace app::classes::types
