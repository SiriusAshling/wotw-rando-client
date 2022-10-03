#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormEntity_Segment__Array {
        namespace {
            app::SandWormEntity_Segment__Array__Class* type_info_ref = nullptr;
        }
        app::SandWormEntity_Segment__Array__Class** type_info = &type_info_ref;
        inline app::SandWormEntity_Segment__Array__Class* get_class() {
            return il2cpp::get_class<app::SandWormEntity_Segment__Array__Class>(type_info, "", "SandWormEntity+Segment[]");
        }
        inline app::SandWormEntity_Segment__Array* create() {
            return il2cpp::create_object<app::SandWormEntity_Segment__Array>(get_class());
        }
    } // namespace SandWormEntity_Segment__Array
} // namespace app::classes::types
