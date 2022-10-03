#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EndPoint {
        namespace {
            app::EndPoint__Class* type_info_ref = nullptr;
        }
        app::EndPoint__Class** type_info = &type_info_ref;
        inline app::EndPoint__Class* get_class() {
            return il2cpp::get_class<app::EndPoint__Class>(type_info, "System.Net", "EndPoint");
        }
        inline app::EndPoint* create() {
            return il2cpp::create_object<app::EndPoint>(get_class());
        }
    } // namespace EndPoint
} // namespace app::classes::types
