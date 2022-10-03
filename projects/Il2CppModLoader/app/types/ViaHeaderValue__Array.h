#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ViaHeaderValue__Array {
        namespace {
            app::ViaHeaderValue__Array__Class* type_info_ref = nullptr;
        }
        app::ViaHeaderValue__Array__Class** type_info = &type_info_ref;
        inline app::ViaHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::ViaHeaderValue__Array__Class>(type_info, "System.Net.Http.Headers", "ViaHeaderValue[]");
        }
        inline app::ViaHeaderValue__Array* create() {
            return il2cpp::create_object<app::ViaHeaderValue__Array>(get_class());
        }
    } // namespace ViaHeaderValue__Array
} // namespace app::classes::types
