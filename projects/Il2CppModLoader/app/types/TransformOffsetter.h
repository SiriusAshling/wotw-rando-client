#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransformOffsetter {
        namespace {
            app::TransformOffsetter__Class* type_info_ref = nullptr;
        }
        app::TransformOffsetter__Class** type_info = &type_info_ref;
        inline app::TransformOffsetter__Class* get_class() {
            return il2cpp::get_class<app::TransformOffsetter__Class>(type_info, "", "TransformOffsetter");
        }
        inline app::TransformOffsetter* create() {
            return il2cpp::create_object<app::TransformOffsetter>(get_class());
        }
    } // namespace TransformOffsetter
} // namespace app::classes::types