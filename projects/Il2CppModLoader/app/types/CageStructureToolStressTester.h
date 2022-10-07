#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CageStructureToolStressTester {
        namespace {
            app::CageStructureToolStressTester__Class* type_info_ref = nullptr;
        }
        app::CageStructureToolStressTester__Class** type_info = &type_info_ref;
        inline app::CageStructureToolStressTester__Class* get_class() {
            return il2cpp::get_class<app::CageStructureToolStressTester__Class>(type_info, "", "CageStructureToolStressTester");
        }
        inline app::CageStructureToolStressTester* create() {
            return il2cpp::create_object<app::CageStructureToolStressTester>(get_class());
        }
    } // namespace CageStructureToolStressTester
} // namespace app::classes::types