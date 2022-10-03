#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinEnergyMaxVisualNormalizedProvider {
        namespace {
            app::SeinEnergyMaxVisualNormalizedProvider__Class* type_info_ref = nullptr;
        }
        app::SeinEnergyMaxVisualNormalizedProvider__Class** type_info = &type_info_ref;
        inline app::SeinEnergyMaxVisualNormalizedProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinEnergyMaxVisualNormalizedProvider__Class>(type_info, "", "SeinEnergyMaxVisualNormalizedProvider");
        }
        inline app::SeinEnergyMaxVisualNormalizedProvider* create() {
            return il2cpp::create_object<app::SeinEnergyMaxVisualNormalizedProvider>(get_class());
        }
    } // namespace SeinEnergyMaxVisualNormalizedProvider
} // namespace app::classes::types
