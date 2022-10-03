#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventProvider_SessionInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventProvider_SessionInfo__Class** type_info;
        inline app::EventProvider_SessionInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::EventProvider_SessionInfo__Class>(type_info, "System.Diagnostics.Tracing", "EventProvider", "SessionInfo");
        }
        inline app::EventProvider_SessionInfo* create() {
            return il2cpp::create_object<app::EventProvider_SessionInfo>(get_class());
        }
        inline app::EventProvider_SessionInfo__Boxed* box(app::EventProvider_SessionInfo value) {
            return il2cpp::box_value<app::EventProvider_SessionInfo__Boxed>(get_class(), value);
        }
        inline app::EventProvider_SessionInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::EventProvider_SessionInfo__Array>(get_class(), size);
        }
    } // namespace EventProvider_SessionInfo
} // namespace app::classes::types
