#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GamePlaceholder {
        namespace {
            app::GamePlaceholder__Class* type_info_ref = nullptr;
        }
        app::GamePlaceholder__Class** type_info = &type_info_ref;
        inline app::GamePlaceholder__Class* get_class() {
            return il2cpp::get_class<app::GamePlaceholder__Class>(type_info, "", "GamePlaceholder");
        }
        inline app::GamePlaceholder* create() {
            return il2cpp::create_object<app::GamePlaceholder>(get_class());
        }
    } // namespace GamePlaceholder
} // namespace app::classes::types