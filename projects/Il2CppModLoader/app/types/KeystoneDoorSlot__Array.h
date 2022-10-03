#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeystoneDoorSlot__Array {
        namespace {
            app::KeystoneDoorSlot__Array__Class* type_info_ref = nullptr;
        }
        app::KeystoneDoorSlot__Array__Class** type_info = &type_info_ref;
        inline app::KeystoneDoorSlot__Array__Class* get_class() {
            return il2cpp::get_class<app::KeystoneDoorSlot__Array__Class>(type_info, "", "KeystoneDoorSlot[]");
        }
        inline app::KeystoneDoorSlot__Array* create() {
            return il2cpp::create_object<app::KeystoneDoorSlot__Array>(get_class());
        }
    } // namespace KeystoneDoorSlot__Array
} // namespace app::classes::types
