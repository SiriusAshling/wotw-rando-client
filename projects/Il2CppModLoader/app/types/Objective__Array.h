#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Objective__Array {
        namespace {
            app::Objective__Array__Class* type_info_ref = nullptr;
        }
        app::Objective__Array__Class** type_info = &type_info_ref;
        inline app::Objective__Array__Class* get_class() {
            return il2cpp::get_class<app::Objective__Array__Class>(type_info, "", "Objective[]");
        }
        inline app::Objective__Array* create() {
            return il2cpp::create_object<app::Objective__Array>(get_class());
        }
    } // namespace Objective__Array
} // namespace app::classes::types