#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalDataStoreSlot__Array {
        namespace {
            app::LocalDataStoreSlot__Array__Class* type_info_ref = nullptr;
        }
        app::LocalDataStoreSlot__Array__Class** type_info = &type_info_ref;
        inline app::LocalDataStoreSlot__Array__Class* get_class() {
            return il2cpp::get_class<app::LocalDataStoreSlot__Array__Class>(type_info, "System", "LocalDataStoreSlot[]");
        }
        inline app::LocalDataStoreSlot__Array* create() {
            return il2cpp::create_object<app::LocalDataStoreSlot__Array>(get_class());
        }
    } // namespace LocalDataStoreSlot__Array
} // namespace app::classes::types