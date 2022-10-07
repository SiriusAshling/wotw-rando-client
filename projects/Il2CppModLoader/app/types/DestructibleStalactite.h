#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DestructibleStalactite {
        namespace {
            app::DestructibleStalactite__Class* type_info_ref = nullptr;
        }
        app::DestructibleStalactite__Class** type_info = &type_info_ref;
        inline app::DestructibleStalactite__Class* get_class() {
            return il2cpp::get_class<app::DestructibleStalactite__Class>(type_info, "", "DestructibleStalactite");
        }
        inline app::DestructibleStalactite* create() {
            return il2cpp::create_object<app::DestructibleStalactite>(get_class());
        }
    } // namespace DestructibleStalactite
} // namespace app::classes::types