#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaapiConnectProfilerArgs {
        namespace {
            app::WaapiConnectProfilerArgs__Class* type_info_ref = nullptr;
        }
        app::WaapiConnectProfilerArgs__Class** type_info = &type_info_ref;
        inline app::WaapiConnectProfilerArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiConnectProfilerArgs__Class>(type_info, "", "WaapiConnectProfilerArgs");
        }
        inline app::WaapiConnectProfilerArgs* create() {
            return il2cpp::create_object<app::WaapiConnectProfilerArgs>(get_class());
        }
    } // namespace WaapiConnectProfilerArgs
} // namespace app::classes::types