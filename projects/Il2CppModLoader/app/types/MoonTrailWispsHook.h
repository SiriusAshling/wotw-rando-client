#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTrailWispsHook {
        namespace {
            app::MoonTrailWispsHook__Class* type_info_ref = nullptr;
        }
        app::MoonTrailWispsHook__Class** type_info = &type_info_ref;
        inline app::MoonTrailWispsHook__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailWispsHook__Class>(type_info, "", "MoonTrailWispsHook");
        }
        inline app::MoonTrailWispsHook* create() {
            return il2cpp::create_object<app::MoonTrailWispsHook>(get_class());
        }
    } // namespace MoonTrailWispsHook
} // namespace app::classes::types