#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldEvents_Item {
        namespace {
            app::WorldEvents_Item__Class* type_info_ref = nullptr;
        }
        app::WorldEvents_Item__Class** type_info = &type_info_ref;
        inline app::WorldEvents_Item__Class* get_class() {
            return il2cpp::get_nested_class<app::WorldEvents_Item__Class>(type_info, "", "WorldEvents", "Item");
        }
        inline app::WorldEvents_Item* create() {
            return il2cpp::create_object<app::WorldEvents_Item>(get_class());
        }
        inline app::WorldEvents_Item__Array* create_array(int size) {
            return il2cpp::array_new<app::WorldEvents_Item__Array>(get_class(), size);
        }
    } // namespace WorldEvents_Item
} // namespace app::classes::types
