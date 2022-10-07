#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinFeatherFlap {
        namespace {
            app::SeinFeatherFlap__Class* type_info_ref = nullptr;
        }
        app::SeinFeatherFlap__Class** type_info = &type_info_ref;
        inline app::SeinFeatherFlap__Class* get_class() {
            return il2cpp::get_class<app::SeinFeatherFlap__Class>(type_info, "", "SeinFeatherFlap");
        }
        inline app::SeinFeatherFlap* create() {
            return il2cpp::create_object<app::SeinFeatherFlap>(get_class());
        }
    } // namespace SeinFeatherFlap
} // namespace app::classes::types