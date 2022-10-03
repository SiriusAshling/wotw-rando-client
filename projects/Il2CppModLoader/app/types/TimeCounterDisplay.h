#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeCounterDisplay {
        namespace {
            app::TimeCounterDisplay__Class* type_info_ref = nullptr;
        }
        app::TimeCounterDisplay__Class** type_info = &type_info_ref;
        inline app::TimeCounterDisplay__Class* get_class() {
            return il2cpp::get_class<app::TimeCounterDisplay__Class>(type_info, "", "TimeCounterDisplay");
        }
        inline app::TimeCounterDisplay* create() {
            return il2cpp::create_object<app::TimeCounterDisplay>(get_class());
        }
    } // namespace TimeCounterDisplay
} // namespace app::classes::types
