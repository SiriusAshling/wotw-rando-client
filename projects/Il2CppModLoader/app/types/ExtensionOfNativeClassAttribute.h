#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExtensionOfNativeClassAttribute {
        namespace {
            app::ExtensionOfNativeClassAttribute__Class* type_info_ref = nullptr;
        }
        app::ExtensionOfNativeClassAttribute__Class** type_info = &type_info_ref;
        inline app::ExtensionOfNativeClassAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExtensionOfNativeClassAttribute__Class>(type_info, "UnityEngine", "ExtensionOfNativeClassAttribute");
        }
        inline app::ExtensionOfNativeClassAttribute* create() {
            return il2cpp::create_object<app::ExtensionOfNativeClassAttribute>(get_class());
        }
    } // namespace ExtensionOfNativeClassAttribute
} // namespace app::classes::types