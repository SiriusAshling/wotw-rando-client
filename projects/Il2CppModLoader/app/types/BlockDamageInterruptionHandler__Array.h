#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlockDamageInterruptionHandler__Array {
        namespace {
            app::BlockDamageInterruptionHandler__Array__Class* type_info_ref = nullptr;
        }
        app::BlockDamageInterruptionHandler__Array__Class** type_info = &type_info_ref;
        inline app::BlockDamageInterruptionHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::BlockDamageInterruptionHandler__Array__Class>(type_info, "Moon", "BlockDamageInterruptionHandler[]");
        }
        inline app::BlockDamageInterruptionHandler__Array* create() {
            return il2cpp::create_object<app::BlockDamageInterruptionHandler__Array>(get_class());
        }
    } // namespace BlockDamageInterruptionHandler__Array
} // namespace app::classes::types