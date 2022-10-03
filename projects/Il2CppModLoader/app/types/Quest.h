#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Quest {
        namespace {
            app::Quest__Class* type_info_ref = nullptr;
        }
        app::Quest__Class** type_info = &type_info_ref;
        inline app::Quest__Class* get_class() {
            return il2cpp::get_class<app::Quest__Class>(type_info, "", "Quest");
        }
        inline app::Quest* create() {
            return il2cpp::create_object<app::Quest>(get_class());
        }
        inline app::Quest__Array* create_array(int size) {
            return il2cpp::array_new<app::Quest__Array>(get_class(), size);
        }
    } // namespace Quest
} // namespace app::classes::types
