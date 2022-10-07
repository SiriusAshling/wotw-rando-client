#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeystoneDoorSlot {
        namespace {
            app::KeystoneDoorSlot__Class* type_info_ref = nullptr;
        }
        app::KeystoneDoorSlot__Class** type_info = &type_info_ref;
        inline app::KeystoneDoorSlot__Class* get_class() {
            return il2cpp::get_class<app::KeystoneDoorSlot__Class>(type_info, "", "KeystoneDoorSlot");
        }
        inline app::KeystoneDoorSlot* create() {
            return il2cpp::create_object<app::KeystoneDoorSlot>(get_class());
        }
        inline app::KeystoneDoorSlot__Array* create_array(int size) {
            return il2cpp::array_new<app::KeystoneDoorSlot__Array>(get_class(), size);
        }
        inline app::KeystoneDoorSlot__Array* create_array(const std::vector<app::KeystoneDoorSlot*>& items) {
            return il2cpp::array_new<app::KeystoneDoorSlot__Array>(get_class(), items);
        }
    } // namespace KeystoneDoorSlot
} // namespace app::classes::types