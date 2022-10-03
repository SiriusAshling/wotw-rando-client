#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TriangleQuadTree_QuadNode__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TriangleQuadTree_QuadNode__Array__Class** type_info;
        inline app::TriangleQuadTree_QuadNode__Array__Class* get_class() {
            return il2cpp::get_class<app::TriangleQuadTree_QuadNode__Array__Class>(type_info, "TriangleNet.Tools", "TriangleQuadTree+QuadNode[]");
        }
        inline app::TriangleQuadTree_QuadNode__Array* create() {
            return il2cpp::create_object<app::TriangleQuadTree_QuadNode__Array>(get_class());
        }
    } // namespace TriangleQuadTree_QuadNode__Array
} // namespace app::classes::types
