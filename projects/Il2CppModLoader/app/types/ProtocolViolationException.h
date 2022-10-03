#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProtocolViolationException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProtocolViolationException__Class** type_info;
        inline app::ProtocolViolationException__Class* get_class() {
            return il2cpp::get_class<app::ProtocolViolationException__Class>(type_info, "System.Net", "ProtocolViolationException");
        }
        inline app::ProtocolViolationException* create() {
            return il2cpp::create_object<app::ProtocolViolationException>(get_class());
        }
    } // namespace ProtocolViolationException
} // namespace app::classes::types
