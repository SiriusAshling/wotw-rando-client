#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataRowChangeEventHandler {
        namespace {
            app::DataRowChangeEventHandler__Class* type_info_ref = nullptr;
        }
        app::DataRowChangeEventHandler__Class** type_info = &type_info_ref;
        inline app::DataRowChangeEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DataRowChangeEventHandler__Class>(type_info, "System.Data", "DataRowChangeEventHandler");
        }
        inline app::DataRowChangeEventHandler* create() {
            return il2cpp::create_object<app::DataRowChangeEventHandler>(get_class());
        }
    } // namespace DataRowChangeEventHandler
} // namespace app::classes::types
