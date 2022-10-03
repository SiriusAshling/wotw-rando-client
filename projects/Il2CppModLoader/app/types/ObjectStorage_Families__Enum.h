#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectStorage_Families__Enum {
        namespace {
            app::ObjectStorage_Families__Enum__Class* type_info_ref = nullptr;
        }
        app::ObjectStorage_Families__Enum__Class** type_info = &type_info_ref;
        inline app::ObjectStorage_Families__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ObjectStorage_Families__Enum__Class>(type_info, "System.Data.Common", "ObjectStorage", "Families");
        }
        inline app::ObjectStorage_Families__Enum* create() {
            return il2cpp::create_object<app::ObjectStorage_Families__Enum>(get_class());
        }
    } // namespace ObjectStorage_Families__Enum
} // namespace app::classes::types
