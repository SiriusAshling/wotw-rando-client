#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TouchWalls_EffectorLink__Array {
        namespace {
            app::TouchWalls_EffectorLink__Array__Class* type_info_ref = nullptr;
        }
        app::TouchWalls_EffectorLink__Array__Class** type_info = &type_info_ref;
        inline app::TouchWalls_EffectorLink__Array__Class* get_class() {
            return il2cpp::get_class<app::TouchWalls_EffectorLink__Array__Class>(type_info, "RootMotion.Demos", "TouchWalls+EffectorLink[]");
        }
        inline app::TouchWalls_EffectorLink__Array* create() {
            return il2cpp::create_object<app::TouchWalls_EffectorLink__Array>(get_class());
        }
    } // namespace TouchWalls_EffectorLink__Array
} // namespace app::classes::types