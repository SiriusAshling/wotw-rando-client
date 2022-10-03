#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FirstChanceExceptionEventArgs {
        namespace {
            app::FirstChanceExceptionEventArgs__Class* type_info_ref = nullptr;
        }
        app::FirstChanceExceptionEventArgs__Class** type_info = &type_info_ref;
        inline app::FirstChanceExceptionEventArgs__Class* get_class() {
            return il2cpp::get_class<app::FirstChanceExceptionEventArgs__Class>(type_info, "System.Runtime.ExceptionServices", "FirstChanceExceptionEventArgs");
        }
        inline app::FirstChanceExceptionEventArgs* create() {
            return il2cpp::create_object<app::FirstChanceExceptionEventArgs>(get_class());
        }
    } // namespace FirstChanceExceptionEventArgs
} // namespace app::classes::types
