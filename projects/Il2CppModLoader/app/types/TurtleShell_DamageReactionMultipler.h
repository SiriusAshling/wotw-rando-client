#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurtleShell_DamageReactionMultipler {
        namespace {
            app::TurtleShell_DamageReactionMultipler__Class* type_info_ref = nullptr;
        }
        app::TurtleShell_DamageReactionMultipler__Class** type_info = &type_info_ref;
        inline app::TurtleShell_DamageReactionMultipler__Class* get_class() {
            return il2cpp::get_nested_class<app::TurtleShell_DamageReactionMultipler__Class>(type_info, "", "TurtleShell", "DamageReactionMultipler");
        }
        inline app::TurtleShell_DamageReactionMultipler* create() {
            return il2cpp::create_object<app::TurtleShell_DamageReactionMultipler>(get_class());
        }
        inline app::TurtleShell_DamageReactionMultipler__Boxed* box(app::TurtleShell_DamageReactionMultipler value) {
            return il2cpp::box_value<app::TurtleShell_DamageReactionMultipler__Boxed>(get_class(), value);
        }
        inline app::TurtleShell_DamageReactionMultipler__Array* create_array(int size) {
            return il2cpp::array_new<app::TurtleShell_DamageReactionMultipler__Array>(get_class(), size);
        }
    } // namespace TurtleShell_DamageReactionMultipler
} // namespace app::classes::types
