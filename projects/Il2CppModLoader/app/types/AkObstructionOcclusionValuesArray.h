#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkObstructionOcclusionValuesArray {
        namespace {
            app::AkObstructionOcclusionValuesArray__Class* type_info_ref = nullptr;
        }
        app::AkObstructionOcclusionValuesArray__Class** type_info = &type_info_ref;
        inline app::AkObstructionOcclusionValuesArray__Class* get_class() {
            return il2cpp::get_class<app::AkObstructionOcclusionValuesArray__Class>(type_info, "", "AkObstructionOcclusionValuesArray");
        }
        inline app::AkObstructionOcclusionValuesArray* create() {
            return il2cpp::create_object<app::AkObstructionOcclusionValuesArray>(get_class());
        }
    } // namespace AkObstructionOcclusionValuesArray
} // namespace app::classes::types