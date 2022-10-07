#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vector3Int {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Vector3Int__Class** type_info;
        inline app::Vector3Int__Class* get_class() {
            return il2cpp::get_class<app::Vector3Int__Class>(type_info, "UnityEngine", "Vector3Int");
        }
        inline app::Vector3Int* create() {
            return il2cpp::create_object<app::Vector3Int>(get_class());
        }
        inline app::Vector3Int__Boxed* box(app::Vector3Int value) {
            return il2cpp::box_value<app::Vector3Int__Boxed>(get_class(), value);
        }
    } // namespace Vector3Int
} // namespace app::classes::types