#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CriticalFinalizerObject {
        namespace {
            app::CriticalFinalizerObject__Class* type_info_ref = nullptr;
        }
        app::CriticalFinalizerObject__Class** type_info = &type_info_ref;
        inline app::CriticalFinalizerObject__Class* get_class() {
            return il2cpp::get_class<app::CriticalFinalizerObject__Class>(type_info, "System.Runtime.ConstrainedExecution", "CriticalFinalizerObject");
        }
        inline app::CriticalFinalizerObject* create() {
            return il2cpp::create_object<app::CriticalFinalizerObject>(get_class());
        }
    } // namespace CriticalFinalizerObject
} // namespace app::classes::types