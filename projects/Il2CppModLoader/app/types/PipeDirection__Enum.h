#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PipeDirection__Enum {
        namespace {
            app::PipeDirection__Enum__Class* type_info_ref = nullptr;
        }
        app::PipeDirection__Enum__Class** type_info = &type_info_ref;
        inline app::PipeDirection__Enum__Class* get_class() {
            return il2cpp::get_class<app::PipeDirection__Enum__Class>(type_info, "System.IO.Pipes", "PipeDirection");
        }
        inline app::PipeDirection__Enum* create() {
            return il2cpp::create_object<app::PipeDirection__Enum>(get_class());
        }
    } // namespace PipeDirection__Enum
} // namespace app::classes::types
