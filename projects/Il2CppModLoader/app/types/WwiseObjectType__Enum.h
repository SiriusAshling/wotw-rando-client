#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseObjectType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WwiseObjectType__Enum__Class** type_info;
        inline app::WwiseObjectType__Enum__Class* get_class() {
            return il2cpp::get_class<app::WwiseObjectType__Enum__Class>(type_info, "", "WwiseObjectType");
        }
        inline app::WwiseObjectType__Enum* create() {
            return il2cpp::create_object<app::WwiseObjectType__Enum>(get_class());
        }
    } // namespace WwiseObjectType__Enum
} // namespace app::classes::types