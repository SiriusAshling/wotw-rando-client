#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollectionChangeAction__Enum {
        namespace {
            app::CollectionChangeAction__Enum__Class* type_info_ref = nullptr;
        }
        app::CollectionChangeAction__Enum__Class** type_info = &type_info_ref;
        inline app::CollectionChangeAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::CollectionChangeAction__Enum__Class>(type_info, "System.ComponentModel", "CollectionChangeAction");
        }
        inline app::CollectionChangeAction__Enum* create() {
            return il2cpp::create_object<app::CollectionChangeAction__Enum>(get_class());
        }
    } // namespace CollectionChangeAction__Enum
} // namespace app::classes::types
