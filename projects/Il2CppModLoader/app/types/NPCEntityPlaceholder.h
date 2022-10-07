#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NPCEntityPlaceholder {
        namespace {
            app::NPCEntityPlaceholder__Class* type_info_ref = nullptr;
        }
        app::NPCEntityPlaceholder__Class** type_info = &type_info_ref;
        inline app::NPCEntityPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::NPCEntityPlaceholder__Class>(type_info, "", "NPCEntityPlaceholder");
        }
        inline app::NPCEntityPlaceholder* create() {
            return il2cpp::create_object<app::NPCEntityPlaceholder>(get_class());
        }
    } // namespace NPCEntityPlaceholder
} // namespace app::classes::types