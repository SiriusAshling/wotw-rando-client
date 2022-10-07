#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoEventInfo {
        namespace {
            app::MonoEventInfo__Class* type_info_ref = nullptr;
        }
        app::MonoEventInfo__Class** type_info = &type_info_ref;
        inline app::MonoEventInfo__Class* get_class() {
            return il2cpp::get_class<app::MonoEventInfo__Class>(type_info, "System.Reflection", "MonoEventInfo");
        }
        inline app::MonoEventInfo* create() {
            return il2cpp::create_object<app::MonoEventInfo>(get_class());
        }
        inline app::MonoEventInfo__Boxed* box(app::MonoEventInfo value) {
            return il2cpp::box_value<app::MonoEventInfo__Boxed>(get_class(), value);
        }
    } // namespace MonoEventInfo
} // namespace app::classes::types