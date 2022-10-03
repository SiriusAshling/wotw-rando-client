#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinPinned {
        namespace {
            app::SeinPinned__Class* type_info_ref = nullptr;
        }
        app::SeinPinned__Class** type_info = &type_info_ref;
        inline app::SeinPinned__Class* get_class() {
            return il2cpp::get_class<app::SeinPinned__Class>(type_info, "", "SeinPinned");
        }
        inline app::SeinPinned* create() {
            return il2cpp::create_object<app::SeinPinned>(get_class());
        }
    } // namespace SeinPinned
} // namespace app::classes::types
