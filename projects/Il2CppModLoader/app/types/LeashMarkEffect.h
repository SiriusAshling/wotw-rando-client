#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeashMarkEffect {
        namespace {
            app::LeashMarkEffect__Class* type_info_ref = nullptr;
        }
        app::LeashMarkEffect__Class** type_info = &type_info_ref;
        inline app::LeashMarkEffect__Class* get_class() {
            return il2cpp::get_class<app::LeashMarkEffect__Class>(type_info, "", "LeashMarkEffect");
        }
        inline app::LeashMarkEffect* create() {
            return il2cpp::create_object<app::LeashMarkEffect>(get_class());
        }
        inline app::LeashMarkEffect__Array* create_array(int size) {
            return il2cpp::array_new<app::LeashMarkEffect__Array>(get_class(), size);
        }
    } // namespace LeashMarkEffect
} // namespace app::classes::types
