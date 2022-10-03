#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserPulsator {
        namespace {
            app::LaserPulsator__Class* type_info_ref = nullptr;
        }
        app::LaserPulsator__Class** type_info = &type_info_ref;
        inline app::LaserPulsator__Class* get_class() {
            return il2cpp::get_class<app::LaserPulsator__Class>(type_info, "", "LaserPulsator");
        }
        inline app::LaserPulsator* create() {
            return il2cpp::create_object<app::LaserPulsator>(get_class());
        }
    } // namespace LaserPulsator
} // namespace app::classes::types
