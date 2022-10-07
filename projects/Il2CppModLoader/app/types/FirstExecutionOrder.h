#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FirstExecutionOrder {
        namespace {
            app::FirstExecutionOrder__Class* type_info_ref = nullptr;
        }
        app::FirstExecutionOrder__Class** type_info = &type_info_ref;
        inline app::FirstExecutionOrder__Class* get_class() {
            return il2cpp::get_class<app::FirstExecutionOrder__Class>(type_info, "", "FirstExecutionOrder");
        }
        inline app::FirstExecutionOrder* create() {
            return il2cpp::create_object<app::FirstExecutionOrder>(get_class());
        }
    } // namespace FirstExecutionOrder
} // namespace app::classes::types