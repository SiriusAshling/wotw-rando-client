#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DigZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DigZone__Class** type_info;
        inline app::DigZone__Class* get_class() {
            return il2cpp::get_class<app::DigZone__Class>(type_info, "", "DigZone");
        }
        inline app::DigZone* create() {
            return il2cpp::create_object<app::DigZone>(get_class());
        }
        inline app::DigZone__Array* create_array(int size) {
            return il2cpp::array_new<app::DigZone__Array>(get_class(), size);
        }
        inline app::DigZone__Array* create_array(const std::vector<app::DigZone*>& items) {
            return il2cpp::array_new<app::DigZone__Array>(get_class(), items);
        }
    } // namespace DigZone
} // namespace app::classes::types