#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AmplifyColorEffect {
        namespace {
            app::AmplifyColorEffect__Class* type_info_ref = nullptr;
        }
        app::AmplifyColorEffect__Class** type_info = &type_info_ref;
        inline app::AmplifyColorEffect__Class* get_class() {
            return il2cpp::get_class<app::AmplifyColorEffect__Class>(type_info, "", "AmplifyColorEffect");
        }
        inline app::AmplifyColorEffect* create() {
            return il2cpp::create_object<app::AmplifyColorEffect>(get_class());
        }
    } // namespace AmplifyColorEffect
} // namespace app::classes::types
