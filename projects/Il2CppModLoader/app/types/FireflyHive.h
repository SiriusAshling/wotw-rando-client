#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FireflyHive {
        namespace {
            app::FireflyHive__Class* type_info_ref = nullptr;
        }
        app::FireflyHive__Class** type_info = &type_info_ref;
        inline app::FireflyHive__Class* get_class() {
            return il2cpp::get_class<app::FireflyHive__Class>(type_info, "", "FireflyHive");
        }
        inline app::FireflyHive* create() {
            return il2cpp::create_object<app::FireflyHive>(get_class());
        }
    } // namespace FireflyHive
} // namespace app::classes::types
