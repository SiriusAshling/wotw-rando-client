#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TestTagHelper {
        namespace {
            app::TestTagHelper__Class* type_info_ref = nullptr;
        }
        app::TestTagHelper__Class** type_info = &type_info_ref;
        inline app::TestTagHelper__Class* get_class() {
            return il2cpp::get_class<app::TestTagHelper__Class>(type_info, "", "TestTagHelper");
        }
        inline app::TestTagHelper* create() {
            return il2cpp::create_object<app::TestTagHelper>(get_class());
        }
    } // namespace TestTagHelper
} // namespace app::classes::types