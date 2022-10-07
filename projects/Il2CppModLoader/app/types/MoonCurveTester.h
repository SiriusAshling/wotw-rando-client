#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonCurveTester {
        namespace {
            app::MoonCurveTester__Class* type_info_ref = nullptr;
        }
        app::MoonCurveTester__Class** type_info = &type_info_ref;
        inline app::MoonCurveTester__Class* get_class() {
            return il2cpp::get_class<app::MoonCurveTester__Class>(type_info, "", "MoonCurveTester");
        }
        inline app::MoonCurveTester* create() {
            return il2cpp::create_object<app::MoonCurveTester>(get_class());
        }
    } // namespace MoonCurveTester
} // namespace app::classes::types