#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransferMotion {
        namespace {
            app::TransferMotion__Class* type_info_ref = nullptr;
        }
        app::TransferMotion__Class** type_info = &type_info_ref;
        inline app::TransferMotion__Class* get_class() {
            return il2cpp::get_class<app::TransferMotion__Class>(type_info, "RootMotion.Demos", "TransferMotion");
        }
        inline app::TransferMotion* create() {
            return il2cpp::create_object<app::TransferMotion>(get_class());
        }
    } // namespace TransferMotion
} // namespace app::classes::types