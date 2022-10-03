#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityDataObject {
        namespace {
            app::EntityDataObject__Class* type_info_ref = nullptr;
        }
        app::EntityDataObject__Class** type_info = &type_info_ref;
        inline app::EntityDataObject__Class* get_class() {
            return il2cpp::get_class<app::EntityDataObject__Class>(type_info, "PlayFab.ProfilesModels", "EntityDataObject");
        }
        inline app::EntityDataObject* create() {
            return il2cpp::create_object<app::EntityDataObject>(get_class());
        }
        inline app::EntityDataObject__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityDataObject__Array>(get_class(), size);
        }
    } // namespace EntityDataObject
} // namespace app::classes::types
