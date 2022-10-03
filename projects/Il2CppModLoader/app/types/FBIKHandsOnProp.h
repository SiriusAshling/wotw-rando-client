#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FBIKHandsOnProp {
        namespace {
            app::FBIKHandsOnProp__Class* type_info_ref = nullptr;
        }
        app::FBIKHandsOnProp__Class** type_info = &type_info_ref;
        inline app::FBIKHandsOnProp__Class* get_class() {
            return il2cpp::get_class<app::FBIKHandsOnProp__Class>(type_info, "RootMotion.Demos", "FBIKHandsOnProp");
        }
        inline app::FBIKHandsOnProp* create() {
            return il2cpp::create_object<app::FBIKHandsOnProp>(get_class());
        }
    } // namespace FBIKHandsOnProp
} // namespace app::classes::types
