#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HornBugPlaceholder {
        namespace {
            app::HornBugPlaceholder__Class* type_info_ref = nullptr;
        }
        app::HornBugPlaceholder__Class** type_info = &type_info_ref;
        inline app::HornBugPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::HornBugPlaceholder__Class>(type_info, "", "HornBugPlaceholder");
        }
        inline app::HornBugPlaceholder* create() {
            return il2cpp::create_object<app::HornBugPlaceholder>(get_class());
        }
    } // namespace HornBugPlaceholder
} // namespace app::classes::types
