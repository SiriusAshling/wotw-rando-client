#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDamageReciever__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDamageReciever__Array__Class** type_info;
        inline app::IDamageReciever__Array__Class* get_class() {
            return il2cpp::get_class<app::IDamageReciever__Array__Class>(type_info, "", "IDamageReciever[]");
        }
        inline app::IDamageReciever__Array* create() {
            return il2cpp::create_object<app::IDamageReciever__Array>(get_class());
        }
    } // namespace IDamageReciever__Array
} // namespace app::classes::types