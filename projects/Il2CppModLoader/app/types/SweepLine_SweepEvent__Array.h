#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SweepLine_SweepEvent__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SweepLine_SweepEvent__Array__Class** type_info;
        inline app::SweepLine_SweepEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::SweepLine_SweepEvent__Array__Class>(type_info, "TriangleNet.Meshing.Algorithm", "SweepLine+SweepEvent[]");
        }
        inline app::SweepLine_SweepEvent__Array* create() {
            return il2cpp::create_object<app::SweepLine_SweepEvent__Array>(get_class());
        }
    } // namespace SweepLine_SweepEvent__Array
} // namespace app::classes::types
