#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlaymodeEnteredEvent {
        namespace {
            app::PlaymodeEnteredEvent__Class* type_info_ref = nullptr;
        }
        app::PlaymodeEnteredEvent__Class** type_info = &type_info_ref;
        inline app::PlaymodeEnteredEvent__Class* get_class() {
            return il2cpp::get_class<app::PlaymodeEnteredEvent__Class>(type_info, "", "PlaymodeEnteredEvent");
        }
        inline app::PlaymodeEnteredEvent* create() {
            return il2cpp::create_object<app::PlaymodeEnteredEvent>(get_class());
        }
    } // namespace PlaymodeEnteredEvent
} // namespace app::classes::types
