#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Grounding_Quality__Enum {
        namespace {
            app::Grounding_Quality__Enum__Class* type_info_ref = nullptr;
        }
        app::Grounding_Quality__Enum__Class** type_info = &type_info_ref;
        inline app::Grounding_Quality__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Grounding_Quality__Enum__Class>(type_info, "RootMotion.FinalIK", "Grounding", "Quality");
        }
        inline app::Grounding_Quality__Enum* create() {
            return il2cpp::create_object<app::Grounding_Quality__Enum>(get_class());
        }
    } // namespace Grounding_Quality__Enum
} // namespace app::classes::types