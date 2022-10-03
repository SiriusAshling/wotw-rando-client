#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Larva {
        namespace {
            app::Larva__Class* type_info_ref = nullptr;
        }
        app::Larva__Class** type_info = &type_info_ref;
        inline app::Larva__Class* get_class() {
            return il2cpp::get_class<app::Larva__Class>(type_info, "", "Larva");
        }
        inline app::Larva* create() {
            return il2cpp::create_object<app::Larva>(get_class());
        }
    } // namespace Larva
} // namespace app::classes::types
