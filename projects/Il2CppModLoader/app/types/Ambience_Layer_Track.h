#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ambience_Layer_Track {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Ambience_Layer_Track__Class** type_info;
        inline app::Ambience_Layer_Track__Class* get_class() {
            return il2cpp::get_nested_class<app::Ambience_Layer_Track__Class>(type_info, "Core", "Ambience+Layer", "Track");
        }
        inline app::Ambience_Layer_Track* create() {
            return il2cpp::create_object<app::Ambience_Layer_Track>(get_class());
        }
        inline app::Ambience_Layer_Track__Array* create_array(int size) {
            return il2cpp::array_new<app::Ambience_Layer_Track__Array>(get_class(), size);
        }
        inline app::Ambience_Layer_Track__Array* create_array(const std::vector<app::Ambience_Layer_Track*>& items) {
            return il2cpp::array_new<app::Ambience_Layer_Track__Array>(get_class(), items);
        }
    } // namespace Ambience_Layer_Track
} // namespace app::classes::types