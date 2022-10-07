#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalPrivilegeCheckResult {
        namespace {
            app::XalPrivilegeCheckResult__Class* type_info_ref = nullptr;
        }
        app::XalPrivilegeCheckResult__Class** type_info = &type_info_ref;
        inline app::XalPrivilegeCheckResult__Class* get_class() {
            return il2cpp::get_class<app::XalPrivilegeCheckResult__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalPrivilegeCheckResult");
        }
        inline app::XalPrivilegeCheckResult* create() {
            return il2cpp::create_object<app::XalPrivilegeCheckResult>(get_class());
        }
        inline app::XalPrivilegeCheckResult__Boxed* box(app::XalPrivilegeCheckResult value) {
            return il2cpp::box_value<app::XalPrivilegeCheckResult__Boxed>(get_class(), value);
        }
    } // namespace XalPrivilegeCheckResult
} // namespace app::classes::types