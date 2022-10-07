#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ByteStateMap_Mapping__Array {
        namespace {
            app::ByteStateMap_Mapping__Array__Class* type_info_ref = nullptr;
        }
        app::ByteStateMap_Mapping__Array__Class** type_info = &type_info_ref;
        inline app::ByteStateMap_Mapping__Array__Class* get_class() {
            return il2cpp::get_class<app::ByteStateMap_Mapping__Array__Class>(type_info, "", "ByteStateMap+Mapping[]");
        }
        inline app::ByteStateMap_Mapping__Array* create() {
            return il2cpp::create_object<app::ByteStateMap_Mapping__Array>(get_class());
        }
    } // namespace ByteStateMap_Mapping__Array
} // namespace app::classes::types