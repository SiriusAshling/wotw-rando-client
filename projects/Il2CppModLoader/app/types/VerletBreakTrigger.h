#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletBreakTrigger {
        namespace {
            app::VerletBreakTrigger__Class* type_info_ref = nullptr;
        }
        app::VerletBreakTrigger__Class** type_info = &type_info_ref;
        inline app::VerletBreakTrigger__Class* get_class() {
            return il2cpp::get_class<app::VerletBreakTrigger__Class>(type_info, "", "VerletBreakTrigger");
        }
        inline app::VerletBreakTrigger* create() {
            return il2cpp::create_object<app::VerletBreakTrigger>(get_class());
        }
    } // namespace VerletBreakTrigger
} // namespace app::classes::types