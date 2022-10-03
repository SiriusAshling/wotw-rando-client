#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StatScreenDisplayFilter__Array {
        namespace {
            app::StatScreenDisplayFilter__Array__Class* type_info_ref = nullptr;
        }
        app::StatScreenDisplayFilter__Array__Class** type_info = &type_info_ref;
        inline app::StatScreenDisplayFilter__Array__Class* get_class() {
            return il2cpp::get_class<app::StatScreenDisplayFilter__Array__Class>(type_info, "", "StatScreenDisplayFilter[]");
        }
        inline app::StatScreenDisplayFilter__Array* create() {
            return il2cpp::create_object<app::StatScreenDisplayFilter__Array>(get_class());
        }
    } // namespace StatScreenDisplayFilter__Array
} // namespace app::classes::types
