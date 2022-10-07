#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Finger__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Finger__Array__Class** type_info;
        inline app::Finger__Array__Class* get_class() {
            return il2cpp::get_class<app::Finger__Array__Class>(type_info, "RootMotion.FinalIK", "Finger[]");
        }
        inline app::Finger__Array* create() {
            return il2cpp::create_object<app::Finger__Array>(get_class());
        }
    } // namespace Finger__Array
} // namespace app::classes::types