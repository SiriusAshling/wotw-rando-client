#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum {
        namespace {
            app::SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum__Class** type_info = &type_info_ref;
        inline app::SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "SupportedRenderingFeatures", "ReflectionProbeSupportFlags");
        }
        inline app::SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum* create() {
            return il2cpp::create_object<app::SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum>(get_class());
        }
    } // namespace SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum
} // namespace app::classes::types
