#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IntPtrPtr {
        namespace {
            app::IntPtrPtr__Class* type_info_ref = nullptr;
        }
        app::IntPtrPtr__Class** type_info = &type_info_ref;
        inline app::IntPtrPtr__Class* get_class() {
            return il2cpp::get_class<app::IntPtrPtr__Class>(type_info, "System", "IntPtr*");
        }
        inline app::IntPtrPtr* create() {
            return il2cpp::create_object<app::IntPtrPtr>(get_class());
        }
    } // namespace IntPtrPtr
} // namespace app::classes::types