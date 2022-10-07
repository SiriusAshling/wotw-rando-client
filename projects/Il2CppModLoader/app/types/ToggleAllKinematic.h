#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ToggleAllKinematic {
        namespace {
            app::ToggleAllKinematic__Class* type_info_ref = nullptr;
        }
        app::ToggleAllKinematic__Class** type_info = &type_info_ref;
        inline app::ToggleAllKinematic__Class* get_class() {
            return il2cpp::get_class<app::ToggleAllKinematic__Class>(type_info, "", "ToggleAllKinematic");
        }
        inline app::ToggleAllKinematic* create() {
            return il2cpp::create_object<app::ToggleAllKinematic>(get_class());
        }
    } // namespace ToggleAllKinematic
} // namespace app::classes::types