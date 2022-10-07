#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RedirectionPortal {
        namespace {
            app::RedirectionPortal__Class* type_info_ref = nullptr;
        }
        app::RedirectionPortal__Class** type_info = &type_info_ref;
        inline app::RedirectionPortal__Class* get_class() {
            return il2cpp::get_class<app::RedirectionPortal__Class>(type_info, "", "RedirectionPortal");
        }
        inline app::RedirectionPortal* create() {
            return il2cpp::create_object<app::RedirectionPortal>(get_class());
        }
    } // namespace RedirectionPortal
} // namespace app::classes::types