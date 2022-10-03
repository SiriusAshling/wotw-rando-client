#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceMenuScreenNotificationSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceMenuScreenNotificationSystem__Class** type_info;
        inline app::RaceMenuScreenNotificationSystem__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreenNotificationSystem__Class>(type_info, "", "RaceMenuScreenNotificationSystem");
        }
        inline app::RaceMenuScreenNotificationSystem* create() {
            return il2cpp::create_object<app::RaceMenuScreenNotificationSystem>(get_class());
        }
        inline app::RaceMenuScreenNotificationSystem__Array* create_array(int size) {
            return il2cpp::array_new<app::RaceMenuScreenNotificationSystem__Array>(get_class(), size);
        }
    } // namespace RaceMenuScreenNotificationSystem
} // namespace app::classes::types
