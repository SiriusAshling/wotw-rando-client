#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleSwayAnimPostprocess__Array {
        namespace {
            app::SimpleSwayAnimPostprocess__Array__Class* type_info_ref = nullptr;
        }
        app::SimpleSwayAnimPostprocess__Array__Class** type_info = &type_info_ref;
        inline app::SimpleSwayAnimPostprocess__Array__Class* get_class() {
            return il2cpp::get_class<app::SimpleSwayAnimPostprocess__Array__Class>(type_info, "Moon", "SimpleSwayAnimPostprocess[]");
        }
        inline app::SimpleSwayAnimPostprocess__Array* create() {
            return il2cpp::create_object<app::SimpleSwayAnimPostprocess__Array>(get_class());
        }
    } // namespace SimpleSwayAnimPostprocess__Array
} // namespace app::classes::types