#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExceptionListener {
        namespace {
            app::ExceptionListener__Class* type_info_ref = nullptr;
        }
        app::ExceptionListener__Class** type_info = &type_info_ref;
        inline app::ExceptionListener__Class* get_class() {
            return il2cpp::get_class<app::ExceptionListener__Class>(type_info, "Moon.ExceptionProcessing", "ExceptionListener");
        }
        inline app::ExceptionListener* create() {
            return il2cpp::create_object<app::ExceptionListener>(get_class());
        }
    } // namespace ExceptionListener
} // namespace app::classes::types