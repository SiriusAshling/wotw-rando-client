#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SuspensionManager_SuspensionTicket__Array {
        namespace {
            app::SuspensionManager_SuspensionTicket__Array__Class* type_info_ref = nullptr;
        }
        app::SuspensionManager_SuspensionTicket__Array__Class** type_info = &type_info_ref;
        inline app::SuspensionManager_SuspensionTicket__Array__Class* get_class() {
            return il2cpp::get_class<app::SuspensionManager_SuspensionTicket__Array__Class>(type_info, "Moon", "SuspensionManager+SuspensionTicket[]");
        }
        inline app::SuspensionManager_SuspensionTicket__Array* create() {
            return il2cpp::create_object<app::SuspensionManager_SuspensionTicket__Array>(get_class());
        }
    } // namespace SuspensionManager_SuspensionTicket__Array
} // namespace app::classes::types
