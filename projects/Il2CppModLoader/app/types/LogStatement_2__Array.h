#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LogStatement_2__Array {
        namespace {
            app::LogStatement_2__Array__Class* type_info_ref = nullptr;
        }
        app::LogStatement_2__Array__Class** type_info = &type_info_ref;
        inline app::LogStatement_2__Array__Class* get_class() {
            return il2cpp::get_class<app::LogStatement_2__Array__Class>(type_info, "PlayFab.ServerModels", "LogStatement[]");
        }
        inline app::LogStatement_2__Array* create() {
            return il2cpp::create_object<app::LogStatement_2__Array>(get_class());
        }
    } // namespace LogStatement_2__Array
} // namespace app::classes::types
