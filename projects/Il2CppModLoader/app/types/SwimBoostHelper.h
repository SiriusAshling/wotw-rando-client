#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwimBoostHelper {
        namespace {
            app::SwimBoostHelper__Class* type_info_ref = nullptr;
        }
        app::SwimBoostHelper__Class** type_info = &type_info_ref;
        inline app::SwimBoostHelper__Class* get_class() {
            return il2cpp::get_class<app::SwimBoostHelper__Class>(type_info, "", "SwimBoostHelper");
        }
        inline app::SwimBoostHelper* create() {
            return il2cpp::create_object<app::SwimBoostHelper>(get_class());
        }
    } // namespace SwimBoostHelper
} // namespace app::classes::types