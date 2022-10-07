#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCTextModifier__Array {
        namespace {
            app::CCTextModifier__Array__Class* type_info_ref = nullptr;
        }
        app::CCTextModifier__Array__Class** type_info = &type_info_ref;
        inline app::CCTextModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::CCTextModifier__Array__Class>(type_info, "", "CCTextModifier[]");
        }
        inline app::CCTextModifier__Array* create() {
            return il2cpp::create_object<app::CCTextModifier__Array>(get_class());
        }
    } // namespace CCTextModifier__Array
} // namespace app::classes::types