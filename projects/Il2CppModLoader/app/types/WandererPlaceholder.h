#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WandererPlaceholder {
        namespace {
            app::WandererPlaceholder__Class* type_info_ref = nullptr;
        }
        app::WandererPlaceholder__Class** type_info = &type_info_ref;
        inline app::WandererPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::WandererPlaceholder__Class>(type_info, "", "WandererPlaceholder");
        }
        inline app::WandererPlaceholder* create() {
            return il2cpp::create_object<app::WandererPlaceholder>(get_class());
        }
    } // namespace WandererPlaceholder
} // namespace app::classes::types
