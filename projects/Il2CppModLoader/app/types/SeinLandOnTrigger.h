#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinLandOnTrigger {
        namespace {
            app::SeinLandOnTrigger__Class* type_info_ref = nullptr;
        }
        app::SeinLandOnTrigger__Class** type_info = &type_info_ref;
        inline app::SeinLandOnTrigger__Class* get_class() {
            return il2cpp::get_class<app::SeinLandOnTrigger__Class>(type_info, "", "SeinLandOnTrigger");
        }
        inline app::SeinLandOnTrigger* create() {
            return il2cpp::create_object<app::SeinLandOnTrigger>(get_class());
        }
    } // namespace SeinLandOnTrigger
} // namespace app::classes::types