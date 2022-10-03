#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AllowPartiallyTrustedCallersAttribute {
        namespace {
            app::AllowPartiallyTrustedCallersAttribute__Class* type_info_ref = nullptr;
        }
        app::AllowPartiallyTrustedCallersAttribute__Class** type_info = &type_info_ref;
        inline app::AllowPartiallyTrustedCallersAttribute__Class* get_class() {
            return il2cpp::get_class<app::AllowPartiallyTrustedCallersAttribute__Class>(type_info, "System.Security", "AllowPartiallyTrustedCallersAttribute");
        }
        inline app::AllowPartiallyTrustedCallersAttribute* create() {
            return il2cpp::create_object<app::AllowPartiallyTrustedCallersAttribute>(get_class());
        }
    } // namespace AllowPartiallyTrustedCallersAttribute
} // namespace app::classes::types
