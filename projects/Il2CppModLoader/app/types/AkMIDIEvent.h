#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMIDIEvent {
        namespace {
            app::AkMIDIEvent__Class* type_info_ref = nullptr;
        }
        app::AkMIDIEvent__Class** type_info = &type_info_ref;
        inline app::AkMIDIEvent__Class* get_class() {
            return il2cpp::get_class<app::AkMIDIEvent__Class>(type_info, "", "AkMIDIEvent");
        }
        inline app::AkMIDIEvent* create() {
            return il2cpp::create_object<app::AkMIDIEvent>(get_class());
        }
    } // namespace AkMIDIEvent
} // namespace app::classes::types