#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberSwarmer {
        namespace {
            app::UberSwarmer__Class* type_info_ref = nullptr;
        }
        app::UberSwarmer__Class** type_info = &type_info_ref;
        inline app::UberSwarmer__Class* get_class() {
            return il2cpp::get_class<app::UberSwarmer__Class>(type_info, "", "UberSwarmer");
        }
        inline app::UberSwarmer* create() {
            return il2cpp::create_object<app::UberSwarmer>(get_class());
        }
        inline app::UberSwarmer__Array* create_array(int size) {
            return il2cpp::array_new<app::UberSwarmer__Array>(get_class(), size);
        }
    } // namespace UberSwarmer
} // namespace app::classes::types
