#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Char__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Char__Array__Class** type_info;
        inline app::Char__Array__Class* get_class() {
            return il2cpp::get_class<app::Char__Array__Class>(type_info, "System", "Char[]");
        }
        inline app::Char__Array* create() {
            return il2cpp::create_object<app::Char__Array>(get_class());
        }
    } // namespace Char__Array
} // namespace app::classes::types
