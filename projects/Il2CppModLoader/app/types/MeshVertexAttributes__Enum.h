#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeshVertexAttributes__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeshVertexAttributes__Enum__Class** type_info;
        inline app::MeshVertexAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::MeshVertexAttributes__Enum__Class>(type_info, "UnityEngine.Experimental.XR", "MeshVertexAttributes");
        }
        inline app::MeshVertexAttributes__Enum* create() {
            return il2cpp::create_object<app::MeshVertexAttributes__Enum>(get_class());
        }
    } // namespace MeshVertexAttributes__Enum
} // namespace app::classes::types