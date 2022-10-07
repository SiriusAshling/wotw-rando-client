#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeOutBreakable {
        namespace {
            app::TimeOutBreakable__Class* type_info_ref = nullptr;
        }
        app::TimeOutBreakable__Class** type_info = &type_info_ref;
        inline app::TimeOutBreakable__Class* get_class() {
            return il2cpp::get_class<app::TimeOutBreakable__Class>(type_info, "", "TimeOutBreakable");
        }
        inline app::TimeOutBreakable* create() {
            return il2cpp::create_object<app::TimeOutBreakable>(get_class());
        }
    } // namespace TimeOutBreakable
} // namespace app::classes::types