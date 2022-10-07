#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinLeached {
        namespace {
            app::SeinLeached__Class* type_info_ref = nullptr;
        }
        app::SeinLeached__Class** type_info = &type_info_ref;
        inline app::SeinLeached__Class* get_class() {
            return il2cpp::get_class<app::SeinLeached__Class>(type_info, "", "SeinLeached");
        }
        inline app::SeinLeached* create() {
            return il2cpp::create_object<app::SeinLeached>(get_class());
        }
    } // namespace SeinLeached
} // namespace app::classes::types