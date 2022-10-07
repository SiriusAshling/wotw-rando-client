#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SnapTrapHookPlaceholder {
        namespace {
            app::SnapTrapHookPlaceholder__Class* type_info_ref = nullptr;
        }
        app::SnapTrapHookPlaceholder__Class** type_info = &type_info_ref;
        inline app::SnapTrapHookPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapHookPlaceholder__Class>(type_info, "", "SnapTrapHookPlaceholder");
        }
        inline app::SnapTrapHookPlaceholder* create() {
            return il2cpp::create_object<app::SnapTrapHookPlaceholder>(get_class());
        }
    } // namespace SnapTrapHookPlaceholder
} // namespace app::classes::types