#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseZone {
        namespace {
            app::BaseZone__Class* type_info_ref = nullptr;
        }
        app::BaseZone__Class** type_info = &type_info_ref;
        inline app::BaseZone__Class* get_class() {
            return il2cpp::get_class<app::BaseZone__Class>(type_info, "", "BaseZone");
        }
        inline app::BaseZone* create() {
            return il2cpp::create_object<app::BaseZone>(get_class());
        }
    } // namespace BaseZone
} // namespace app::classes::types
