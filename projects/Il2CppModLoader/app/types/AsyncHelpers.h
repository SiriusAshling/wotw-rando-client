#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncHelpers {
        namespace {
            app::AsyncHelpers__Class* type_info_ref = nullptr;
        }
        app::AsyncHelpers__Class** type_info = &type_info_ref;
        inline app::AsyncHelpers__Class* get_class() {
            return il2cpp::get_class<app::AsyncHelpers__Class>(type_info, "XGamingRuntime.Interop", "AsyncHelpers");
        }
        inline app::AsyncHelpers* create() {
            return il2cpp::create_object<app::AsyncHelpers>(get_class());
        }
    } // namespace AsyncHelpers
} // namespace app::classes::types