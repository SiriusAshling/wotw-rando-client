#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TargetMatch {
        namespace {
            app::TargetMatch__Class* type_info_ref = nullptr;
        }
        app::TargetMatch__Class** type_info = &type_info_ref;
        inline app::TargetMatch__Class* get_class() {
            return il2cpp::get_class<app::TargetMatch__Class>(type_info, "", "TargetMatch");
        }
        inline app::TargetMatch* create() {
            return il2cpp::create_object<app::TargetMatch>(get_class());
        }
    } // namespace TargetMatch
} // namespace app::classes::types
