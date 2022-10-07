#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IdnElement {
        namespace {
            app::IdnElement__Class* type_info_ref = nullptr;
        }
        app::IdnElement__Class** type_info = &type_info_ref;
        inline app::IdnElement__Class* get_class() {
            return il2cpp::get_class<app::IdnElement__Class>(type_info, "System.Configuration", "IdnElement");
        }
        inline app::IdnElement* create() {
            return il2cpp::create_object<app::IdnElement>(get_class());
        }
    } // namespace IdnElement
} // namespace app::classes::types