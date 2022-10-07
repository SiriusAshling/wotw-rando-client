#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinEnergyCurrentProvider {
        namespace {
            app::SeinEnergyCurrentProvider__Class* type_info_ref = nullptr;
        }
        app::SeinEnergyCurrentProvider__Class** type_info = &type_info_ref;
        inline app::SeinEnergyCurrentProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyCurrentProvider__Class>(type_info, "", "SeinEnergyCurrentProvider");
        }
        inline app::SeinEnergyCurrentProvider* create() {
            return il2cpp::create_object<app::SeinEnergyCurrentProvider>(get_class());
        }
    } // namespace SeinEnergyCurrentProvider
} // namespace app::classes::types