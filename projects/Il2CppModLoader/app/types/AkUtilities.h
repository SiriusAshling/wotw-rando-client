#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkUtilities {
        namespace {
            app::AkUtilities__Class* type_info_ref = nullptr;
        }
        app::AkUtilities__Class** type_info = &type_info_ref;
        inline app::AkUtilities__Class* get_class() {
            return il2cpp::get_class<app::AkUtilities__Class>(type_info, "", "AkUtilities");
        }
        inline app::AkUtilities* create() {
            return il2cpp::create_object<app::AkUtilities>(get_class());
        }
    } // namespace AkUtilities
} // namespace app::classes::types