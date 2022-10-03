#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugObject {
        namespace {
            app::DebugObject__Class* type_info_ref = nullptr;
        }
        app::DebugObject__Class** type_info = &type_info_ref;
        inline app::DebugObject__Class* get_class() {
            return il2cpp::get_class<app::DebugObject__Class>(type_info, "", "DebugObject");
        }
        inline app::DebugObject* create() {
            return il2cpp::create_object<app::DebugObject>(get_class());
        }
    } // namespace DebugObject
} // namespace app::classes::types
