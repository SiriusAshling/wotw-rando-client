#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCTextMarkedColorer {
        namespace {
            app::CCTextMarkedColorer__Class* type_info_ref = nullptr;
        }
        app::CCTextMarkedColorer__Class** type_info = &type_info_ref;
        inline app::CCTextMarkedColorer__Class* get_class() {
            return il2cpp::get_class<app::CCTextMarkedColorer__Class>(type_info, "", "CCTextMarkedColorer");
        }
        inline app::CCTextMarkedColorer* create() {
            return il2cpp::create_object<app::CCTextMarkedColorer>(get_class());
        }
    } // namespace CCTextMarkedColorer
} // namespace app::classes::types