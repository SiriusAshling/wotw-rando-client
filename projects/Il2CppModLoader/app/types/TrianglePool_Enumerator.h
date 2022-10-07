#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TrianglePool_Enumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TrianglePool_Enumerator__Class** type_info;
        inline app::TrianglePool_Enumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::TrianglePool_Enumerator__Class>(type_info, "TriangleNet", "TrianglePool", "Enumerator");
        }
        inline app::TrianglePool_Enumerator* create() {
            return il2cpp::create_object<app::TrianglePool_Enumerator>(get_class());
        }
    } // namespace TrianglePool_Enumerator
} // namespace app::classes::types