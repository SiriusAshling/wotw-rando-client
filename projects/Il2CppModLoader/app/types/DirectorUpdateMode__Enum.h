#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DirectorUpdateMode__Enum {
        namespace {
            app::DirectorUpdateMode__Enum__Class* type_info_ref = nullptr;
        }
        app::DirectorUpdateMode__Enum__Class** type_info = &type_info_ref;
        inline app::DirectorUpdateMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::DirectorUpdateMode__Enum__Class>(type_info, "UnityEngine.Playables", "DirectorUpdateMode");
        }
        inline app::DirectorUpdateMode__Enum* create() {
            return il2cpp::create_object<app::DirectorUpdateMode__Enum>(get_class());
        }
    } // namespace DirectorUpdateMode__Enum
} // namespace app::classes::types
