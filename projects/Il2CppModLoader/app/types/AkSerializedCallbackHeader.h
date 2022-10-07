#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkSerializedCallbackHeader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkSerializedCallbackHeader__Class** type_info;
        inline app::AkSerializedCallbackHeader__Class* get_class() {
            return il2cpp::get_class<app::AkSerializedCallbackHeader__Class>(type_info, "", "AkSerializedCallbackHeader");
        }
        inline app::AkSerializedCallbackHeader* create() {
            return il2cpp::create_object<app::AkSerializedCallbackHeader>(get_class());
        }
    } // namespace AkSerializedCallbackHeader
} // namespace app::classes::types