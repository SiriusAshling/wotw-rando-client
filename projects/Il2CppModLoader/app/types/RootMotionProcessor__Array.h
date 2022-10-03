#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RootMotionProcessor__Array {
        namespace {
            app::RootMotionProcessor__Array__Class* type_info_ref = nullptr;
        }
        app::RootMotionProcessor__Array__Class** type_info = &type_info_ref;
        inline app::RootMotionProcessor__Array__Class* get_class() {
            return il2cpp::get_class<app::RootMotionProcessor__Array__Class>(type_info, "", "RootMotionProcessor[]");
        }
        inline app::RootMotionProcessor__Array* create() {
            return il2cpp::create_object<app::RootMotionProcessor__Array>(get_class());
        }
    } // namespace RootMotionProcessor__Array
} // namespace app::classes::types
