#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MantisHorizontalJumpAttackBehaviour {
        namespace {
            app::MantisHorizontalJumpAttackBehaviour__Class* type_info_ref = nullptr;
        }
        app::MantisHorizontalJumpAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::MantisHorizontalJumpAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MantisHorizontalJumpAttackBehaviour__Class>(type_info, "", "MantisHorizontalJumpAttackBehaviour");
        }
        inline app::MantisHorizontalJumpAttackBehaviour* create() {
            return il2cpp::create_object<app::MantisHorizontalJumpAttackBehaviour>(get_class());
        }
    } // namespace MantisHorizontalJumpAttackBehaviour
} // namespace app::classes::types
