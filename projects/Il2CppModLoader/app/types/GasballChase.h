#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GasballChase {
        namespace {
            app::GasballChase__Class* type_info_ref = nullptr;
        }
        app::GasballChase__Class** type_info = &type_info_ref;
        inline app::GasballChase__Class* get_class() {
            return il2cpp::get_class<app::GasballChase__Class>(type_info, "", "GasballChase");
        }
        inline app::GasballChase* create() {
            return il2cpp::create_object<app::GasballChase>(get_class());
        }
    } // namespace GasballChase
} // namespace app::classes::types
