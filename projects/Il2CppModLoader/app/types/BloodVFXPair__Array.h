#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BloodVFXPair__Array {
        namespace {
            app::BloodVFXPair__Array__Class* type_info_ref = nullptr;
        }
        app::BloodVFXPair__Array__Class** type_info = &type_info_ref;
        inline app::BloodVFXPair__Array__Class* get_class() {
            return il2cpp::get_class<app::BloodVFXPair__Array__Class>(type_info, "", "BloodVFXPair[]");
        }
        inline app::BloodVFXPair__Array* create() {
            return il2cpp::create_object<app::BloodVFXPair__Array>(get_class());
        }
    } // namespace BloodVFXPair__Array
} // namespace app::classes::types
