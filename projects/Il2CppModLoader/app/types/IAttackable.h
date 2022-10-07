#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAttackable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAttackable__Class** type_info;
        inline app::IAttackable__Class* get_class() {
            return il2cpp::get_class<app::IAttackable__Class>(type_info, "", "IAttackable");
        }
        inline app::IAttackable__Array* create_array(int size) {
            return il2cpp::array_new<app::IAttackable__Array>(get_class(), size);
        }
        inline app::IAttackable__Array* create_array(const std::vector<app::IAttackable*>& items) {
            return il2cpp::array_new<app::IAttackable__Array>(get_class(), items);
        }
    } // namespace IAttackable
} // namespace app::classes::types