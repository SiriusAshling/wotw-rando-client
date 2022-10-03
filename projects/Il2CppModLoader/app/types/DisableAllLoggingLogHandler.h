#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DisableAllLoggingLogHandler {
        namespace {
            app::DisableAllLoggingLogHandler__Class* type_info_ref = nullptr;
        }
        app::DisableAllLoggingLogHandler__Class** type_info = &type_info_ref;
        inline app::DisableAllLoggingLogHandler__Class* get_class() {
            return il2cpp::get_class<app::DisableAllLoggingLogHandler__Class>(type_info, "Moon.ContinuousIntegration", "DisableAllLoggingLogHandler");
        }
        inline app::DisableAllLoggingLogHandler* create() {
            return il2cpp::create_object<app::DisableAllLoggingLogHandler>(get_class());
        }
    } // namespace DisableAllLoggingLogHandler
} // namespace app::classes::types
