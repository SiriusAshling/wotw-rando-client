#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneSanityB {
        namespace {
            app::SceneSanityB__Class* type_info_ref = nullptr;
        }
        app::SceneSanityB__Class** type_info = &type_info_ref;
        inline app::SceneSanityB__Class* get_class() {
            return il2cpp::get_class<app::SceneSanityB__Class>(type_info, "", "SceneSanityB");
        }
        inline app::SceneSanityB* create() {
            return il2cpp::create_object<app::SceneSanityB>(get_class());
        }
    } // namespace SceneSanityB
} // namespace app::classes::types
