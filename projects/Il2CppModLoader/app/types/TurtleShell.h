#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurtleShell {
        namespace {
            app::TurtleShell__Class* type_info_ref = nullptr;
        }
        app::TurtleShell__Class** type_info = &type_info_ref;
        inline app::TurtleShell__Class* get_class() {
            return il2cpp::get_class<app::TurtleShell__Class>(type_info, "", "TurtleShell");
        }
        inline app::TurtleShell* create() {
            return il2cpp::create_object<app::TurtleShell>(get_class());
        }
        inline app::TurtleShell__Array* create_array(int size) {
            return il2cpp::array_new<app::TurtleShell__Array>(get_class(), size);
        }
    } // namespace TurtleShell
} // namespace app::classes::types
