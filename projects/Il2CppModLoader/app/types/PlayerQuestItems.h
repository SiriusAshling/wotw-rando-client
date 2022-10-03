#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerQuestItems {
        namespace {
            app::PlayerQuestItems__Class* type_info_ref = nullptr;
        }
        app::PlayerQuestItems__Class** type_info = &type_info_ref;
        inline app::PlayerQuestItems__Class* get_class() {
            return il2cpp::get_class<app::PlayerQuestItems__Class>(type_info, "", "PlayerQuestItems");
        }
        inline app::PlayerQuestItems* create() {
            return il2cpp::create_object<app::PlayerQuestItems>(get_class());
        }
    } // namespace PlayerQuestItems
} // namespace app::classes::types
