#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoKeepPositionBehaviour {
        namespace {
            app::SkeetoKeepPositionBehaviour__Class* type_info_ref = nullptr;
        }
        app::SkeetoKeepPositionBehaviour__Class** type_info = &type_info_ref;
        inline app::SkeetoKeepPositionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoKeepPositionBehaviour__Class>(type_info, "", "SkeetoKeepPositionBehaviour");
        }
        inline app::SkeetoKeepPositionBehaviour* create() {
            return il2cpp::create_object<app::SkeetoKeepPositionBehaviour>(get_class());
        }
    } // namespace SkeetoKeepPositionBehaviour
} // namespace app::classes::types
