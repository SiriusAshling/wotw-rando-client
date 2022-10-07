#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tonemapping__Enum {
        namespace {
            app::Tonemapping__Enum__Class* type_info_ref = nullptr;
        }
        app::Tonemapping__Enum__Class** type_info = &type_info_ref;
        inline app::Tonemapping__Enum__Class* get_class() {
            return il2cpp::get_class<app::Tonemapping__Enum__Class>(type_info, "AmplifyColor", "Tonemapping");
        }
        inline app::Tonemapping__Enum* create() {
            return il2cpp::create_object<app::Tonemapping__Enum>(get_class());
        }
    } // namespace Tonemapping__Enum
} // namespace app::classes::types