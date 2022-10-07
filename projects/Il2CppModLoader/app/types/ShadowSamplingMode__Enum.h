#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShadowSamplingMode__Enum {
        namespace {
            app::ShadowSamplingMode__Enum__Class* type_info_ref = nullptr;
        }
        app::ShadowSamplingMode__Enum__Class** type_info = &type_info_ref;
        inline app::ShadowSamplingMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ShadowSamplingMode__Enum__Class>(type_info, "UnityEngine.Rendering", "ShadowSamplingMode");
        }
        inline app::ShadowSamplingMode__Enum* create() {
            return il2cpp::create_object<app::ShadowSamplingMode__Enum>(get_class());
        }
    } // namespace ShadowSamplingMode__Enum
} // namespace app::classes::types