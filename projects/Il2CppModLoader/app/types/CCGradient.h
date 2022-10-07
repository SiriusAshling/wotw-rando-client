#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCGradient {
        namespace {
            app::CCGradient__Class* type_info_ref = nullptr;
        }
        app::CCGradient__Class** type_info = &type_info_ref;
        inline app::CCGradient__Class* get_class() {
            return il2cpp::get_class<app::CCGradient__Class>(type_info, "", "CCGradient");
        }
        inline app::CCGradient* create() {
            return il2cpp::create_object<app::CCGradient>(get_class());
        }
        inline app::CCGradient__Array* create_array(int size) {
            return il2cpp::array_new<app::CCGradient__Array>(get_class(), size);
        }
        inline app::CCGradient__Array* create_array(const std::vector<app::CCGradient*>& items) {
            return il2cpp::array_new<app::CCGradient__Array>(get_class(), items);
        }
    } // namespace CCGradient
} // namespace app::classes::types