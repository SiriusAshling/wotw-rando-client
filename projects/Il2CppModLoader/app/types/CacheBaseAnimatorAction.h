#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CacheBaseAnimatorAction {
        namespace {
            app::CacheBaseAnimatorAction__Class* type_info_ref = nullptr;
        }
        app::CacheBaseAnimatorAction__Class** type_info = &type_info_ref;
        inline app::CacheBaseAnimatorAction__Class* get_class() {
            return il2cpp::get_class<app::CacheBaseAnimatorAction__Class>(type_info, "", "CacheBaseAnimatorAction");
        }
        inline app::CacheBaseAnimatorAction* create() {
            return il2cpp::create_object<app::CacheBaseAnimatorAction>(get_class());
        }
    } // namespace CacheBaseAnimatorAction
} // namespace app::classes::types