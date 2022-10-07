#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITriangle__Array {
        namespace {
            app::ITriangle__Array__Class* type_info_ref = nullptr;
        }
        app::ITriangle__Array__Class** type_info = &type_info_ref;
        inline app::ITriangle__Array__Class* get_class() {
            return il2cpp::get_class<app::ITriangle__Array__Class>(type_info, "TriangleNet.Geometry", "ITriangle[]");
        }
        inline app::ITriangle__Array* create() {
            return il2cpp::create_object<app::ITriangle__Array>(get_class());
        }
    } // namespace ITriangle__Array
} // namespace app::classes::types