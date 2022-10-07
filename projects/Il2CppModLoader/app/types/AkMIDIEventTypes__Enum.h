#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMIDIEventTypes__Enum {
        namespace {
            app::AkMIDIEventTypes__Enum__Class* type_info_ref = nullptr;
        }
        app::AkMIDIEventTypes__Enum__Class** type_info = &type_info_ref;
        inline app::AkMIDIEventTypes__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkMIDIEventTypes__Enum__Class>(type_info, "", "AkMIDIEventTypes");
        }
        inline app::AkMIDIEventTypes__Enum* create() {
            return il2cpp::create_object<app::AkMIDIEventTypes__Enum>(get_class());
        }
    } // namespace AkMIDIEventTypes__Enum
} // namespace app::classes::types